//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_COUNTINGQUARK_H
#define QUARK_COUNTINGQUARK_H

#include "Quark.h"

namespace node::quark {
    class CountingQuark : public Quark {
    public:
        void RunFrame(Node *node) override;

        void Init(Node *node) override;

        void RunPhysics(Node *node) override;

        ~CountingQuark() override;

    private:
        int x = 0;
    };
}

#endif //QUARK_COUNTINGQUARK_H
