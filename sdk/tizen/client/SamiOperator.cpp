
#include "SamiOperator.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOperator::SamiOperator() {
    init();
}

SamiOperator::~SamiOperator() {
    this->cleanup();
}

void
SamiOperator::init() {
    pOperatorreference = null;
pOperatorname = null;
pOperatordescription = null;
}

void
SamiOperator::cleanup() {
    if(pOperatorreference != null) {
        
        delete pOperatorreference;
        pOperatorreference = null;
    }
if(pOperatorname != null) {
        
        delete pOperatorname;
        pOperatorname = null;
    }
if(pOperatordescription != null) {
        
        delete pOperatordescription;
        pOperatordescription = null;
    }
}


SamiOperator*
SamiOperator::fromJson(String* json) {
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
SamiOperator::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pOperatorreferenceKey = new JsonString(L"operatorreference");
        IJsonValue* pOperatorreferenceVal = null;
        pJsonObject->GetValue(pOperatorreferenceKey, pOperatorreferenceVal);
        if(pOperatorreferenceVal != null) {
            
            pOperatorreference = new String();
            jsonToValue(pOperatorreference, pOperatorreferenceVal, L"String", L"String");
        }
        delete pOperatorreferenceKey;
JsonString* pOperatornameKey = new JsonString(L"operatorname");
        IJsonValue* pOperatornameVal = null;
        pJsonObject->GetValue(pOperatornameKey, pOperatornameVal);
        if(pOperatornameVal != null) {
            
            pOperatorname = new String();
            jsonToValue(pOperatorname, pOperatornameVal, L"String", L"String");
        }
        delete pOperatornameKey;
JsonString* pOperatordescriptionKey = new JsonString(L"operatordescription");
        IJsonValue* pOperatordescriptionVal = null;
        pJsonObject->GetValue(pOperatordescriptionKey, pOperatordescriptionVal);
        if(pOperatordescriptionVal != null) {
            
            pOperatordescription = new String();
            jsonToValue(pOperatordescription, pOperatordescriptionVal, L"String", L"String");
        }
        delete pOperatordescriptionKey;
    }
}

SamiOperator::SamiOperator(String* json) {
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
SamiOperator::asJson ()
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
SamiOperator::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pOperatorreferenceKey = new JsonString(L"operatorreference");
    pJsonObject->Add(pOperatorreferenceKey, toJson(getPOperatorreference(), "String", ""));

    JsonString *pOperatornameKey = new JsonString(L"operatorname");
    pJsonObject->Add(pOperatornameKey, toJson(getPOperatorname(), "String", ""));

    JsonString *pOperatordescriptionKey = new JsonString(L"operatordescription");
    pJsonObject->Add(pOperatordescriptionKey, toJson(getPOperatordescription(), "String", ""));

    return pJsonObject;
}

String*
SamiOperator::getPOperatorreference() {
    return pOperatorreference;
}
void
SamiOperator::setPOperatorreference(String* pOperatorreference) {
    this->pOperatorreference = pOperatorreference;
}

String*
SamiOperator::getPOperatorname() {
    return pOperatorname;
}
void
SamiOperator::setPOperatorname(String* pOperatorname) {
    this->pOperatorname = pOperatorname;
}

String*
SamiOperator::getPOperatordescription() {
    return pOperatordescription;
}
void
SamiOperator::setPOperatordescription(String* pOperatordescription) {
    this->pOperatordescription = pOperatordescription;
}



} /* namespace Swagger */

