//
// Created by creeper on 11/4/21.
//

#ifndef QUARK_QUARK_H
#define QUARK_QUARK_H

namespace node::component {
    class Quark {
    public:
        virtual void RunFrame() = 0;
        virtual void RunPhysics() = 0;
        virtual void DeInit() = 0;
        virtual void Init() = 0;
    };
}

#endif //QUARK_QUARK_H
