/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "HTMLElementFactory.h"

#include "HTMLNames.h"
#include "HTMLAnchorElement.h"
#include "HTMLElement.h"
#include "HTMLAppletElement.h"
#include "HTMLAreaElement.h"
#include "HTMLAudioElement.h"
#include "HTMLBaseElement.h"
#include "HTMLBaseFontElement.h"
#include "HTMLBlockquoteElement.h"
#include "HTMLBodyElement.h"
#include "HTMLBRElement.h"
#include "HTMLButtonElement.h"
#include "HTMLCanvasElement.h"
#include "HTMLTableCaptionElement.h"
#include "HTMLTableColElement.h"
#include "HTMLDataGridElement.h"
#include "HTMLDataListElement.h"
#include "HTMLDataGridCellElement.h"
#include "HTMLDataGridColElement.h"
#include "HTMLModElement.h"
#include "HTMLDirectoryElement.h"
#include "HTMLDivElement.h"
#include "HTMLDListElement.h"
#include "HTMLDataGridRowElement.h"
#include "HTMLEmbedElement.h"
#include "HTMLFieldSetElement.h"
#include "HTMLFontElement.h"
#include "HTMLFormElement.h"
#include "HTMLFrameElement.h"
#include "HTMLFrameSetElement.h"
#include "HTMLHeadingElement.h"
#include "HTMLHeadElement.h"
#include "HTMLHRElement.h"
#include "HTMLHtmlElement.h"
#include "HTMLIFrameElement.h"
#include "HTMLImageElement.h"
#include "HTMLInputElement.h"
#include "HTMLIsIndexElement.h"
#include "HTMLKeygenElement.h"
#include "HTMLLabelElement.h"
#include "HTMLLegendElement.h"
#include "HTMLLIElement.h"
#include "HTMLLinkElement.h"
#include "HTMLPreElement.h"
#include "HTMLMapElement.h"
#include "HTMLMarqueeElement.h"
#include "HTMLMenuElement.h"
#include "HTMLMetaElement.h"
#include "HTMLObjectElement.h"
#include "HTMLOListElement.h"
#include "HTMLOptGroupElement.h"
#include "HTMLOptionElement.h"
#include "HTMLParagraphElement.h"
#include "HTMLParamElement.h"
#include "HTMLProgressElement.h"
#include "HTMLQuoteElement.h"
#include "HTMLScriptElement.h"
#include "HTMLSelectElement.h"
#include "HTMLSourceElement.h"
#include "HTMLStyleElement.h"
#include "HTMLTableElement.h"
#include "HTMLTableSectionElement.h"
#include "HTMLTableCellElement.h"
#include "HTMLTextAreaElement.h"
#include "HTMLTitleElement.h"
#include "HTMLTableRowElement.h"
#include "HTMLUListElement.h"
#include "HTMLVideoElement.h"
#include <wtf/HashMap.h>

#if ENABLE(DASHBOARD_SUPPORT)
#include "Document.h"
#include "Settings.h"
#endif

namespace WebCore {

using namespace HTMLNames;

typedef PassRefPtr<HTMLElement> (*ConstructorFunction)(const QualifiedName&, Document*, HTMLFormElement*, bool createdByParser);
typedef HashMap<AtomicStringImpl*, ConstructorFunction> FunctionMap;

static FunctionMap* gFunctionMap = 0;

static PassRefPtr<HTMLElement> anchorConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLAnchorElement::create(tagName, document);
}

static PassRefPtr<HTMLElement> appletConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLAppletElement::create(tagName, document);
}

static PassRefPtr<HTMLElement> areaConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLAreaElement::create(tagName, document);
}

#if ENABLE(VIDEO)

static PassRefPtr<HTMLElement> audioConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    if (!MediaPlayer::isAvailable())
        return HTMLElement::create(tagName, document);
    return new HTMLAudioElement(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> baseConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLBaseElement(tagName, document);
}

static PassRefPtr<HTMLElement> basefontConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLBaseFontElement(tagName, document);
}

static PassRefPtr<HTMLElement> blockquoteConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLBlockquoteElement(tagName, document);
}

static PassRefPtr<HTMLElement> bodyConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLBodyElement(tagName, document);
}

static PassRefPtr<HTMLElement> brConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLBRElement(tagName, document);
}

static PassRefPtr<HTMLElement> buttonConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLButtonElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> canvasConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLCanvasElement(tagName, document);
}

static PassRefPtr<HTMLElement> tablecaptionConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableCaptionElement(tagName, document);
}

static PassRefPtr<HTMLElement> tablecolConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableColElement(tagName, document);
}

#if ENABLE(DATAGRID)

static PassRefPtr<HTMLElement> datagridConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDataGridElement(tagName, document);
}

#endif
#if ENABLE(DATALIST)

static PassRefPtr<HTMLElement> datalistConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDataListElement(tagName, document);
}

#endif
#if ENABLE(DATAGRID)

static PassRefPtr<HTMLElement> datagridcellConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDataGridCellElement(tagName, document);
}

