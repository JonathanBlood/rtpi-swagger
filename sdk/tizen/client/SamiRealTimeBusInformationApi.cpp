#include "SamiRealTimeBusInformationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiRealTimeBusInformationApi::SamiRealTimeBusInformationApi() {

}

SamiRealTimeBusInformationApi::~SamiRealTimeBusInformationApi() {

}

void
getRealTimeBusInformationProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRealTimeInformationList* out = new SamiRealTimeInformationList();
    jsonToValue(out, pJson, L"SamiRealTimeInformationList*", L"SamiRealTimeInformationList");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiRealTimeInformationList* 
SamiRealTimeBusInformationApi::getRealTimeBusInformationWithCompletion(String* stopid, String* format, String* operator, String* routeid, String* maxresults, void (* success)(SamiRealTimeInformationList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRealTimeBusInformationProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("format"), format);

    queryParams->Add(new String("operator"), operator);

    queryParams->Add(new String("stopid"), stopid);

    queryParams->Add(new String("routeid"), routeid);

    queryParams->Add(new String("maxresults"), maxresults);

  String* mBody = null;


  String url(L"/realtimebusinformation");


  client->execute(SamiRealTimeBusInformationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
