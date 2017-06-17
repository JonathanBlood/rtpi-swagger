
#include "SamiRealTimeInformation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRealTimeInformation::SamiRealTimeInformation() {
    init();
}

SamiRealTimeInformation::~SamiRealTimeInformation() {
    this->cleanup();
}

void
SamiRealTimeInformation::init() {
    pArrivaldatetime = null;
pDuetime = null;
pDeparturedatetime = null;
pDepartureduetime = null;
pScheduledarrivaldatetime = null;
pScheduleddeparturedatetime = null;
pDestination = null;
pDestinationlocalized = null;
pOrigin = null;
pOriginlocalized = null;
pDirection = null;
pOperator = null;
pAdditionalinformation = null;
pLowfloorstatus = null;
pRoute = null;
pSourcetimestamp = null;
pMonitored = null;
}

void
SamiRealTimeInformation::cleanup() {
    if(pArrivaldatetime != null) {
        
        delete pArrivaldatetime;
        pArrivaldatetime = null;
    }
if(pDuetime != null) {
        
        delete pDuetime;
        pDuetime = null;
    }
if(pDeparturedatetime != null) {
        
        delete pDeparturedatetime;
        pDeparturedatetime = null;
    }
if(pDepartureduetime != null) {
        
        delete pDepartureduetime;
        pDepartureduetime = null;
    }
if(pScheduledarrivaldatetime != null) {
        
        delete pScheduledarrivaldatetime;
        pScheduledarrivaldatetime = null;
    }
if(pScheduleddeparturedatetime != null) {
        
        delete pScheduleddeparturedatetime;
        pScheduleddeparturedatetime = null;
    }
if(pDestination != null) {
        
        delete pDestination;
        pDestination = null;
    }
if(pDestinationlocalized != null) {
        
        delete pDestinationlocalized;
        pDestinationlocalized = null;
    }
if(pOrigin != null) {
        
        delete pOrigin;
        pOrigin = null;
    }
if(pOriginlocalized != null) {
        
        delete pOriginlocalized;
        pOriginlocalized = null;
    }
if(pDirection != null) {
        
        delete pDirection;
        pDirection = null;
    }
if(pOperator != null) {
        
        delete pOperator;
        pOperator = null;
    }
if(pAdditionalinformation != null) {
        
        delete pAdditionalinformation;
        pAdditionalinformation = null;
    }
if(pLowfloorstatus != null) {
        
        delete pLowfloorstatus;
        pLowfloorstatus = null;
    }
if(pRoute != null) {
        
        delete pRoute;
        pRoute = null;
    }
if(pSourcetimestamp != null) {
        
        delete pSourcetimestamp;
        pSourcetimestamp = null;
    }
if(pMonitored != null) {
        
        delete pMonitored;
        pMonitored = null;
    }
}


