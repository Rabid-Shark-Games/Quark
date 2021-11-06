//
// Created by creeper on 11/4/21.
//

#include <memory>
#include "windowing/Window.h"
#include "node/CameraQuark.h"
#include "node/CubeQuark.h"

int main() {
    std::unique_ptr<windowing::Window> window;

    {
        windowing::WindowProperties properties {
                800,
                600,
                "Quark"
        };

        window = std::make_unique<windowing::Window>(properties);
    }

    {
        auto node = window->GetWorld()->AddNode();
        node->AddQuark<node::quark::CameraQuark>();
        node->AddQuark<node::quark::CubeQuark>();
    }

    window->Run();

    return 0;
}