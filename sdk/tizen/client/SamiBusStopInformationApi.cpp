#include "SamiBusStopInformationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiBusStopInformationApi::SamiBusStopInformationApi() {

}

SamiBusStopInformationApi::~SamiBusStopInformationApi() {

}

void
getBusStopsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiBusStopList* out = new SamiBusStopList();
    jsonToValue(out, pJson, L"SamiBusStopList*", L"SamiBusStopList");

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

SamiBusStopList* 
SamiBusStopInformationApi::getBusStopsWithCompletion(String* format, String* operator, String* stopid, String* stopname, void (* success)(SamiBusStopList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getBusStopsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("format"), format);

    queryParams->Add(new String("operator"), operator);

    queryParams->Add(new String("stopid"), stopid);

    queryParams->Add(new String("stopname"), stopname);

  String* mBody = null;


  String url(L"/busstopinformation");


  client->execute(SamiBusStopInformationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
