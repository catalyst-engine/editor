#ifndef CATALYST_ELEMENTSSTATE_H
#define CATALYST_ELEMENTSSTATE_H

#include "../../util/structures/List.h"
#include "../../util/debug/ILoggable.h"
#include <string>

namespace Catalyst {
    class IElement;

    class ElementsState : public ILoggable {
    private:
        Catalyst::List<IElement> elements;

        IElement *searchFor(Catalyst::ListItem<IElement> *item, const std::string &id);

    public:
        IElement *add(IElement *element, IElement *parent);

        IElement *getElementById(std::string id);

        Catalyst::List<IElement> *getElements();
    };
}

#endif