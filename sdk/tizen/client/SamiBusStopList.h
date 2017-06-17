/*
 * SamiBusStopList.h
 * 
 * 
 */

#ifndef SamiBusStopList_H_
#define SamiBusStopList_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiStop.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiBusStopList: public SamiObject {
public:
    SamiBusStopList();
    SamiBusStopList(String* json);
    virtual ~SamiBusStopList();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBusStopList* fromJson(String* obj);

    String* getPErrorcode();
    void setPErrorcode(String* pErrorcode);
    String* getPErrormessage();
    void setPErrormessage(String* pErrormessage);
    Integer* getPNumberofresults();
    void setPNumberofresults(Integer* pNumberofresults);
    String* getPTimestamp();
    void setPTimestamp(String* pTimestamp);
    IList* getPResults();
    void setPResults(IList* pResults);

private:
    String* pErrorcode;
String* pErrormessage;
Integer* pNumberofresults;
String* pTimestamp;
IList* pResults;
};

} /* namespace Swagger */

#endif /* SamiBusStopList_H_ */