#endif
#if ENABLE(DATAGRID)

static PassRefPtr<HTMLElement> datagridcolConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDataGridColElement(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> modConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLModElement(tagName, document);
}

static PassRefPtr<HTMLElement> directoryConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDirectoryElement(tagName, document);
}

static PassRefPtr<HTMLElement> divConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDivElement(tagName, document);
}

static PassRefPtr<HTMLElement> dlistConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDListElement(tagName, document);
}

#if ENABLE(DATAGRID)

static PassRefPtr<HTMLElement> datagridrowConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLDataGridRowElement(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> embedConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLEmbedElement::create(tagName, document);
}

static PassRefPtr<HTMLElement> fieldsetConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLFieldSetElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> fontConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLFontElement(tagName, document);
}

static PassRefPtr<HTMLElement> formConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLFormElement(tagName, document);
}

static PassRefPtr<HTMLElement> frameConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLFrameElement::create(tagName, document);
}

static PassRefPtr<HTMLElement> framesetConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLFrameSetElement(tagName, document);
}

static PassRefPtr<HTMLElement> headingConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLHeadingElement(tagName, document);
}

static PassRefPtr<HTMLElement> headConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLHeadElement(tagName, document);
}

static PassRefPtr<HTMLElement> hrConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLHRElement(tagName, document);
}

static PassRefPtr<HTMLElement> htmlConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLHtmlElement(tagName, document);
}

static PassRefPtr<HTMLElement> iframeConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLIFrameElement::create(tagName, document);
}

static PassRefPtr<HTMLElement> imageConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLImageElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> inputConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLInputElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> isindexConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLIsIndexElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> keygenConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLKeygenElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> labelConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLLabelElement(tagName, document);
}

static PassRefPtr<HTMLElement> legendConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLLegendElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> liConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLLIElement(tagName, document);
}

static PassRefPtr<HTMLElement> linkConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool createdByParser)
{
    return new HTMLLinkElement(tagName, document, createdByParser);
}

static PassRefPtr<HTMLElement> preConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLPreElement(tagName, document);
}

static PassRefPtr<HTMLElement> mapConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLMapElement(tagName, document);
}

static PassRefPtr<HTMLElement> marqueeConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLMarqueeElement(tagName, document);
}

static PassRefPtr<HTMLElement> menuConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLMenuElement(tagName, document);
}

static PassRefPtr<HTMLElement> metaConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLMetaElement(tagName, document);
}

static PassRefPtr<HTMLElement> objectConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool createdByParser)
{
    return HTMLObjectElement::create(tagName, document, createdByParser);
}

static PassRefPtr<HTMLElement> olistConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLOListElement(tagName, document);
}

static PassRefPtr<HTMLElement> optgroupConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLOptGroupElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> optionConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLOptionElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> paragraphConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLParagraphElement(tagName, document);
}

static PassRefPtr<HTMLElement> paramConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLParamElement(tagName, document);
}

#if ENABLE(PROGRESS_TAG)

static PassRefPtr<HTMLElement> progressConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return HTMLProgressElement::create(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> quoteConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLQuoteElement(tagName, document);
}

static PassRefPtr<HTMLElement> scriptConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool createdByParser)
{
    return new HTMLScriptElement(tagName, document, createdByParser);
}

static PassRefPtr<HTMLElement> selectConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLSelectElement(tagName, document, formElement);
}

#if ENABLE(VIDEO)

static PassRefPtr<HTMLElement> sourceConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    if (!MediaPlayer::isAvailable())
        return HTMLElement::create(tagName, document);
    return new HTMLSourceElement(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> styleConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool createdByParser)
{
    return new HTMLStyleElement(tagName, document, createdByParser);
}

static PassRefPtr<HTMLElement> tableConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableElement(tagName, document);
}

static PassRefPtr<HTMLElement> tablesectionConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableSectionElement(tagName, document);
}

static PassRefPtr<HTMLElement> tablecellConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableCellElement(tagName, document);
}

static PassRefPtr<HTMLElement> textareaConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLTextAreaElement(tagName, document, formElement);
}

static PassRefPtr<HTMLElement> titleConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTitleElement(tagName, document);
}

static PassRefPtr<HTMLElement> tablerowConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLTableRowElement(tagName, document);
}

static PassRefPtr<HTMLElement> ulistConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    return new HTMLUListElement(tagName, document);
}

#if ENABLE(VIDEO)

static PassRefPtr<HTMLElement> videoConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement*, bool)
{
    if (!MediaPlayer::isAvailable())
        return HTMLElement::create(tagName, document);
    return new HTMLVideoElement(tagName, document);
}

#endif
static PassRefPtr<HTMLElement> imgToimageConstructor(const QualifiedName& tagName, Document* document, HTMLFormElement* formElement, bool)
{
    return new HTMLImageElement(QualifiedName(tagName.prefix(), imgTag.localName(), tagName.namespaceURI()), document, formElement);
}

