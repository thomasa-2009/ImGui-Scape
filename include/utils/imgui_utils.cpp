#include "./imgui_utils.h"
#include "../external/imgui/imgui.h"
using namespace std;

void ImGuiUtils::NewPanel(string title, void (*action)())
{
    if (ImGui::Begin(title.c_str())) {
        action();
        ImGui::End();
    }
    
}

void ImGuiUtils::LinkButton(const char *label, const char *url)
{ // Open link on button press
    if (ImGui::Button(label))
    {
        std::string command = "open " + std::string(url);
        std::system(command.c_str());
    }
}

void ImGuiUtils::Button(const char* label, bool tooltip, const char* tooltip_text, void (*action)())
{
    if (ImGui::Button(label))
        action();
        if (tooltip == true) {
            if(ImGui::IsItemHovered())
                ImGui::SetTooltip("%s", tooltip_text);
        }
}

void ImGuiUtils::InputText(string label, string& variable_to_change) {
          static char buf[256];
          strncpy(buf, variable_to_change.c_str(), sizeof(buf));
          buf[sizeof(buf) - 1] = '\0';
          if (ImGui::InputText("Name:", buf, sizeof(buf))) {
            variable_to_change = buf;
          }
}