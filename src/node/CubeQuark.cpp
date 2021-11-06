//
// Created by creeper on 11/5/21.
//

#include "CubeQuark.h"

node::quark::CubeQuark::~CubeQuark() {

}

void node::quark::CubeQuark::RunFrame(std::weak_ptr<node::Node> node) {
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
    glVertexAttribPointer(
            0,
            3,
            GL_FLOAT,
            GL_FALSE,
            0,
            (void *) 0
    );

    glDrawArrays(GL_TRIANGLES, 0, 3);
    glDisableVertexAttribArray(0);
}

void node::quark::CubeQuark::Init(std::weak_ptr<node::Node> node) {
    std::cout << "THIS DID NOT WORK!\n";

    static const GLfloat g_vertex_buffer_data[] = {
            -1.0f, -1.0f, 0.0f,
            1.0f, -1.0f, 0.0f,
            0.0f, 1.0f, 0.0f,
    };

    glGenVertexArrays(1, &this->VertexArrayID);
    glBindVertexArray(this->VertexArrayID);

    glGenBuffers(1, &this->VBO);
    glBindBuffer(GL_ARRAY_BUFFER, this->VBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);
}

void node::quark::CubeQuark::RunPhysics(std::weak_ptr<node::Node> node) {

}
