//
// Created by creeper on 11/4/21.
//

#include <memory>
#include "windowing/Window.h"

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

    window->Run();

    return 0;
}