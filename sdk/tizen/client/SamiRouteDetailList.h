/*
 * SamiRouteDetailList.h
 * 
 * 
 */

#ifndef SamiRouteDetailList_H_
#define SamiRouteDetailList_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRouteDetail.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiRouteDetailList: public SamiObject {
public:
    SamiRouteDetailList();
    SamiRouteDetailList(String* json);
    virtual ~SamiRouteDetailList();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRouteDetailList* fromJson(String* obj);

    String* getPErrorcode();
    void setPErrorcode(String* pErrorcode);
    String* getPErrormessage();
    void setPErrormessage(String* pErrormessage);
    Integer* getPNumberofresults();
    void setPNumberofresults(Integer* pNumberofresults);
    String* getPRoute();
    void setPRoute(String* pRoute);
    String* getPTimestamp();
    void setPTimestamp(String* pTimestamp);
    IList* getPResults();
    void setPResults(IList* pResults);

private:
    String* pErrorcode;
String* pErrormessage;
Integer* pNumberofresults;
String* pRoute;
String* pTimestamp;
IList* pResults;
};

} /* namespace Swagger */

#endif /* SamiRouteDetailList_H_ */
