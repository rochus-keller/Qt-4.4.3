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

#include "JSNode.h"

#include <wtf/GetPtr.h>

#include "Document.h"
#include "JSDocument.h"
#include "JSNamedNodeMap.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NamedAttrMap.h"
#include "NamedNodeMap.h"
#include "Node.h"
#include "NodeList.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSNodeTableEntries[] =
{
    { "ownerDocument", JSNode::OwnerDocumentAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "firstChild", JSNode::FirstChildAttrNum, DontDelete|ReadOnly, 0, &JSNodeTableEntries[18] },
    { "previousSibling", JSNode::PreviousSiblingAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "constructor", JSNode::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "nodeName", JSNode::NodeNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "nodeValue", JSNode::NodeValueAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "lastChild", JSNode::LastChildAttrNum, DontDelete|ReadOnly, 0, &JSNodeTableEntries[19] },
    { "localName", JSNode::LocalNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "nextSibling", JSNode::NextSiblingAttrNum, DontDelete|ReadOnly, 0, &JSNodeTableEntries[20] },
    { "nodeType", JSNode::NodeTypeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "childNodes", JSNode::ChildNodesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "textContent", JSNode::TextContentAttrNum, DontDelete, 0, 0 },
    { "baseURI", JSNode::BaseURIAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "parentNode", JSNode::ParentNodeAttrNum, DontDelete|ReadOnly, 0, &JSNodeTableEntries[21] },
    { "attributes", JSNode::AttributesAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "namespaceURI", JSNode::NamespaceURIAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "prefix", JSNode::PrefixAttrNum, DontDelete, 0, 0 },
    { "parentElement", JSNode::ParentElementAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSNodeTable = 
{
    2, 22, JSNodeTableEntries, 18
};

/* Hash table for constructor */

static const HashEntry JSNodeConstructorTableEntries[] =
{
    { "DOCUMENT_FRAGMENT_NODE", Node::DOCUMENT_FRAGMENT_NODE, DontDelete|ReadOnly, 0, 0 },
    { "ENTITY_REFERENCE_NODE", Node::ENTITY_REFERENCE_NODE, DontDelete|ReadOnly, 0, &JSNodeConstructorTableEntries[14] },
    { "CDATA_SECTION_NODE", Node::CDATA_SECTION_NODE, DontDelete|ReadOnly, 0, &JSNodeConstructorTableEntries[12] },
    { 0, 0, 0, 0, 0 },
    { "TEXT_NODE", Node::TEXT_NODE, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "COMMENT_NODE", Node::COMMENT_NODE, DontDelete|ReadOnly, 0, &JSNodeConstructorTableEntries[13] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "ELEMENT_NODE", Node::ELEMENT_NODE, DontDelete|ReadOnly, 0, 0 },
    { "ATTRIBUTE_NODE", Node::ATTRIBUTE_NODE, DontDelete|ReadOnly, 0, 0 },
    { "ENTITY_NODE", Node::ENTITY_NODE, DontDelete|ReadOnly, 0, 0 },
    { "PROCESSING_INSTRUCTION_NODE", Node::PROCESSING_INSTRUCTION_NODE, DontDelete|ReadOnly, 0, 0 },
    { "DOCUMENT_NODE", Node::DOCUMENT_NODE, DontDelete|ReadOnly, 0, 0 },
    { "DOCUMENT_TYPE_NODE", Node::DOCUMENT_TYPE_NODE, DontDelete|ReadOnly, 0, &JSNodeConstructorTableEntries[15] },
    { "NOTATION_NODE", Node::NOTATION_NODE, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSNodeConstructorTable = 
{
    2, 16, JSNodeConstructorTableEntries, 12
};

class JSNodeConstructor : public DOMObject {
public:
    JSNodeConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSNodePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSNodeConstructor::info = { "NodeConstructor", 0, &JSNodeConstructorTable, 0 };

bool JSNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeConstructor, DOMObject>(exec, &JSNodeConstructorTable, this, propertyName, slot);
}

JSValue* JSNodeConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSNodePrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "cloneNode", JSNode::CloneNodeFuncNum, DontDelete|Function, 1, 0 },
    { "DOCUMENT_NODE", Node::DOCUMENT_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[28] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "isSameNode", JSNode::IsSameNodeFuncNum, DontDelete|Function, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "hasChildNodes", JSNode::HasChildNodesFuncNum, DontDelete|Function, 0, &JSNodePrototypeTableEntries[32] },
    { "appendChild", JSNode::AppendChildFuncNum, DontDelete|Function, 1, 0 },
    { "PROCESSING_INSTRUCTION_NODE", Node::PROCESSING_INSTRUCTION_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[30] },
    { "NOTATION_NODE", Node::NOTATION_NODE, DontDelete|ReadOnly, 0, 0 },
    { "CDATA_SECTION_NODE", Node::CDATA_SECTION_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[33] },
    { "ELEMENT_NODE", Node::ELEMENT_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[34] },
    { "ATTRIBUTE_NODE", Node::ATTRIBUTE_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[29] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "DOCUMENT_FRAGMENT_NODE", Node::DOCUMENT_FRAGMENT_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[27] },
    { "ENTITY_NODE", Node::ENTITY_NODE, DontDelete|ReadOnly, 0, 0 },
    { "TEXT_NODE", Node::TEXT_NODE, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "isEqualNode", JSNode::IsEqualNodeFuncNum, DontDelete|Function, 1, 0 },
    { "isDefaultNamespace", JSNode::IsDefaultNamespaceFuncNum, DontDelete|Function, 1, 0 },
    { "COMMENT_NODE", Node::COMMENT_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[31] },
    { "ENTITY_REFERENCE_NODE", Node::ENTITY_REFERENCE_NODE, DontDelete|ReadOnly, 0, &JSNodePrototypeTableEntries[26] },
    { "DOCUMENT_TYPE_NODE", Node::DOCUMENT_TYPE_NODE, DontDelete|ReadOnly, 0, 0 },
    { "insertBefore", JSNode::InsertBeforeFuncNum, DontDelete|Function, 2, 0 },
    { "replaceChild", JSNode::ReplaceChildFuncNum, DontDelete|Function, 2, 0 },
    { "removeChild", JSNode::RemoveChildFuncNum, DontDelete|Function, 1, 0 },
    { "normalize", JSNode::NormalizeFuncNum, DontDelete|Function, 0, 0 },
    { "isSupported", JSNode::IsSupportedFuncNum, DontDelete|Function, 2, 0 },
    { "hasAttributes", JSNode::HasAttributesFuncNum, DontDelete|Function, 0, 0 },
    { "lookupPrefix", JSNode::LookupPrefixFuncNum, DontDelete|Function, 1, 0 },
    { "lookupNamespaceURI", JSNode::LookupNamespaceURIFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSNodePrototypeTable = 
{
    2, 35, JSNodePrototypeTableEntries, 26
};

const ClassInfo JSNodePrototype::info = { "NodePrototype", 0, &JSNodePrototypeTable, 0 };

JSObject* JSNodePrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSNodePrototype>(exec, "[[JSNode.prototype]]");
}

bool JSNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSNodePrototypeFunction, JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, this, propertyName, slot);
}

JSValue* JSNodePrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSNode::info = { "Node", 0, &JSNodeTable, 0 };

JSNode::JSNode(ExecState* exec, Node* impl)
    : m_impl(impl)
{
    setPrototype(JSNodePrototype::self(exec));
}

JSNode::~JSNode()
{
    ScriptInterpreter::forgetDOMNodeForDocument(m_impl->document(), m_impl.get());
}

bool JSNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNode, KJS::DOMObject>(exec, &JSNodeTable, this, propertyName, slot);
}

