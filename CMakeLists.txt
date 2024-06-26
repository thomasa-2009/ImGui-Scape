cmake_minimum_required(VERSION 3.10)
project(ImGui-Scape)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 3.3 REQUIRED)
find_package(GLEW REQUIRED)

set(IMGUI_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/imgui)
set(CUSTOM_INCLUDE_DIR include)
set(IMGUI_SOURCES
    ${IMGUI_SOURCE_DIR}/imgui.cpp
    ${IMGUI_SOURCE_DIR}/imgui_impl_glfw.cpp
    ${IMGUI_SOURCE_DIR}/imgui_impl_opengl3.cpp
    ${IMGUI_SOURCE_DIR}/imgui_draw.cpp
    ${IMGUI_SOURCE_DIR}/imgui_widgets.cpp
    ${IMGUI_SOURCE_DIR}/imgui_tables.cpp
    ${IMGUI_SOURCE_DIR}/imgui_demo.cpp
    ${CUSTOM_INCLUDE_DIR}/utils/imgui_utils.cpp
    ${CUSTOM_INCLUDE_DIR}/game/player.cpp
    ${CUSTOM_INCLUDE_DIR}/game/game.cpp
        include/panels/admin_panel.cpp
        include/panels/admin_panel.h
        include/game/game.cpp
        include/game/game.h
        include/game/player.cpp
        include/game/player.h
        include/game/player_skills/skill.cpp
        include/game/player_skills/skill.h

)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/external/
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp ${IMGUI_SOURCES})

target_link_libraries(${PROJECT_NAME}
glfw
GLEW::GLEW
)