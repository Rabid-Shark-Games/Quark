//
// Created by creeper on 11/5/21.
//

#include "World.h"

#include <utility>

bool node::World::Process() {
    auto iter = this->nodes.begin();
    while (iter != this->nodes.end()) {
        if (iter->get()->WantsDeletion()) {
            this->nodes.erase(iter);
        } else {
            iter->get()->Frame();
            iter++;
        }
    }
    return false;
}

std::weak_ptr<node::Node> node::World::GetCurrentCamera() {
    return this->currentCamera;
}

std::shared_ptr<node::Node> node::World::AddNode() {
    auto node = std::make_shared<Node>(this);
    node->Init();

    this->nodes.push_back(node);

    return node;
}

void node::World::SetCurrentCamera(std::weak_ptr<Node> newCamera) {
    this->currentCamera = std::move(newCamera);
}
