
#include "SamiTimetable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTimetable::SamiTimetable() {
    init();
}

SamiTimetable::~SamiTimetable() {
    this->cleanup();
}

void
SamiTimetable::init() {
    pStartdayofweek = null;
pEnddayofweek = null;
pDestination = null;
pDestinationlocalized = null;
pLastupdated = null;
pDepartures = null;
}

void
SamiTimetable::cleanup() {
    if(pStartdayofweek != null) {
        
        delete pStartdayofweek;
        pStartdayofweek = null;
    }
if(pEnddayofweek != null) {
        
        delete pEnddayofweek;
        pEnddayofweek = null;
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
if(pDepartures != null) {
        pDepartures->RemoveAll(true);
        delete pDepartures;
        pDepartures = null;
    }
}


SamiTimetable*
SamiTimetable::fromJson(String* json) {
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
SamiTimetable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pStartdayofweekKey = new JsonString(L"startdayofweek");
        IJsonValue* pStartdayofweekVal = null;
        pJsonObject->GetValue(pStartdayofweekKey, pStartdayofweekVal);
        if(pStartdayofweekVal != null) {
            
            pStartdayofweek = new String();
            jsonToValue(pStartdayofweek, pStartdayofweekVal, L"String", L"String");
        }
        delete pStartdayofweekKey;
JsonString* pEnddayofweekKey = new JsonString(L"enddayofweek");
        IJsonValue* pEnddayofweekVal = null;
        pJsonObject->GetValue(pEnddayofweekKey, pEnddayofweekVal);
        if(pEnddayofweekVal != null) {
            
            pEnddayofweek = new String();
            jsonToValue(pEnddayofweek, pEnddayofweekVal, L"String", L"String");
        }
        delete pEnddayofweekKey;
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
JsonString* pDeparturesKey = new JsonString(L"departures");
        IJsonValue* pDeparturesVal = null;
        pJsonObject->GetValue(pDeparturesKey, pDeparturesVal);
        if(pDeparturesVal != null) {
            pDepartures = new ArrayList();
            
            jsonToValue(pDepartures, pDeparturesVal, L"IList", L"String");
        }
        delete pDeparturesKey;
    }
}

SamiTimetable::SamiTimetable(String* json) {
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
SamiTimetable::asJson ()
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
SamiTimetable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pStartdayofweekKey = new JsonString(L"startdayofweek");
    pJsonObject->Add(pStartdayofweekKey, toJson(getPStartdayofweek(), "String", ""));

    JsonString *pEnddayofweekKey = new JsonString(L"enddayofweek");
    pJsonObject->Add(pEnddayofweekKey, toJson(getPEnddayofweek(), "String", ""));

    JsonString *pDestinationKey = new JsonString(L"destination");
    pJsonObject->Add(pDestinationKey, toJson(getPDestination(), "String", ""));

    JsonString *pDestinationlocalizedKey = new JsonString(L"destinationlocalized");
    pJsonObject->Add(pDestinationlocalizedKey, toJson(getPDestinationlocalized(), "String", ""));

    JsonString *pLastupdatedKey = new JsonString(L"lastupdated");
    pJsonObject->Add(pLastupdatedKey, toJson(getPLastupdated(), "String", ""));

    JsonString *pDeparturesKey = new JsonString(L"departures");
    pJsonObject->Add(pDeparturesKey, toJson(getPDepartures(), "String", "array"));

    return pJsonObject;
}

String*
SamiTimetable::getPStartdayofweek() {
    return pStartdayofweek;
}
void
SamiTimetable::setPStartdayofweek(String* pStartdayofweek) {
    this->pStartdayofweek = pStartdayofweek;
}

String*
SamiTimetable::getPEnddayofweek() {
    return pEnddayofweek;
}
void
SamiTimetable::setPEnddayofweek(String* pEnddayofweek) {
    this->pEnddayofweek = pEnddayofweek;
}

String*
SamiTimetable::getPDestination() {
    return pDestination;
}
void
SamiTimetable::setPDestination(String* pDestination) {
    this->pDestination = pDestination;
}

String*
SamiTimetable::getPDestinationlocalized() {
    return pDestinationlocalized;
}
void
SamiTimetable::setPDestinationlocalized(String* pDestinationlocalized) {
    this->pDestinationlocalized = pDestinationlocalized;
}

String*
SamiTimetable::getPLastupdated() {
    return pLastupdated;
}
void
SamiTimetable::setPLastupdated(String* pLastupdated) {
    this->pLastupdated = pLastupdated;
}

IList*
SamiTimetable::getPDepartures() {
    return pDepartures;
}
void
SamiTimetable::setPDepartures(IList* pDepartures) {
    this->pDepartures = pDepartures;
}



} /* namespace Swagger */

