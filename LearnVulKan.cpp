#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include "VulKan.h"
int main() {
    VulKan app;

    try 
    {
        app.run();
    }
    catch (const std::exception & e) 
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