static void addTag(const QualifiedName& tag, ConstructorFunction func)
{
    gFunctionMap->set(tag.localName().impl(), func);
}

static void createFunctionMap()
{
    ASSERT(!gFunctionMap);

    // Create the table.
    gFunctionMap = new FunctionMap;
    
    // Populate it with constructor functions.
    addTag(aTag, anchorConstructor);
    addTag(appletTag, appletConstructor);
    addTag(areaTag, areaConstructor);
#if ENABLE(VIDEO)
    addTag(audioTag, audioConstructor);
#endif

    addTag(baseTag, baseConstructor);
    addTag(basefontTag, basefontConstructor);
    addTag(blockquoteTag, blockquoteConstructor);
    addTag(bodyTag, bodyConstructor);
    addTag(brTag, brConstructor);
    addTag(buttonTag, buttonConstructor);
    addTag(canvasTag, canvasConstructor);
    addTag(captionTag, tablecaptionConstructor);
    addTag(colTag, tablecolConstructor);
    addTag(colgroupTag, tablecolConstructor);
#if ENABLE(DATAGRID)
    addTag(datagridTag, datagridConstructor);
#endif

#if ENABLE(DATALIST)
    addTag(datalistTag, datalistConstructor);
#endif

#if ENABLE(DATAGRID)
    addTag(dcellTag, datagridcellConstructor);
#endif

#if ENABLE(DATAGRID)
    addTag(dcolTag, datagridcolConstructor);
#endif

    addTag(delTag, modConstructor);
    addTag(dirTag, directoryConstructor);
    addTag(divTag, divConstructor);
    addTag(dlTag, dlistConstructor);
#if ENABLE(DATAGRID)
    addTag(drowTag, datagridrowConstructor);
#endif

    addTag(embedTag, embedConstructor);
    addTag(fieldsetTag, fieldsetConstructor);
    addTag(fontTag, fontConstructor);
    addTag(formTag, formConstructor);
    addTag(frameTag, frameConstructor);
    addTag(framesetTag, framesetConstructor);
    addTag(h1Tag, headingConstructor);
    addTag(h2Tag, headingConstructor);
    addTag(h3Tag, headingConstructor);
    addTag(h4Tag, headingConstructor);
    addTag(h5Tag, headingConstructor);
    addTag(h6Tag, headingConstructor);
    addTag(headTag, headConstructor);
    addTag(hrTag, hrConstructor);
    addTag(htmlTag, htmlConstructor);
    addTag(iframeTag, iframeConstructor);
    addTag(imageTag, imgToimageConstructor);
    addTag(imgTag, imageConstructor);
    addTag(inputTag, inputConstructor);
    addTag(insTag, modConstructor);
    addTag(isindexTag, isindexConstructor);
    addTag(keygenTag, keygenConstructor);
    addTag(labelTag, labelConstructor);
    addTag(legendTag, legendConstructor);
    addTag(liTag, liConstructor);
    addTag(linkTag, linkConstructor);
    addTag(listingTag, preConstructor);
    addTag(mapTag, mapConstructor);
    addTag(marqueeTag, marqueeConstructor);
    addTag(menuTag, menuConstructor);
    addTag(metaTag, metaConstructor);
    addTag(objectTag, objectConstructor);
    addTag(olTag, olistConstructor);
    addTag(optgroupTag, optgroupConstructor);
    addTag(optionTag, optionConstructor);
    addTag(pTag, paragraphConstructor);
    addTag(paramTag, paramConstructor);
    addTag(preTag, preConstructor);
#if ENABLE(PROGRESS_TAG)
    addTag(progressTag, progressConstructor);
#endif

    addTag(qTag, quoteConstructor);
    addTag(scriptTag, scriptConstructor);
    addTag(selectTag, selectConstructor);
#if ENABLE(VIDEO)
    addTag(sourceTag, sourceConstructor);
#endif

    addTag(styleTag, styleConstructor);
    addTag(tableTag, tableConstructor);
    addTag(tbodyTag, tablesectionConstructor);
    addTag(tdTag, tablecellConstructor);
    addTag(textareaTag, textareaConstructor);
    addTag(tfootTag, tablesectionConstructor);
    addTag(thTag, tablecellConstructor);
    addTag(theadTag, tablesectionConstructor);
    addTag(titleTag, titleConstructor);
    addTag(trTag, tablerowConstructor);
    addTag(ulTag, ulistConstructor);
#if ENABLE(VIDEO)
    addTag(videoTag, videoConstructor);
#endif

    addTag(xmpTag, preConstructor);
}

PassRefPtr<HTMLElement> HTMLElementFactory::createHTMLElement(const QualifiedName& qName, Document* document, HTMLFormElement* formElement, bool createdByParser)
{
    if (!document)
        return 0;

    if (!gFunctionMap)
        createFunctionMap();
    if (ConstructorFunction function = gFunctionMap->get(qName.localName().impl()))
        return function(qName, document, formElement, createdByParser);
    return HTMLElement::create(qName, document);
}

} // namespace WebCore

