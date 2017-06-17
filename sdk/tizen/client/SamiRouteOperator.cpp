
#include "SamiRouteOperator.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRouteOperator::SamiRouteOperator() {
    init();
}

SamiRouteOperator::~SamiRouteOperator() {
    this->cleanup();
}

void
SamiRouteOperator::init() {
    pName = null;
pRoutes = null;
}

void
SamiRouteOperator::cleanup() {
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRoutes != null) {
        pRoutes->RemoveAll(true);
        delete pRoutes;
        pRoutes = null;
    }
}


SamiRouteOperator*
SamiRouteOperator::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiRouteOperator::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRoutesKey = new JsonString(L"routes");
        IJsonValue* pRoutesVal = null;
        pJsonObject->GetValue(pRoutesKey, pRoutesVal);
        if(pRoutesVal != null) {
            pRoutes = new ArrayList();
            
            jsonToValue(pRoutes, pRoutesVal, L"IList", L"String");
        }
        delete pRoutesKey;
    }
}

SamiRouteOperator::SamiRouteOperator(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiRouteOperator::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiRouteOperator::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRoutesKey = new JsonString(L"routes");
    pJsonObject->Add(pRoutesKey, toJson(getPRoutes(), "String", "array"));

    return pJsonObject;
}

String*
SamiRouteOperator::getPName() {
    return pName;
}
void
SamiRouteOperator::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiRouteOperator::getPRoutes() {
    return pRoutes;
}
void
SamiRouteOperator::setPRoutes(IList* pRoutes) {
    this->pRoutes = pRoutes;
}



} /* namespace Swagger */

