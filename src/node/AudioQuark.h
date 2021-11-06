//
// Created by Zach on 11/5/2021.
//

#ifndef QUARK_AUDIOQUARK_H
#define QUARK_AUDIOQUARK_H

#include "Quark.h"

namespace node::quark {
    class AudioQuark : public Quark{
    public:
        void RunFrame(std::weak_ptr<node::Node> node) override;

        void Init(std::weak_ptr<node::Node> node) override;

        void RunPhysics(std::weak_ptr<node::Node> node) override;

        ~AudioQuark() override;
    };
}

#endif //QUARK_AUDIOQUARK_H
