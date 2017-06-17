/*
 * SamiStop.h
 * 
 * 
 */

#ifndef SamiStop_H_
#define SamiStop_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiRouteOperator.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiStop: public SamiObject {
public:
    SamiStop();
    SamiStop(String* json);
    virtual ~SamiStop();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiStop* fromJson(String* obj);

    String* getPStopid();
    void setPStopid(String* pStopid);
    String* getPDisplaystopid();
    void setPDisplaystopid(String* pDisplaystopid);
    String* getPShortname();
    void setPShortname(String* pShortname);
    String* getPShortnamelocalized();
    void setPShortnamelocalized(String* pShortnamelocalized);
    String* getPFullname();
    void setPFullname(String* pFullname);
    String* getPFullnamelocalized();
    void setPFullnamelocalized(String* pFullnamelocalized);
    String* getPLatitude();
    void setPLatitude(String* pLatitude);
    String* getPLongitude();
    void setPLongitude(String* pLongitude);
    IList* getPOperators();
    void setPOperators(IList* pOperators);

private:
    String* pStopid;
String* pDisplaystopid;
String* pShortname;
String* pShortnamelocalized;
String* pFullname;
String* pFullnamelocalized;
String* pLatitude;
String* pLongitude;
IList* pOperators;
};

} /* namespace Swagger */

#endif /* SamiStop_H_ */
