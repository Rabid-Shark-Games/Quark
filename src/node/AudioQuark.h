//
// Created by Zach on 11/5/2021.
//

#ifndef QUARK_AUDIOQUARK_H
#define QUARK_AUDIOQUARK_H

#include "Quark.h"

namespace node::quark {
    class AudioQuark : public Quark{
    public:
        void RunFrame(Node *node) override;

        void Init(Node *node) override;

        void RunPhysics(Node *node) override;

        ~AudioQuark() override;
    };
}

#endif //QUARK_AUDIOQUARK_H
