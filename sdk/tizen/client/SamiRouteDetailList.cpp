
#include "SamiRouteDetailList.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRouteDetailList::SamiRouteDetailList() {
    init();
}

SamiRouteDetailList::~SamiRouteDetailList() {
    this->cleanup();
}

void
SamiRouteDetailList::init() {
    pErrorcode = null;
pErrormessage = null;
pNumberofresults = null;
pRoute = null;
pTimestamp = null;
pResults = null;
}

void
SamiRouteDetailList::cleanup() {
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
if(pRoute != null) {
        
        delete pRoute;
        pRoute = null;
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


SamiRouteDetailList*
SamiRouteDetailList::fromJson(String* json) {
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
SamiRouteDetailList::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pRouteKey = new JsonString(L"route");
        IJsonValue* pRouteVal = null;
        pJsonObject->GetValue(pRouteKey, pRouteVal);
        if(pRouteVal != null) {
            
            pRoute = new String();
            jsonToValue(pRoute, pRouteVal, L"String", L"String");
        }
        delete pRouteKey;
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
            
            jsonToValue(pResults, pResultsVal, L"IList", L"SamiRouteDetail");
        }
        delete pResultsKey;
    }
}

SamiRouteDetailList::SamiRouteDetailList(String* json) {
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
SamiRouteDetailList::asJson ()
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
SamiRouteDetailList::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pErrorcodeKey = new JsonString(L"errorcode");
    pJsonObject->Add(pErrorcodeKey, toJson(getPErrorcode(), "String", ""));

    JsonString *pErrormessageKey = new JsonString(L"errormessage");
    pJsonObject->Add(pErrormessageKey, toJson(getPErrormessage(), "String", ""));

    JsonString *pNumberofresultsKey = new JsonString(L"numberofresults");
    pJsonObject->Add(pNumberofresultsKey, toJson(getPNumberofresults(), "Integer", ""));

    JsonString *pRouteKey = new JsonString(L"route");
    pJsonObject->Add(pRouteKey, toJson(getPRoute(), "String", ""));

    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "String", ""));

    JsonString *pResultsKey = new JsonString(L"results");
    pJsonObject->Add(pResultsKey, toJson(getPResults(), "SamiRouteDetail", "array"));

    return pJsonObject;
}

String*
SamiRouteDetailList::getPErrorcode() {
    return pErrorcode;
}
void
SamiRouteDetailList::setPErrorcode(String* pErrorcode) {
    this->pErrorcode = pErrorcode;
}

String*
SamiRouteDetailList::getPErrormessage() {
    return pErrormessage;
}
void
SamiRouteDetailList::setPErrormessage(String* pErrormessage) {
    this->pErrormessage = pErrormessage;
}

Integer*
SamiRouteDetailList::getPNumberofresults() {
    return pNumberofresults;
}
void
SamiRouteDetailList::setPNumberofresults(Integer* pNumberofresults) {
    this->pNumberofresults = pNumberofresults;
}

String*
SamiRouteDetailList::getPRoute() {
    return pRoute;
}
void
SamiRouteDetailList::setPRoute(String* pRoute) {
    this->pRoute = pRoute;
}

String*
SamiRouteDetailList::getPTimestamp() {
    return pTimestamp;
}
void
SamiRouteDetailList::setPTimestamp(String* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

IList*
SamiRouteDetailList::getPResults() {
    return pResults;
}
void
SamiRouteDetailList::setPResults(IList* pResults) {
    this->pResults = pResults;
}



} /* namespace Swagger */

