#ifndef CATALYST_HIERARCHYVIEW_H
#define CATALYST_HIERARCHYVIEW_H

#include "../../../ui/views/IView.h"

namespace Catalyst {
    class EMenuItem;

    class EButton;

    class ETree;

    class EText;

    class ESection;

    class HierarchyView : public IView {
    protected:
        EMenuItem *selectInvert = nullptr;
        EMenuItem *selectHierarchy = nullptr;
        EMenuItem *selectAll = nullptr;
        EButton *deleteButton = nullptr;
        EMenuItem *addEmpty = nullptr;
        IElement *hierarchyList;
        IElement *hierarchyContainer;
    public:

        void onInitialize() override;

        IElement *copy() override;

        void onEvent(Catalyst::IEventPayload *payload) override;

    };

}

#endif
