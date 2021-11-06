//
// Created by creeper on 11/4/21.
//

#include "Node.h"
#include "Quark.h"

std::vector<std::shared_ptr<node::Node>> *node::Node::GetChildren() {
    return nullptr;
}

void node::Node::Init() {

}

void node::Node::AddQuark(const std::shared_ptr<node::quark::Quark> &quark) {
    quark->Init(this->shared_from_this());
    this->quarks.push_back(quark);
}

void node::Node::Physics() {
    for (const auto &quark: this->quarks) {
        quark->RunPhysics(this->shared_from_this());
    }
    auto iter = this->children.begin();
    while (iter != this->children.end()) {
        if (iter->get()->WantsDeletion()) {
            this->children.erase(iter);
        } else {
            iter->get()->Physics();
        }
    }
}

void node::Node::Frame() {
    for (const auto &component: this->quarks) {
        component->RunFrame(this->shared_from_this());
    }
    auto iter = this->children.begin();
    while (iter != this->children.end()) {
        if (iter->get()->WantsDeletion()) {
            this->children.erase(iter);
        } else {
            iter->get()->Frame();
        }
    }
}

bool node::Node::WantsDeletion() const {
    return this->wantsDeletion;
}

node::Node::Node(node::World *world) {
    this->world = world;
}

node::World *node::Node::GetWorld() {
    return this->world;
}
