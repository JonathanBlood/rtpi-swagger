#include "SamiTimetableInformationApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiTimetableInformationApi::SamiTimetableInformationApi() {

}

SamiTimetableInformationApi::~SamiTimetableInformationApi() {

}

void
getTimeTableProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiTimetableList* out = new SamiTimetableList();
    jsonToValue(out, pJson, L"SamiTimetableList*", L"SamiTimetableList");

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

SamiTimetableList* 
SamiTimetableInformationApi::getTimeTableWithCompletion(String* type, String* stopid, String* routeid, String* format, void (* success)(SamiTimetableList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTimeTableProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("format"), format);

    queryParams->Add(new String("type"), type);

    queryParams->Add(new String("stopid"), stopid);

    queryParams->Add(new String("routeid"), routeid);

  String* mBody = null;


  String url(L"/timetableinformation");


  client->execute(SamiTimetableInformationApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
