//
// Created by creeper on 11/4/21.
//

#include "CountingQuark.h"

#include <iostream>

void node::quark::CountingQuark::RunFrame(node::Node *node) {
    this->x++;
    std::cout << x;
}

void node::quark::CountingQuark::Init(node::Node *node) {
    this->x = 0;
}

void node::quark::CountingQuark::RunPhysics(node::Node *node) {

}

node::quark::CountingQuark::~CountingQuark() = default;