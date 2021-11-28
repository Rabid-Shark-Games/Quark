//
// Created by Zach on 11/27/2021.
//

#include "Mesh.h"
#include <vector>

#ifndef QUARK_MESHBUILDER_H
#define QUARK_MESHBUILDER_H

namespace meshBuilder {

    enum Mode {Tris}; //TODO: fix these names or something

    class MeshBuilder {
    public:
        mesh::Mesh mesh;
        Mode mode;
        uint16_t count = 0;
        std::vector<glm::vec3> temp;

        void begin(Mode start_mode);

        void addVertex(glm::vec3 vertex);

        void indexVerticies();

        void commit();
    };
}

#endif //QUARK_MESHBUILDER_H
