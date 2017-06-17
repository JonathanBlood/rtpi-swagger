/*
 * SamiRealTimeInformationList.h
 * 
 * 
 */

#ifndef SamiRealTimeInformationList_H_
#define SamiRealTimeInformationList_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRealTimeInformation.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiRealTimeInformationList: public SamiObject {
public:
    SamiRealTimeInformationList();
    SamiRealTimeInformationList(String* json);
    virtual ~SamiRealTimeInformationList();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRealTimeInformationList* fromJson(String* obj);

    String* getPErrorcode();
    void setPErrorcode(String* pErrorcode);
    String* getPErrormessage();
    void setPErrormessage(String* pErrormessage);
    Integer* getPNumberofresults();
    void setPNumberofresults(Integer* pNumberofresults);
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
String* pStopid;
String* pTimestamp;
IList* pResults;
};

} /* namespace Swagger */

#endif /* SamiRealTimeInformationList_H_ */
