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

#include "JSHTMLTableCellElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTableCellElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLTableCellElementTableEntries[] =
{
    { "cellIndex", JSHTMLTableCellElement::CellIndexAttrNum, DontDelete|ReadOnly, 0, &JSHTMLTableCellElementTableEntries[17] },
    { 0, 0, 0, 0, 0 },
    { "colSpan", JSHTMLTableCellElement::ColSpanAttrNum, DontDelete, 0, 0 },
    { "width", JSHTMLTableCellElement::WidthAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "noWrap", JSHTMLTableCellElement::NoWrapAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[20] },
    { "ch", JSHTMLTableCellElement::ChAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "headers", JSHTMLTableCellElement::HeadersAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[19] },
    { "vAlign", JSHTMLTableCellElement::VAlignAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "chOff", JSHTMLTableCellElement::ChOffAttrNum, DontDelete, 0, 0 },
    { "abbr", JSHTMLTableCellElement::AbbrAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[16] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "align", JSHTMLTableCellElement::AlignAttrNum, DontDelete, 0, 0 },
    { "axis", JSHTMLTableCellElement::AxisAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[18] },
    { "bgColor", JSHTMLTableCellElement::BgColorAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[21] },
    { "height", JSHTMLTableCellElement::HeightAttrNum, DontDelete, 0, &JSHTMLTableCellElementTableEntries[22] },
    { "rowSpan", JSHTMLTableCellElement::RowSpanAttrNum, DontDelete, 0, 0 },
    { "scope", JSHTMLTableCellElement::ScopeAttrNum, DontDelete, 0, 0 },
    { "constructor", JSHTMLTableCellElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLTableCellElementTable = 
{
    2, 23, JSHTMLTableCellElementTableEntries, 16
};

/* Hash table for constructor */

static const HashEntry JSHTMLTableCellElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCellElementConstructorTable = 
{
    2, 1, JSHTMLTableCellElementConstructorTableEntries, 1
};

class JSHTMLTableCellElementConstructor : public DOMObject {
public:
    JSHTMLTableCellElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLTableCellElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableCellElementConstructor::info = { "HTMLTableCellElementConstructor", 0, &JSHTMLTableCellElementConstructorTable, 0 };

bool JSHTMLTableCellElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElementConstructor, DOMObject>(exec, &JSHTMLTableCellElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCellElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLTableCellElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCellElementPrototypeTable = 
{
    2, 1, JSHTMLTableCellElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLTableCellElementPrototype::info = { "HTMLTableCellElementPrototype", 0, &JSHTMLTableCellElementPrototypeTable, 0 };

JSObject* JSHTMLTableCellElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLTableCellElementPrototype>(exec, "[[JSHTMLTableCellElement.prototype]]");
}

const ClassInfo JSHTMLTableCellElement::info = { "HTMLTableCellElement", &JSHTMLElement::info, &JSHTMLTableCellElementTable, 0 };

JSHTMLTableCellElement::JSHTMLTableCellElement(ExecState* exec, HTMLTableCellElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLTableCellElementPrototype::self(exec));
}

bool JSHTMLTableCellElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElement, JSHTMLElement>(exec, &JSHTMLTableCellElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCellElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CellIndexAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsNumber(imp->cellIndex());
    }
    case AbbrAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->abbr());
    }
    case AlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->align());
    }
    case AxisAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->axis());
    }
    case BgColorAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->bgColor());
    }
    case ChAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->ch());
    }
    case ChOffAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->chOff());
    }
    case ColSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsNumber(imp->colSpan());
    }
    case HeadersAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->headers());
    }
    case HeightAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->height());
    }
    case NoWrapAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsBoolean(imp->noWrap());
    }
    case RowSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsNumber(imp->rowSpan());
    }
    case ScopeAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->scope());
    }
    case VAlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->vAlign());
    }
    case WidthAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        return jsString(imp->width());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableCellElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLTableCellElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLTableCellElementTable, this);
}

void JSHTMLTableCellElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AbbrAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setAbbr(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AxisAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setAxis(valueToStringWithNullCheck(exec, value));
        break;
    }
    case BgColorAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setBgColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setCh(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChOffAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setChOff(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ColSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setColSpan(value->toInt32(exec));
        break;
    }
    case HeadersAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setHeaders(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HeightAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setHeight(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NoWrapAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setNoWrap(value->toBoolean(exec));
        break;
    }
    case RowSpanAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setRowSpan(value->toInt32(exec));
        break;
    }
    case ScopeAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setScope(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VAlignAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setVAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case WidthAttrNum: {
        HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(impl());

        imp->setWidth(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableCellElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLTableCellElementConstructor>(exec, "[[HTMLTableCellElement.constructor]]");
}

}