SamiRealTimeInformation*
SamiRealTimeInformation::fromJson(String* json) {
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
SamiRealTimeInformation::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArrivaldatetimeKey = new JsonString(L"arrivaldatetime");
        IJsonValue* pArrivaldatetimeVal = null;
        pJsonObject->GetValue(pArrivaldatetimeKey, pArrivaldatetimeVal);
        if(pArrivaldatetimeVal != null) {
            
            pArrivaldatetime = new String();
            jsonToValue(pArrivaldatetime, pArrivaldatetimeVal, L"String", L"String");
        }
        delete pArrivaldatetimeKey;
JsonString* pDuetimeKey = new JsonString(L"duetime");
        IJsonValue* pDuetimeVal = null;
        pJsonObject->GetValue(pDuetimeKey, pDuetimeVal);
        if(pDuetimeVal != null) {
            
            pDuetime = new String();
            jsonToValue(pDuetime, pDuetimeVal, L"String", L"String");
        }
        delete pDuetimeKey;
JsonString* pDeparturedatetimeKey = new JsonString(L"departuredatetime");
        IJsonValue* pDeparturedatetimeVal = null;
        pJsonObject->GetValue(pDeparturedatetimeKey, pDeparturedatetimeVal);
        if(pDeparturedatetimeVal != null) {
            
            pDeparturedatetime = new String();
            jsonToValue(pDeparturedatetime, pDeparturedatetimeVal, L"String", L"String");
        }
        delete pDeparturedatetimeKey;
JsonString* pDepartureduetimeKey = new JsonString(L"departureduetime");
        IJsonValue* pDepartureduetimeVal = null;
        pJsonObject->GetValue(pDepartureduetimeKey, pDepartureduetimeVal);
        if(pDepartureduetimeVal != null) {
            
            pDepartureduetime = new String();
            jsonToValue(pDepartureduetime, pDepartureduetimeVal, L"String", L"String");
        }
        delete pDepartureduetimeKey;
JsonString* pScheduledarrivaldatetimeKey = new JsonString(L"scheduledarrivaldatetime");
        IJsonValue* pScheduledarrivaldatetimeVal = null;
        pJsonObject->GetValue(pScheduledarrivaldatetimeKey, pScheduledarrivaldatetimeVal);
        if(pScheduledarrivaldatetimeVal != null) {
            
            pScheduledarrivaldatetime = new String();
            jsonToValue(pScheduledarrivaldatetime, pScheduledarrivaldatetimeVal, L"String", L"String");
        }
        delete pScheduledarrivaldatetimeKey;
JsonString* pScheduleddeparturedatetimeKey = new JsonString(L"scheduleddeparturedatetime");
        IJsonValue* pScheduleddeparturedatetimeVal = null;
        pJsonObject->GetValue(pScheduleddeparturedatetimeKey, pScheduleddeparturedatetimeVal);
        if(pScheduleddeparturedatetimeVal != null) {
            
            pScheduleddeparturedatetime = new String();
            jsonToValue(pScheduleddeparturedatetime, pScheduleddeparturedatetimeVal, L"String", L"String");
        }
        delete pScheduleddeparturedatetimeKey;
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
JsonString* pDirectionKey = new JsonString(L"direction");
        IJsonValue* pDirectionVal = null;
        pJsonObject->GetValue(pDirectionKey, pDirectionVal);
        if(pDirectionVal != null) {
            
            pDirection = new String();
            jsonToValue(pDirection, pDirectionVal, L"String", L"String");
        }
        delete pDirectionKey;
JsonString* pOperatorKey = new JsonString(L"operator");
        IJsonValue* pOperatorVal = null;
        pJsonObject->GetValue(pOperatorKey, pOperatorVal);
        if(pOperatorVal != null) {
            
            pOperator = new String();
            jsonToValue(pOperator, pOperatorVal, L"String", L"String");
        }
        delete pOperatorKey;
JsonString* pAdditionalinformationKey = new JsonString(L"additionalinformation");
        IJsonValue* pAdditionalinformationVal = null;
        pJsonObject->GetValue(pAdditionalinformationKey, pAdditionalinformationVal);
        if(pAdditionalinformationVal != null) {
            
            pAdditionalinformation = new String();
            jsonToValue(pAdditionalinformation, pAdditionalinformationVal, L"String", L"String");
        }
        delete pAdditionalinformationKey;
JsonString* pLowfloorstatusKey = new JsonString(L"lowfloorstatus");
        IJsonValue* pLowfloorstatusVal = null;
        pJsonObject->GetValue(pLowfloorstatusKey, pLowfloorstatusVal);
        if(pLowfloorstatusVal != null) {
            
            pLowfloorstatus = new String();
            jsonToValue(pLowfloorstatus, pLowfloorstatusVal, L"String", L"String");
        }
        delete pLowfloorstatusKey;
JsonString* pRouteKey = new JsonString(L"route");
        IJsonValue* pRouteVal = null;
        pJsonObject->GetValue(pRouteKey, pRouteVal);
        if(pRouteVal != null) {
            
            pRoute = new String();
            jsonToValue(pRoute, pRouteVal, L"String", L"String");
        }
        delete pRouteKey;
JsonString* pSourcetimestampKey = new JsonString(L"sourcetimestamp");
        IJsonValue* pSourcetimestampVal = null;
        pJsonObject->GetValue(pSourcetimestampKey, pSourcetimestampVal);
        if(pSourcetimestampVal != null) {
            
            pSourcetimestamp = new String();
            jsonToValue(pSourcetimestamp, pSourcetimestampVal, L"String", L"String");
        }
        delete pSourcetimestampKey;
JsonString* pMonitoredKey = new JsonString(L"monitored");
        IJsonValue* pMonitoredVal = null;
        pJsonObject->GetValue(pMonitoredKey, pMonitoredVal);
        if(pMonitoredVal != null) {
            
            pMonitored = new String();
            jsonToValue(pMonitored, pMonitoredVal, L"String", L"String");
        }
        delete pMonitoredKey;
    }
}