JSValue* JSNode::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NodeNameAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->nodeName());
    }
    case NodeValueAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->nodeValue());
    }
    case NodeTypeAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsNumber(imp->nodeType());
    }
    case ParentNodeAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->parentNode()));
    }
    case ChildNodesAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->childNodes()));
    }
    case FirstChildAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->firstChild()));
    }
    case LastChildAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->lastChild()));
    }
    case PreviousSiblingAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->previousSibling()));
    }
    case NextSiblingAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->nextSibling()));
    }
    case AttributesAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->attributes()));
    }
    case OwnerDocumentAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->ownerDocument()));
    }
    case NamespaceURIAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->namespaceURI());
    }
    case PrefixAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->prefix());
    }
    case LocalNameAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->localName());
    }
    case BaseURIAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->baseURI());
    }
    case TextContentAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return jsStringOrNull(imp->textContent());
    }
    case ParentElementAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        return toJS(exec, WTF::getPtr(imp->parentElement()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSNode::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSNode, KJS::DOMObject>(exec, propertyName, value, attr, &JSNodeTable, this);
}

void JSNode::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case NodeValueAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        ExceptionCode ec = 0;
        imp->setNodeValue(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case PrefixAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        ExceptionCode ec = 0;
        imp->setPrefix(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    case TextContentAttrNum: {
        Node* imp = static_cast<Node*>(impl());

        ExceptionCode ec = 0;
        imp->setTextContent(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSNode::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSNodeConstructor>(exec, "[[Node.constructor]]");
}
JSValue* JSNodePrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSNode::info))
      return throwError(exec, TypeError);

    Node* imp = static_cast<Node*>(static_cast<JSNode*>(thisObj)->impl());

    switch (id) {
    case JSNode::InsertBeforeFuncNum: {
        return static_cast<JSNode*>(thisObj)->insertBefore(exec, args);
    }
    case JSNode::ReplaceChildFuncNum: {
        return static_cast<JSNode*>(thisObj)->replaceChild(exec, args);
    }
    case JSNode::RemoveChildFuncNum: {
        return static_cast<JSNode*>(thisObj)->removeChild(exec, args);
    }
    case JSNode::AppendChildFuncNum: {
        return static_cast<JSNode*>(thisObj)->appendChild(exec, args);
    }
    case JSNode::HasChildNodesFuncNum: {


        KJS::JSValue* result = jsBoolean(imp->hasChildNodes());
        return result;
    }
    case JSNode::CloneNodeFuncNum: {
        bool deep = args[0]->toBoolean(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->cloneNode(deep)));
        return result;
    }
    case JSNode::NormalizeFuncNum: {

        imp->normalize();
        return jsUndefined();
    }
    case JSNode::IsSupportedFuncNum: {
        String feature = args[0]->toString(exec);
        String version = valueToStringWithNullCheck(exec, args[1]);


        KJS::JSValue* result = jsBoolean(imp->isSupported(feature, version));
        return result;
    }
    case JSNode::HasAttributesFuncNum: {


        KJS::JSValue* result = jsBoolean(imp->hasAttributes());
        return result;
    }
    case JSNode::IsSameNodeFuncNum: {
        Node* other = toNode(args[0]);


        KJS::JSValue* result = jsBoolean(imp->isSameNode(other));
        return result;
    }
    case JSNode::IsEqualNodeFuncNum: {
        Node* other = toNode(args[0]);


        KJS::JSValue* result = jsBoolean(imp->isEqualNode(other));
        return result;
    }
    case JSNode::LookupPrefixFuncNum: {
        String namespaceURI = valueToStringWithNullCheck(exec, args[0]);


        KJS::JSValue* result = jsStringOrNull(imp->lookupPrefix(namespaceURI));
        return result;
    }
    case JSNode::IsDefaultNamespaceFuncNum: {
        String namespaceURI = valueToStringWithNullCheck(exec, args[0]);


        KJS::JSValue* result = jsBoolean(imp->isDefaultNamespace(namespaceURI));
        return result;
    }
    case JSNode::LookupNamespaceURIFuncNum: {
        String prefix = valueToStringWithNullCheck(exec, args[0]);


        KJS::JSValue* result = jsStringOrNull(imp->lookupNamespaceURI(prefix));
        return result;
    }
    }
    return 0;
}
Node* toNode(KJS::JSValue* val)
{
    return val->isObject(&JSNode::info) ? static_cast<JSNode*>(val)->impl() : 0;
}

}
