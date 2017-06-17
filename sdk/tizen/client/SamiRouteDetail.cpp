
#include "SamiRouteDetail.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRouteDetail::SamiRouteDetail() {
    init();
}

SamiRouteDetail::~SamiRouteDetail() {
    this->cleanup();
}

void
SamiRouteDetail::init() {
    pOperator = null;
pOrigin = null;
pOriginlocalized = null;
pDestination = null;
pDestinationlocalized = null;
pLastupdated = null;
pStops = null;
}

void
SamiRouteDetail::cleanup() {
    if(pOperator != null) {
        
        delete pOperator;
        pOperator = null;
    }
if(pOrigin != null) {
        
        delete pOrigin;
        pOrigin = null;
    }
if(pOriginlocalized != null) {
        
        delete pOriginlocalized;
        pOriginlocalized = null;
    }
if(pDestination != null) {
        
        delete pDestination;
        pDestination = null;
    }
if(pDestinationlocalized != null) {
        
        delete pDestinationlocalized;
        pDestinationlocalized = null;
    }
if(pLastupdated != null) {
        
        delete pLastupdated;
        pLastupdated = null;
    }
if(pStops != null) {
        pStops->RemoveAll(true);
        delete pStops;
        pStops = null;
    }
}


SamiRouteDetail*
SamiRouteDetail::fromJson(String* json) {
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
SamiRouteDetail::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pOriginKey = new JsonString(L"origin");
        IJsonValue* pOriginVal = null;
        pJsonObject->GetValue(pOriginKey, pOriginVal);
        if(pOriginVal != null) {
            
            pOrigin = new String();
            jsonToValue(pOrigin, pOriginVal, L"String", L"String");
        }
        delete pOriginKey;
JsonString* pOriginlocalizedKey = new JsonString(L"originlocalized");
        IJsonValue* pOriginlocalizedVal = null;
        pJsonObject->GetValue(pOriginlocalizedKey, pOriginlocalizedVal);
        if(pOriginlocalizedVal != null) {
            
            pOriginlocalized = new String();
            jsonToValue(pOriginlocalized, pOriginlocalizedVal, L"String", L"String");
        }
        delete pOriginlocalizedKey;
JsonString* pDestinationKey = new JsonString(L"destination");
        IJsonValue* pDestinationVal = null;
        pJsonObject->GetValue(pDestinationKey, pDestinationVal);
        if(pDestinationVal != null) {
            
            pDestination = new String();
            jsonToValue(pDestination, pDestinationVal, L"String", L"String");
        }
        delete pDestinationKey;
JsonString* pDestinationlocalizedKey = new JsonString(L"destinationlocalized");
        IJsonValue* pDestinationlocalizedVal = null;
        pJsonObject->GetValue(pDestinationlocalizedKey, pDestinationlocalizedVal);
        if(pDestinationlocalizedVal != null) {
            
            pDestinationlocalized = new String();
            jsonToValue(pDestinationlocalized, pDestinationlocalizedVal, L"String", L"String");
        }
        delete pDestinationlocalizedKey;
JsonString* pLastupdatedKey = new JsonString(L"lastupdated");
        IJsonValue* pLastupdatedVal = null;
        pJsonObject->GetValue(pLastupdatedKey, pLastupdatedVal);
        if(pLastupdatedVal != null) {
            
            pLastupdated = new String();
            jsonToValue(pLastupdated, pLastupdatedVal, L"String", L"String");
        }
        delete pLastupdatedKey;
JsonString* pStopsKey = new JsonString(L"stops");
        IJsonValue* pStopsVal = null;
        pJsonObject->GetValue(pStopsKey, pStopsVal);
        if(pStopsVal != null) {
            pStops = new ArrayList();
            
            jsonToValue(pStops, pStopsVal, L"IList", L"SamiStop");
        }
        delete pStopsKey;
    }
}

SamiRouteDetail::SamiRouteDetail(String* json) {
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
SamiRouteDetail::asJson ()
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
SamiRouteDetail::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pOperatorKey = new JsonString(L"operator");
    pJsonObject->Add(pOperatorKey, toJson(getPOperator(), "String", ""));

    JsonString *pOriginKey = new JsonString(L"origin");
    pJsonObject->Add(pOriginKey, toJson(getPOrigin(), "String", ""));

    JsonString *pOriginlocalizedKey = new JsonString(L"originlocalized");
    pJsonObject->Add(pOriginlocalizedKey, toJson(getPOriginlocalized(), "String", ""));

    JsonString *pDestinationKey = new JsonString(L"destination");
    pJsonObject->Add(pDestinationKey, toJson(getPDestination(), "String", ""));

    JsonString *pDestinationlocalizedKey = new JsonString(L"destinationlocalized");
    pJsonObject->Add(pDestinationlocalizedKey, toJson(getPDestinationlocalized(), "String", ""));

    JsonString *pLastupdatedKey = new JsonString(L"lastupdated");
    pJsonObject->Add(pLastupdatedKey, toJson(getPLastupdated(), "String", ""));

    JsonString *pStopsKey = new JsonString(L"stops");
    pJsonObject->Add(pStopsKey, toJson(getPStops(), "SamiStop", "array"));

    return pJsonObject;
}

String*
SamiRouteDetail::getPOperator() {
    return pOperator;
}
void
SamiRouteDetail::setPOperator(String* pOperator) {
    this->pOperator = pOperator;
}

String*
SamiRouteDetail::getPOrigin() {
    return pOrigin;
}
void
SamiRouteDetail::setPOrigin(String* pOrigin) {
    this->pOrigin = pOrigin;
}

String*
SamiRouteDetail::getPOriginlocalized() {
    return pOriginlocalized;
}
void
SamiRouteDetail::setPOriginlocalized(String* pOriginlocalized) {
    this->pOriginlocalized = pOriginlocalized;
}

String*
SamiRouteDetail::getPDestination() {
    return pDestination;
}
void
SamiRouteDetail::setPDestination(String* pDestination) {
    this->pDestination = pDestination;
}

String*
SamiRouteDetail::getPDestinationlocalized() {
    return pDestinationlocalized;
}
void
SamiRouteDetail::setPDestinationlocalized(String* pDestinationlocalized) {
    this->pDestinationlocalized = pDestinationlocalized;
}

String*
SamiRouteDetail::getPLastupdated() {
    return pLastupdated;
}
void
SamiRouteDetail::setPLastupdated(String* pLastupdated) {
    this->pLastupdated = pLastupdated;
}

IList*
SamiRouteDetail::getPStops() {
    return pStops;
}
void
SamiRouteDetail::setPStops(IList* pStops) {
    this->pStops = pStops;
}



} /* namespace Swagger */

