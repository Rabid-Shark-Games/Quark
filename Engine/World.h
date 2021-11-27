//
// Created by Zach on 11/26/2021.
//

#include "glm/glm.hpp"
#include "glm/gtx/quaternion.hpp"
#include <map>

#include "Object.cpp"

#ifndef QUARK_WORLD_H
#define QUARK_WORLD_H

namespace world {

    struct location {
        glm::vec3 position;
        glm::quat rotation;
    };

    class World {
    public:
        world::location camera_position;
        std::map<int, object::Object> objects;

        void delete_object(int id);
    };
}

#endif //QUARK_WORLD_H