SamiRealTimeInformation::SamiRealTimeInformation(String* json) {
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
SamiRealTimeInformation::asJson ()
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
SamiRealTimeInformation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pArrivaldatetimeKey = new JsonString(L"arrivaldatetime");
    pJsonObject->Add(pArrivaldatetimeKey, toJson(getPArrivaldatetime(), "String", ""));

    JsonString *pDuetimeKey = new JsonString(L"duetime");
    pJsonObject->Add(pDuetimeKey, toJson(getPDuetime(), "String", ""));

    JsonString *pDeparturedatetimeKey = new JsonString(L"departuredatetime");
    pJsonObject->Add(pDeparturedatetimeKey, toJson(getPDeparturedatetime(), "String", ""));

    JsonString *pDepartureduetimeKey = new JsonString(L"departureduetime");
    pJsonObject->Add(pDepartureduetimeKey, toJson(getPDepartureduetime(), "String", ""));

    JsonString *pScheduledarrivaldatetimeKey = new JsonString(L"scheduledarrivaldatetime");
    pJsonObject->Add(pScheduledarrivaldatetimeKey, toJson(getPScheduledarrivaldatetime(), "String", ""));

    JsonString *pScheduleddeparturedatetimeKey = new JsonString(L"scheduleddeparturedatetime");
    pJsonObject->Add(pScheduleddeparturedatetimeKey, toJson(getPScheduleddeparturedatetime(), "String", ""));

    JsonString *pDestinationKey = new JsonString(L"destination");
    pJsonObject->Add(pDestinationKey, toJson(getPDestination(), "String", ""));

    JsonString *pDestinationlocalizedKey = new JsonString(L"destinationlocalized");
    pJsonObject->Add(pDestinationlocalizedKey, toJson(getPDestinationlocalized(), "String", ""));

    JsonString *pOriginKey = new JsonString(L"origin");
    pJsonObject->Add(pOriginKey, toJson(getPOrigin(), "String", ""));

    JsonString *pOriginlocalizedKey = new JsonString(L"originlocalized");
    pJsonObject->Add(pOriginlocalizedKey, toJson(getPOriginlocalized(), "String", ""));

    JsonString *pDirectionKey = new JsonString(L"direction");
    pJsonObject->Add(pDirectionKey, toJson(getPDirection(), "String", ""));

    JsonString *pOperatorKey = new JsonString(L"operator");
    pJsonObject->Add(pOperatorKey, toJson(getPOperator(), "String", ""));

    JsonString *pAdditionalinformationKey = new JsonString(L"additionalinformation");
    pJsonObject->Add(pAdditionalinformationKey, toJson(getPAdditionalinformation(), "String", ""));

    JsonString *pLowfloorstatusKey = new JsonString(L"lowfloorstatus");
    pJsonObject->Add(pLowfloorstatusKey, toJson(getPLowfloorstatus(), "String", ""));

    JsonString *pRouteKey = new JsonString(L"route");
    pJsonObject->Add(pRouteKey, toJson(getPRoute(), "String", ""));

    JsonString *pSourcetimestampKey = new JsonString(L"sourcetimestamp");
    pJsonObject->Add(pSourcetimestampKey, toJson(getPSourcetimestamp(), "String", ""));

    JsonString *pMonitoredKey = new JsonString(L"monitored");
    pJsonObject->Add(pMonitoredKey, toJson(getPMonitored(), "String", ""));

    return pJsonObject;
}

