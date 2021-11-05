//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_NODE_H
#define QUARK_NODE_H

#include "Quark.h"

#include <memory>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

namespace node {
    class Node {
    public:
        template<class T>
        std::weak_ptr<T> GetNode() {

        }

        std::vector<std::shared_ptr<Node>> *GetChildren();

        void Init();

        template<class T>
        void AddComponent() {
            this->RemoveComponent<T>();

            std::shared_ptr<component::Quark> component(new T());

            this->AddComponent(component);
        }

        template<class T>
        void RemoveComponent() {
            auto iter = this->components.begin();

            while (iter != this->components.end()) {
                if (dynamic_cast<T*>(iter->get())) {
                    this->components.erase(iter);
                } else {
                    iter++;
                }
            }
        }

        void Frame();

        void Physics();

    private:
        void AddComponent(const std::shared_ptr<node::component::Quark> &component);

        std::vector<std::shared_ptr<node::component::Quark>> components;
        std::vector<std::shared_ptr<Node>> children;
    };
}

#endif //QUARK_NODE_H
