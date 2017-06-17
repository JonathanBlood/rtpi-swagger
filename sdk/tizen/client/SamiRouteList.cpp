
#include "SamiRouteList.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRouteList::SamiRouteList() {
    init();
}

SamiRouteList::~SamiRouteList() {
    this->cleanup();
}

void
SamiRouteList::init() {
    pErrorcode = null;
pErrormessage = null;
pNumberofresults = null;
pTimestamp = null;
pResults = null;
}

void
SamiRouteList::cleanup() {
    if(pErrorcode != null) {
        
        delete pErrorcode;
        pErrorcode = null;
    }
if(pErrormessage != null) {
        
        delete pErrormessage;
        pErrormessage = null;
    }
if(pNumberofresults != null) {
        
        delete pNumberofresults;
        pNumberofresults = null;
    }
if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
if(pResults != null) {
        pResults->RemoveAll(true);
        delete pResults;
        pResults = null;
    }
}


SamiRouteList*
SamiRouteList::fromJson(String* json) {
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
SamiRouteList::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pErrorcodeKey = new JsonString(L"errorcode");
        IJsonValue* pErrorcodeVal = null;
        pJsonObject->GetValue(pErrorcodeKey, pErrorcodeVal);
        if(pErrorcodeVal != null) {
            
            pErrorcode = new String();
            jsonToValue(pErrorcode, pErrorcodeVal, L"String", L"String");
        }
        delete pErrorcodeKey;
JsonString* pErrormessageKey = new JsonString(L"errormessage");
        IJsonValue* pErrormessageVal = null;
        pJsonObject->GetValue(pErrormessageKey, pErrormessageVal);
        if(pErrormessageVal != null) {
            
            pErrormessage = new String();
            jsonToValue(pErrormessage, pErrormessageVal, L"String", L"String");
        }
        delete pErrormessageKey;
JsonString* pNumberofresultsKey = new JsonString(L"numberofresults");
        IJsonValue* pNumberofresultsVal = null;
        pJsonObject->GetValue(pNumberofresultsKey, pNumberofresultsVal);
        if(pNumberofresultsVal != null) {
            
            pNumberofresults = new Integer();
            jsonToValue(pNumberofresults, pNumberofresultsVal, L"Integer", L"Integer");
        }
        delete pNumberofresultsKey;
JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new String();
            jsonToValue(pTimestamp, pTimestampVal, L"String", L"String");
        }
        delete pTimestampKey;
JsonString* pResultsKey = new JsonString(L"results");
        IJsonValue* pResultsVal = null;
        pJsonObject->GetValue(pResultsKey, pResultsVal);
        if(pResultsVal != null) {
            pResults = new ArrayList();
            
            jsonToValue(pResults, pResultsVal, L"IList", L"SamiRoute");
        }
        delete pResultsKey;
    }
}

SamiRouteList::SamiRouteList(String* json) {
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
SamiRouteList::asJson ()
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
SamiRouteList::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pErrorcodeKey = new JsonString(L"errorcode");
    pJsonObject->Add(pErrorcodeKey, toJson(getPErrorcode(), "String", ""));

    JsonString *pErrormessageKey = new JsonString(L"errormessage");
    pJsonObject->Add(pErrormessageKey, toJson(getPErrormessage(), "String", ""));

    JsonString *pNumberofresultsKey = new JsonString(L"numberofresults");
    pJsonObject->Add(pNumberofresultsKey, toJson(getPNumberofresults(), "Integer", ""));

    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "String", ""));

    JsonString *pResultsKey = new JsonString(L"results");
    pJsonObject->Add(pResultsKey, toJson(getPResults(), "SamiRoute", "array"));

    return pJsonObject;
}

String*
SamiRouteList::getPErrorcode() {
    return pErrorcode;
}
void
SamiRouteList::setPErrorcode(String* pErrorcode) {
    this->pErrorcode = pErrorcode;
}

String*
SamiRouteList::getPErrormessage() {
    return pErrormessage;
}
void
SamiRouteList::setPErrormessage(String* pErrormessage) {
    this->pErrormessage = pErrormessage;
}

Integer*
SamiRouteList::getPNumberofresults() {
    return pNumberofresults;
}
void
SamiRouteList::setPNumberofresults(Integer* pNumberofresults) {
    this->pNumberofresults = pNumberofresults;
}

String*
SamiRouteList::getPTimestamp() {
    return pTimestamp;
}
void
SamiRouteList::setPTimestamp(String* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

IList*
SamiRouteList::getPResults() {
    return pResults;
}
void
SamiRouteList::setPResults(IList* pResults) {
    this->pResults = pResults;
}



} /* namespace Swagger */

