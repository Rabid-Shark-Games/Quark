//
// Created by creeper on 11/5/21.
//

#include "CameraQuark.h"

#include "World.h"

void node::quark::CameraQuark::Init(std::weak_ptr<node::Node> node) {
    node.lock()->GetWorld()->SetCurrentCamera(node);
}

void node::quark::CameraQuark::CameraEnd(GLFWwindow *window) {
    glfwSwapBuffers(window);
}

void node::quark::CameraQuark::CameraBegin(GLFWwindow *window) {
    glClearColor(0.03, 0.17, 0.53, 1.0);

    glClear(GL_COLOR_BUFFER_BIT);
}

void node::quark::CameraQuark::RunFrame(std::weak_ptr<node::Node> node) {

}

void node::quark::CameraQuark::RunPhysics(std::weak_ptr<node::Node> node) {

}

node::quark::CameraQuark::~CameraQuark() {

}
