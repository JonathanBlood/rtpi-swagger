
#include "SamiRoute.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRoute::SamiRoute() {
    init();
}

SamiRoute::~SamiRoute() {
    this->cleanup();
}

void
SamiRoute::init() {
    pOperator = null;
pRoute = null;
}

void
SamiRoute::cleanup() {
    if(pOperator != null) {
        
        delete pOperator;
        pOperator = null;
    }
if(pRoute != null) {
        
        delete pRoute;
        pRoute = null;
    }
}


SamiRoute*
SamiRoute::fromJson(String* json) {
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
SamiRoute::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pOperatorKey = new JsonString(L"operator");
        IJsonValue* pOperatorVal = null;
        pJsonObject->GetValue(pOperatorKey, pOperatorVal);
        if(pOperatorVal != null) {
            
            pOperator = new String();
            jsonToValue(pOperator, pOperatorVal, L"String", L"String");
        }
        delete pOperatorKey;
JsonString* pRouteKey = new JsonString(L"route");
        IJsonValue* pRouteVal = null;
        pJsonObject->GetValue(pRouteKey, pRouteVal);
        if(pRouteVal != null) {
            
            pRoute = new String();
            jsonToValue(pRoute, pRouteVal, L"String", L"String");
        }
        delete pRouteKey;
    }
}

SamiRoute::SamiRoute(String* json) {
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
SamiRoute::asJson ()
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
SamiRoute::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pOperatorKey = new JsonString(L"operator");
    pJsonObject->Add(pOperatorKey, toJson(getPOperator(), "String", ""));

    JsonString *pRouteKey = new JsonString(L"route");
    pJsonObject->Add(pRouteKey, toJson(getPRoute(), "String", ""));

    return pJsonObject;
}

String*
SamiRoute::getPOperator() {
    return pOperator;
}
void
SamiRoute::setPOperator(String* pOperator) {
    this->pOperator = pOperator;
}

String*
SamiRoute::getPRoute() {
    return pRoute;
}
void
SamiRoute::setPRoute(String* pRoute) {
    this->pRoute = pRoute;
}



} /* namespace Swagger */

