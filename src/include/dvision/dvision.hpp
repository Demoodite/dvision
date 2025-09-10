#include <iostream>
#include <logger.hpp>
#include <string>

#include <GL/glew.h>

#include <GL/glut.h>

#include <GLFW/glfw3.h>

namespace dvision {
class Dvision {
  private:
    std::string mWindowName;

    void setupGlfw() {
        logger::infoLog("GLFW");
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    }

    void setupWindow() {
        logger::infoLog(mWindowName + std::string("window"));

        GLFWwindow *window =
            glfwCreateWindow(800, 600, mWindowName.c_str(), NULL, NULL);
        if (window == NULL) {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            return;
        }
        glfwMakeContextCurrent(window);
        while (1) {
        }
    }

  public:
    Dvision(std::string windowName) {
        mWindowName = windowName;

        setupGlfw();
        setupWindow();
    }
};
} // namespace dvision
