/*
 * SamiRealTimeInformation.h
 * 
 * 
 */

#ifndef SamiRealTimeInformation_H_
#define SamiRealTimeInformation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiRealTimeInformation: public SamiObject {
public:
    SamiRealTimeInformation();
    SamiRealTimeInformation(String* json);
    virtual ~SamiRealTimeInformation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRealTimeInformation* fromJson(String* obj);

    String* getPArrivaldatetime();
    void setPArrivaldatetime(String* pArrivaldatetime);
    String* getPDuetime();
    void setPDuetime(String* pDuetime);
    String* getPDeparturedatetime();
    void setPDeparturedatetime(String* pDeparturedatetime);
    String* getPDepartureduetime();
    void setPDepartureduetime(String* pDepartureduetime);
    String* getPScheduledarrivaldatetime();
    void setPScheduledarrivaldatetime(String* pScheduledarrivaldatetime);
    String* getPScheduleddeparturedatetime();
    void setPScheduleddeparturedatetime(String* pScheduleddeparturedatetime);
    String* getPDestination();
    void setPDestination(String* pDestination);
    String* getPDestinationlocalized();
    void setPDestinationlocalized(String* pDestinationlocalized);
    String* getPOrigin();
    void setPOrigin(String* pOrigin);
    String* getPOriginlocalized();
    void setPOriginlocalized(String* pOriginlocalized);
    String* getPDirection();
    void setPDirection(String* pDirection);
    String* getPOperator();
    void setPOperator(String* pOperator);
    String* getPAdditionalinformation();
    void setPAdditionalinformation(String* pAdditionalinformation);
    String* getPLowfloorstatus();
    void setPLowfloorstatus(String* pLowfloorstatus);
    String* getPRoute();
    void setPRoute(String* pRoute);
    String* getPSourcetimestamp();
    void setPSourcetimestamp(String* pSourcetimestamp);
    String* getPMonitored();
    void setPMonitored(String* pMonitored);

private:
    String* pArrivaldatetime;
String* pDuetime;
String* pDeparturedatetime;
String* pDepartureduetime;
String* pScheduledarrivaldatetime;
String* pScheduleddeparturedatetime;
String* pDestination;
String* pDestinationlocalized;
String* pOrigin;
String* pOriginlocalized;
String* pDirection;
String* pOperator;
String* pAdditionalinformation;
String* pLowfloorstatus;
String* pRoute;
String* pSourcetimestamp;
String* pMonitored;
};

} /* namespace Swagger */

#endif /* SamiRealTimeInformation_H_ */
