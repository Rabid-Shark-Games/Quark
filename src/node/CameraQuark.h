//
// Created by creeper on 11/5/21.
//

#ifndef QUARK_CAMERAQUARK_H
#define QUARK_CAMERAQUARK_H

#include "Quark.h"

#include <GLFW/glfw3.h>

namespace node::quark {
    class CameraQuark : public Quark {
    public:
        ~CameraQuark() override;

        void Init(std::weak_ptr<node::Node> node) override;

        void RunFrame(std::weak_ptr<node::Node> node) override;

        void RunPhysics(std::weak_ptr<node::Node> node) override;

        void CameraBegin(GLFWwindow *window);

        void CameraEnd(GLFWwindow *window);
    };
}


#endif //QUARK_CAMERAQUARK_H