String*
SamiRealTimeInformation::getPArrivaldatetime() {
    return pArrivaldatetime;
}
void
SamiRealTimeInformation::setPArrivaldatetime(String* pArrivaldatetime) {
    this->pArrivaldatetime = pArrivaldatetime;
}

String*
SamiRealTimeInformation::getPDuetime() {
    return pDuetime;
}
void
SamiRealTimeInformation::setPDuetime(String* pDuetime) {
    this->pDuetime = pDuetime;
}

String*
SamiRealTimeInformation::getPDeparturedatetime() {
    return pDeparturedatetime;
}
void
SamiRealTimeInformation::setPDeparturedatetime(String* pDeparturedatetime) {
    this->pDeparturedatetime = pDeparturedatetime;
}

String*
SamiRealTimeInformation::getPDepartureduetime() {
    return pDepartureduetime;
}
void
SamiRealTimeInformation::setPDepartureduetime(String* pDepartureduetime) {
    this->pDepartureduetime = pDepartureduetime;
}

String*
SamiRealTimeInformation::getPScheduledarrivaldatetime() {
    return pScheduledarrivaldatetime;
}
void
SamiRealTimeInformation::setPScheduledarrivaldatetime(String* pScheduledarrivaldatetime) {
    this->pScheduledarrivaldatetime = pScheduledarrivaldatetime;
}

String*
SamiRealTimeInformation::getPScheduleddeparturedatetime() {
    return pScheduleddeparturedatetime;
}
void
SamiRealTimeInformation::setPScheduleddeparturedatetime(String* pScheduleddeparturedatetime) {
    this->pScheduleddeparturedatetime = pScheduleddeparturedatetime;
}

String*
SamiRealTimeInformation::getPDestination() {
    return pDestination;
}
void
SamiRealTimeInformation::setPDestination(String* pDestination) {
    this->pDestination = pDestination;
}

String*
SamiRealTimeInformation::getPDestinationlocalized() {
    return pDestinationlocalized;
}
void
SamiRealTimeInformation::setPDestinationlocalized(String* pDestinationlocalized) {
    this->pDestinationlocalized = pDestinationlocalized;
}

String*
SamiRealTimeInformation::getPOrigin() {
    return pOrigin;
}
void
SamiRealTimeInformation::setPOrigin(String* pOrigin) {
    this->pOrigin = pOrigin;
}

String*
SamiRealTimeInformation::getPOriginlocalized() {
    return pOriginlocalized;
}
void
SamiRealTimeInformation::setPOriginlocalized(String* pOriginlocalized) {
    this->pOriginlocalized = pOriginlocalized;
}

String*
SamiRealTimeInformation::getPDirection() {
    return pDirection;
}
void
SamiRealTimeInformation::setPDirection(String* pDirection) {
    this->pDirection = pDirection;
}

String*
SamiRealTimeInformation::getPOperator() {
    return pOperator;
}
void
SamiRealTimeInformation::setPOperator(String* pOperator) {
    this->pOperator = pOperator;
}

String*
SamiRealTimeInformation::getPAdditionalinformation() {
    return pAdditionalinformation;
}
void
SamiRealTimeInformation::setPAdditionalinformation(String* pAdditionalinformation) {
    this->pAdditionalinformation = pAdditionalinformation;
}

String*
SamiRealTimeInformation::getPLowfloorstatus() {
    return pLowfloorstatus;
}
void
SamiRealTimeInformation::setPLowfloorstatus(String* pLowfloorstatus) {
    this->pLowfloorstatus = pLowfloorstatus;
}

String*
SamiRealTimeInformation::getPRoute() {
    return pRoute;
}
void
SamiRealTimeInformation::setPRoute(String* pRoute) {
    this->pRoute = pRoute;
}

String*
SamiRealTimeInformation::getPSourcetimestamp() {
    return pSourcetimestamp;
}
void
SamiRealTimeInformation::setPSourcetimestamp(String* pSourcetimestamp) {
    this->pSourcetimestamp = pSourcetimestamp;
}

String*
SamiRealTimeInformation::getPMonitored() {
    return pMonitored;
}
void
SamiRealTimeInformation::setPMonitored(String* pMonitored) {
    this->pMonitored = pMonitored;
}



} /* namespace Swagger */

