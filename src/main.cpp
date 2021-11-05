//
// Created by creeper on 11/4/21.
//

#include "node/Node.h"
#include "node/CountingQuark.h"

#include <iostream>

int main() {
    node::Node node;
    node.Init();
    node.AddComponent<node::component::CountingQuark>();

    for (int x = 1; x <= 10; x++) {
        node.Frame();
        if (x % 8 == 0) {
            node.RemoveComponent<node::component::CountingQuark>();
        }
    }

    return 0;
}