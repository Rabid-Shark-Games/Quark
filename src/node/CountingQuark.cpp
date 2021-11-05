//
// Created by creeper on 11/4/21.
//

#include "CountingQuark.h"

#include <iostream>

namespace node::component {
    void CountingQuark::RunFrame() {
        this->x++;
        std::cout << x;
    }

    void CountingQuark::Init() {
        this->x = 0;
    }

    void CountingQuark::RunPhysics() {

    }

    void CountingQuark::DeInit() {

    }
}