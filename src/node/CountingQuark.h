//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_COUNTINGQUARK_H
#define QUARK_COUNTINGQUARK_H

#include "Quark.h"

namespace node::component {
    class CountingQuark : public Quark {
    public:
        void RunFrame() override;

        void Init() override;

    private:
        void RunPhysics() override;

        void DeInit() override;

    private:
        int x = 0;
    };
}

#endif //QUARK_COUNTINGQUARK_H
