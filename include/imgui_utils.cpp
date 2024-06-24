#include "./imgui_utils.h"
#include "../external/imgui/imgui.h"
#include <iostream>

void ImGuiNewPanel(const char *title, void (*action)())
{
    ImGui::Begin(title);
    action();
    ImGui::End();
}

void ImGuiOpenLinkButton(const char *label, const char *url)
{ // Open link on button press
    if (ImGui::Button(label))
    {
        std::string command = "open " + std::string(url);
        std::system(command.c_str());
    }
}