//
// Created by Zach on 11/27/2021.
//

#include "MeshBuilder.h"
#include "glm/glm.hpp"

void meshBuilder::MeshBuilder::begin(meshBuilder::Mode start_mode) {
    mode = start_mode;
}

void meshBuilder::MeshBuilder::addVertex(glm::vec3 vertex) {
    temp.emplace_back(vertex);
}

void meshBuilder::MeshBuilder::indexVerticies() {

}

void meshBuilder::MeshBuilder::commit() {
    if (mode == Tris) {
        for (int face = 0; face < floor(temp.size() / 3.0); face++) {
            for (int vertex = 0; vertex < 3; vertex ++) {
                int test = -1;
                for (int test_vertex = 0; test_vertex < mesh.verticies.size(); test_vertex++) {
                    if (mesh.verticies[test_vertex] == temp[face * 3 + vertex]) {
                        test = test_vertex;
                        break;
                    }
                }
                if (test == -1) {
                    mesh.verticies.emplace_back(temp[face * 3 + vertex]);
                    mesh.indicies.emplace_back(mesh.verticies.size() - 1);
                } else {
                    mesh.indicies.emplace_back(test);
                }
            }
        }

    }
}