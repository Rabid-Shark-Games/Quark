//
// Created by creeper on 11/5/21.
//

#ifndef QUARK_WORLD_H
#define QUARK_WORLD_H

#include "Node.h"

#include <vector>

namespace node {
    class World {
    public:
        bool Process();

        std::weak_ptr<Node> GetCurrentCamera();

        void SetCurrentCamera(std::weak_ptr<Node> newCamera);

        std::shared_ptr<Node> AddNode();
    private:
        std::weak_ptr<Node> currentCamera;
        std::vector<std::shared_ptr<Node>> nodes;
    };
}


#endif //QUARK_WORLD_H
