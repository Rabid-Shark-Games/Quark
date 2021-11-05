//
// Created by creeper on 11/4/21.
//

#include "Node.h"

namespace node {
    std::vector<std::shared_ptr<Node>> *Node::GetChildren() {
        return nullptr;
    }

    void Node::Init() {

    }

    void Node::AddComponent(const std::shared_ptr<node::component::Quark> &component) {
        component->Init();
        this->components.push_back(component);
    }

    void Node::Physics() {
        for (const auto &component: this->components) {
            component->RunPhysics();
        }
    }

    void Node::Frame() {
        for (const auto &component: this->components) {
            component->RunFrame();
        }
    }
}