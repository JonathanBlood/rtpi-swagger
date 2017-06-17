
#include "SamiStop.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStop::SamiStop() {
    init();
}

SamiStop::~SamiStop() {
    this->cleanup();
}

void
SamiStop::init() {
    pStopid = null;
pDisplaystopid = null;
pShortname = null;
pShortnamelocalized = null;
pFullname = null;
pFullnamelocalized = null;
pLatitude = null;
pLongitude = null;
pOperators = null;
}

void
SamiStop::cleanup() {
    if(pStopid != null) {
        
        delete pStopid;
        pStopid = null;
    }
if(pDisplaystopid != null) {
        
        delete pDisplaystopid;
        pDisplaystopid = null;
    }
if(pShortname != null) {
        
        delete pShortname;
        pShortname = null;
    }
if(pShortnamelocalized != null) {
        
        delete pShortnamelocalized;
        pShortnamelocalized = null;
    }
if(pFullname != null) {
        
        delete pFullname;
        pFullname = null;
    }
if(pFullnamelocalized != null) {
        
        delete pFullnamelocalized;
        pFullnamelocalized = null;
    }
if(pLatitude != null) {
        
        delete pLatitude;
        pLatitude = null;
    }
if(pLongitude != null) {
        
        delete pLongitude;
        pLongitude = null;
    }
if(pOperators != null) {
        pOperators->RemoveAll(true);
        delete pOperators;
        pOperators = null;
    }
}


SamiStop*
SamiStop::fromJson(String* json) {
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
SamiStop::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pStopidKey = new JsonString(L"stopid");
        IJsonValue* pStopidVal = null;
        pJsonObject->GetValue(pStopidKey, pStopidVal);
        if(pStopidVal != null) {
            
            pStopid = new String();
            jsonToValue(pStopid, pStopidVal, L"String", L"String");
        }
        delete pStopidKey;
JsonString* pDisplaystopidKey = new JsonString(L"displaystopid");
        IJsonValue* pDisplaystopidVal = null;
        pJsonObject->GetValue(pDisplaystopidKey, pDisplaystopidVal);
        if(pDisplaystopidVal != null) {
            
            pDisplaystopid = new String();
            jsonToValue(pDisplaystopid, pDisplaystopidVal, L"String", L"String");
        }
        delete pDisplaystopidKey;
JsonString* pShortnameKey = new JsonString(L"shortname");
        IJsonValue* pShortnameVal = null;
        pJsonObject->GetValue(pShortnameKey, pShortnameVal);
        if(pShortnameVal != null) {
            
            pShortname = new String();
            jsonToValue(pShortname, pShortnameVal, L"String", L"String");
        }
        delete pShortnameKey;
JsonString* pShortnamelocalizedKey = new JsonString(L"shortnamelocalized");
        IJsonValue* pShortnamelocalizedVal = null;
        pJsonObject->GetValue(pShortnamelocalizedKey, pShortnamelocalizedVal);
        if(pShortnamelocalizedVal != null) {
            
            pShortnamelocalized = new String();
            jsonToValue(pShortnamelocalized, pShortnamelocalizedVal, L"String", L"String");
        }
        delete pShortnamelocalizedKey;
JsonString* pFullnameKey = new JsonString(L"fullname");
        IJsonValue* pFullnameVal = null;
        pJsonObject->GetValue(pFullnameKey, pFullnameVal);
        if(pFullnameVal != null) {
            
            pFullname = new String();
            jsonToValue(pFullname, pFullnameVal, L"String", L"String");
        }
        delete pFullnameKey;
JsonString* pFullnamelocalizedKey = new JsonString(L"fullnamelocalized");
        IJsonValue* pFullnamelocalizedVal = null;
        pJsonObject->GetValue(pFullnamelocalizedKey, pFullnamelocalizedVal);
        if(pFullnamelocalizedVal != null) {
            
            pFullnamelocalized = new String();
            jsonToValue(pFullnamelocalized, pFullnamelocalizedVal, L"String", L"String");
        }
        delete pFullnamelocalizedKey;
JsonString* pLatitudeKey = new JsonString(L"latitude");
        IJsonValue* pLatitudeVal = null;
        pJsonObject->GetValue(pLatitudeKey, pLatitudeVal);
        if(pLatitudeVal != null) {
            
            pLatitude = new String();
            jsonToValue(pLatitude, pLatitudeVal, L"String", L"String");
        }
        delete pLatitudeKey;
JsonString* pLongitudeKey = new JsonString(L"longitude");
        IJsonValue* pLongitudeVal = null;
        pJsonObject->GetValue(pLongitudeKey, pLongitudeVal);
        if(pLongitudeVal != null) {
            
            pLongitude = new String();
            jsonToValue(pLongitude, pLongitudeVal, L"String", L"String");
        }
        delete pLongitudeKey;
JsonString* pOperatorsKey = new JsonString(L"operators");
        IJsonValue* pOperatorsVal = null;
        pJsonObject->GetValue(pOperatorsKey, pOperatorsVal);
        if(pOperatorsVal != null) {
            pOperators = new ArrayList();
            
            jsonToValue(pOperators, pOperatorsVal, L"IList", L"SamiRouteOperator");
        }
        delete pOperatorsKey;
    }
}

