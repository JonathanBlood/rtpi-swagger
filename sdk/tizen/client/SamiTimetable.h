/*
 * SamiTimetable.h
 * 
 * 
 */

#ifndef SamiTimetable_H_
#define SamiTimetable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiTimetable: public SamiObject {
public:
    SamiTimetable();
    SamiTimetable(String* json);
    virtual ~SamiTimetable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTimetable* fromJson(String* obj);

    String* getPStartdayofweek();
    void setPStartdayofweek(String* pStartdayofweek);
    String* getPEnddayofweek();
    void setPEnddayofweek(String* pEnddayofweek);
    String* getPDestination();
    void setPDestination(String* pDestination);
    String* getPDestinationlocalized();
    void setPDestinationlocalized(String* pDestinationlocalized);
    String* getPLastupdated();
    void setPLastupdated(String* pLastupdated);
    IList* getPDepartures();
    void setPDepartures(IList* pDepartures);

private:
    String* pStartdayofweek;
String* pEnddayofweek;
String* pDestination;
String* pDestinationlocalized;
String* pLastupdated;
IList* pDepartures;
};

} /* namespace Swagger */

#endif /* SamiTimetable_H_ */
