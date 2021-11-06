//
// Created by creeper on 11/5/21.
//

#ifndef QUARK_CUBEQUARK_H
#define QUARK_CUBEQUARK_H

#include <GL/glew.h>
#include "Quark.h"

namespace node::quark {
    class CubeQuark : public Quark {
    public:
        ~CubeQuark() override;

        void RunPhysics(std::weak_ptr<node::Node> node) override;

        void RunFrame(std::weak_ptr<node::Node> node) override;

        void Init(std::weak_ptr<node::Node> node) override;
    private:
        GLuint VertexArrayID;
        GLuint VBO;
    };
}


#endif //QUARK_CUBEQUARK_H
