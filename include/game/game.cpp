//
// Created by Thomas Anwandter on 25/6/2024.
//

#include "game.h"

// Made by Thomas Anwandter
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <imgui/imgui.h>
#include <imgui/imgui_impl_glfw.h>
#include <imgui/imgui_impl_opengl3.h>
#include <game/game.h>

int game::start(void (*action)()) {
    glfwInit();
    GLFWwindow *window = glfwCreateWindow(1280, 720, "ImGui-Scape", NULL, NULL);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    const char *glsl_version = "#version 120";

    glewExperimental = true;
    if (glewInit() != GLEW_OK) {
        std::cout << "Hello, world!" << std::endl;
        return -1;
    }

    // Setup ImGui Context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    ImGui::StyleColorsDark();
    (void) io;

    // Setup ImGui GLFW bindings
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // Run void (*action)()
        action();

        // Renderring
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(0.45f, 0.55f, 0.60f, 1.00f);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
