//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_QUARK_H
#define QUARK_QUARK_H

#include "Node.h"

namespace node::quark {
    class Quark {
    public:
        virtual ~Quark() = default;

        virtual void RunFrame(std::weak_ptr<node::Node> node) = 0;

        virtual void RunPhysics(std::weak_ptr<node::Node> node) = 0;

        virtual void Init(std::weak_ptr<node::Node> node) = 0;
    };
}

#endif //QUARK_QUARK_H
