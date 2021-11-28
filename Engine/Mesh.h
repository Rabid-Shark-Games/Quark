//
// Created by Zach on 11/27/2021.
//

#include <vector>
#include "glm/glm.hpp"

#ifndef QUARK_MESH_H
#define QUARK_MESH_H

namespace mesh
{
    class Mesh
            {
    public:
        std::vector<glm::vec3> verticies;
        std::vector<uint32_t> indicies;
    };
}


#endif //QUARK_MESH_H
