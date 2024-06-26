#include <iostream>
using namespace std;

namespace ImGuiUtils {
    void NewPanel(string title, void (*action)());

    void LinkButton(const char *label, const char *url);

    void Button(const char *label, bool tooltip, const char *tooltip_text, void (*action)());

    void InputText(string label, string &variable_to_change);
}
