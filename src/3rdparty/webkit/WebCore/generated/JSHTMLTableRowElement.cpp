/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSHTMLTableRowElement.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLTableRowElement.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLTableRowElementTableEntries[] =
{
    { "rowIndex", JSHTMLTableRowElement::RowIndexAttrNum, DontDelete|ReadOnly, 0, &JSHTMLTableRowElementTableEntries[9] },
    { 0, 0, 0, 0, 0 },
    { "vAlign", JSHTMLTableRowElement::VAlignAttrNum, DontDelete, 0, 0 },
    { "cells", JSHTMLTableRowElement::CellsAttrNum, DontDelete|ReadOnly, 0, &JSHTMLTableRowElementTableEntries[12] },
    { 0, 0, 0, 0, 0 },
    { "align", JSHTMLTableRowElement::AlignAttrNum, DontDelete, 0, 0 },
    { "bgColor", JSHTMLTableRowElement::BgColorAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "sectionRowIndex", JSHTMLTableRowElement::SectionRowIndexAttrNum, DontDelete|ReadOnly, 0, &JSHTMLTableRowElementTableEntries[10] },
    { "ch", JSHTMLTableRowElement::ChAttrNum, DontDelete, 0, &JSHTMLTableRowElementTableEntries[11] },
    { "chOff", JSHTMLTableRowElement::ChOffAttrNum, DontDelete, 0, 0 },
    { "constructor", JSHTMLTableRowElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLTableRowElementTable = 
{
    2, 13, JSHTMLTableRowElementTableEntries, 9
};

/* Hash table for constructor */

static const HashEntry JSHTMLTableRowElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableRowElementConstructorTable = 
{
    2, 1, JSHTMLTableRowElementConstructorTableEntries, 1
};

class JSHTMLTableRowElementConstructor : public DOMObject {
public:
    JSHTMLTableRowElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLTableRowElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableRowElementConstructor::info = { "HTMLTableRowElementConstructor", 0, &JSHTMLTableRowElementConstructorTable, 0 };

bool JSHTMLTableRowElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElementConstructor, DOMObject>(exec, &JSHTMLTableRowElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableRowElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLTableRowElementPrototypeTableEntries[] =
{
    { "insertCell", JSHTMLTableRowElement::InsertCellFuncNum, DontDelete|Function, 1, 0 },
    { "deleteCell", JSHTMLTableRowElement::DeleteCellFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSHTMLTableRowElementPrototypeTable = 
{
    2, 2, JSHTMLTableRowElementPrototypeTableEntries, 2
};

const ClassInfo JSHTMLTableRowElementPrototype::info = { "HTMLTableRowElementPrototype", 0, &JSHTMLTableRowElementPrototypeTable, 0 };

JSObject* JSHTMLTableRowElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLTableRowElementPrototype>(exec, "[[JSHTMLTableRowElement.prototype]]");
}

bool JSHTMLTableRowElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLTableRowElementPrototypeFunction, JSObject>(exec, &JSHTMLTableRowElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLTableRowElement::info = { "HTMLTableRowElement", &JSHTMLElement::info, &JSHTMLTableRowElementTable, 0 };

JSHTMLTableRowElement::JSHTMLTableRowElement(ExecState* exec, HTMLTableRowElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLTableRowElementPrototype::self(exec));
}

bool JSHTMLTableRowElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElement, JSHTMLElement>(exec, &JSHTMLTableRowElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableRowElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RowIndexAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsNumber(imp->rowIndex());
    }
    case SectionRowIndexAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsNumber(imp->sectionRowIndex());
    }
    case CellsAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->cells()));
    }
    case AlignAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsString(imp->align());
    }
    case BgColorAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsString(imp->bgColor());
    }
    case ChAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsString(imp->ch());
    }
    case ChOffAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsString(imp->chOff());
    }
    case VAlignAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        return jsString(imp->vAlign());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableRowElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLTableRowElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLTableRowElementTable, this);
}

void JSHTMLTableRowElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case BgColorAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        imp->setBgColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        imp->setCh(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChOffAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        imp->setChOff(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VAlignAttrNum: {
        HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(impl());

        imp->setVAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableRowElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLTableRowElementConstructor>(exec, "[[HTMLTableRowElement.constructor]]");
}
JSValue* JSHTMLTableRowElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLTableRowElement::info))
      return throwError(exec, TypeError);

    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObj)->impl());

    switch (id) {
    case JSHTMLTableRowElement::InsertCellFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        int index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->insertCell(index, ec)));
        setDOMException(exec, ec);
        return result;
    }
    case JSHTMLTableRowElement::DeleteCellFuncNum: {
        ExceptionCode ec = 0;
        bool indexOk;
        int index = args[0]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }

        imp->deleteCell(index, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    }
    return 0;
}

}
