//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_NODE_H
#define QUARK_NODE_H

#include <memory>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

namespace node {
    class World;

    namespace quark {
        class Quark;
    }

    class Node : public std::enable_shared_from_this<Node> {
    public:
        Node(World *world);

        template<class T>
        std::weak_ptr<T> GetQuark() {
            for (const auto &quark: this->quarks) {
                if (dynamic_cast<T *>(quark.get())) {
                    return std::weak_ptr<T>(std::dynamic_pointer_cast<T>(quark));
                }
            }
            return {};
        }

        std::vector<std::shared_ptr<Node>> *GetChildren();

        void Init();

        template<class T>
        void AddQuark() {
            this->RemoveQuark<T>();

            std::shared_ptr<quark::Quark> quark(new T());

            this->AddQuark(quark);
        }

        template<class T>
        void RemoveQuark() {
            auto iter = this->quarks.begin();

            while (iter != this->quarks.end()) {
                if (dynamic_cast<T *>(iter->get())) {
                    this->quarks.erase(iter);
                } else {
                    iter++;
                }
            }
        }

        void Frame();

        void Physics();

        bool WantsDeletion() const;

        World *GetWorld();

    private:
        void AddQuark(const std::shared_ptr<quark::Quark> &component);

        std::vector<std::shared_ptr<quark::Quark>> quarks;
        std::vector<std::shared_ptr<Node>> children;

        bool wantsDeletion = false;

        World *world;
    };
}

#endif //QUARK_NODE_H
