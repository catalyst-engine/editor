#include "SectionView.h"
namespace Catalyst::ui {
    void SectionView::render() {
        ImGui::Begin(title.c_str());
        renderChildren();
        ImGui::End();
    }

    void SectionView::load(pugi::xml_node node) {
        title = node.attribute("title").as_string();
    }
}