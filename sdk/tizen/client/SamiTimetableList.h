/*
 * SamiTimetableList.h
 * 
 * 
 */

#ifndef SamiTimetableList_H_
#define SamiTimetableList_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiTimetable.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTimetableList: public SamiObject {
public:
    SamiTimetableList();
    SamiTimetableList(String* json);
    virtual ~SamiTimetableList();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTimetableList* fromJson(String* obj);

    String* getPErrorcode();
    void setPErrorcode(String* pErrorcode);
    String* getPErrormessage();
    void setPErrormessage(String* pErrormessage);
    Integer* getPNumberofresults();
    void setPNumberofresults(Integer* pNumberofresults);
    String* getPRoute();
    void setPRoute(String* pRoute);
    String* getPStopid();
    void setPStopid(String* pStopid);
    String* getPTimestamp();
    void setPTimestamp(String* pTimestamp);
    IList* getPResults();
    void setPResults(IList* pResults);

private:
    String* pErrorcode;
String* pErrormessage;
Integer* pNumberofresults;
String* pRoute;
String* pStopid;
String* pTimestamp;
IList* pResults;
};

} /* namespace Swagger */

#endif /* SamiTimetableList_H_ */