SamiStop::SamiStop(String* json) {
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
SamiStop::asJson ()
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
SamiStop::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pStopidKey = new JsonString(L"stopid");
    pJsonObject->Add(pStopidKey, toJson(getPStopid(), "String", ""));

    JsonString *pDisplaystopidKey = new JsonString(L"displaystopid");
    pJsonObject->Add(pDisplaystopidKey, toJson(getPDisplaystopid(), "String", ""));

    JsonString *pShortnameKey = new JsonString(L"shortname");
    pJsonObject->Add(pShortnameKey, toJson(getPShortname(), "String", ""));

    JsonString *pShortnamelocalizedKey = new JsonString(L"shortnamelocalized");
    pJsonObject->Add(pShortnamelocalizedKey, toJson(getPShortnamelocalized(), "String", ""));

    JsonString *pFullnameKey = new JsonString(L"fullname");
    pJsonObject->Add(pFullnameKey, toJson(getPFullname(), "String", ""));

    JsonString *pFullnamelocalizedKey = new JsonString(L"fullnamelocalized");
    pJsonObject->Add(pFullnamelocalizedKey, toJson(getPFullnamelocalized(), "String", ""));

    JsonString *pLatitudeKey = new JsonString(L"latitude");
    pJsonObject->Add(pLatitudeKey, toJson(getPLatitude(), "String", ""));

    JsonString *pLongitudeKey = new JsonString(L"longitude");
    pJsonObject->Add(pLongitudeKey, toJson(getPLongitude(), "String", ""));

    JsonString *pOperatorsKey = new JsonString(L"operators");
    pJsonObject->Add(pOperatorsKey, toJson(getPOperators(), "SamiRouteOperator", "array"));

    return pJsonObject;
}

String*
SamiStop::getPStopid() {
    return pStopid;
}
void
SamiStop::setPStopid(String* pStopid) {
    this->pStopid = pStopid;
}

String*
SamiStop::getPDisplaystopid() {
    return pDisplaystopid;
}
void
SamiStop::setPDisplaystopid(String* pDisplaystopid) {
    this->pDisplaystopid = pDisplaystopid;
}

String*
SamiStop::getPShortname() {
    return pShortname;
}
void
SamiStop::setPShortname(String* pShortname) {
    this->pShortname = pShortname;
}

String*
SamiStop::getPShortnamelocalized() {
    return pShortnamelocalized;
}
void
SamiStop::setPShortnamelocalized(String* pShortnamelocalized) {
    this->pShortnamelocalized = pShortnamelocalized;
}

String*
SamiStop::getPFullname() {
    return pFullname;
}
void
SamiStop::setPFullname(String* pFullname) {
    this->pFullname = pFullname;
}

String*
SamiStop::getPFullnamelocalized() {
    return pFullnamelocalized;
}
void
SamiStop::setPFullnamelocalized(String* pFullnamelocalized) {
    this->pFullnamelocalized = pFullnamelocalized;
}

String*
SamiStop::getPLatitude() {
    return pLatitude;
}
void
SamiStop::setPLatitude(String* pLatitude) {
    this->pLatitude = pLatitude;
}

String*
SamiStop::getPLongitude() {
    return pLongitude;
}
void
SamiStop::setPLongitude(String* pLongitude) {
    this->pLongitude = pLongitude;
}

IList*
SamiStop::getPOperators() {
    return pOperators;
}
void
SamiStop::setPOperators(IList* pOperators) {
    this->pOperators = pOperators;
}



} /* namespace Swagger */

