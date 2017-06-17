/*
 * SamiRouteDetail.h
 * 
 * 
 */

#ifndef SamiRouteDetail_H_
#define SamiRouteDetail_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiStop.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;


namespace Swagger {

class SamiRouteDetail: public SamiObject {
public:
    SamiRouteDetail();
    SamiRouteDetail(String* json);
    virtual ~SamiRouteDetail();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRouteDetail* fromJson(String* obj);

    String* getPOperator();
    void setPOperator(String* pOperator);
    String* getPOrigin();
    void setPOrigin(String* pOrigin);
    String* getPOriginlocalized();
    void setPOriginlocalized(String* pOriginlocalized);
    String* getPDestination();
    void setPDestination(String* pDestination);
    String* getPDestinationlocalized();
    void setPDestinationlocalized(String* pDestinationlocalized);
    String* getPLastupdated();
    void setPLastupdated(String* pLastupdated);
    IList* getPStops();
    void setPStops(IList* pStops);

private:
    String* pOperator;
String* pOrigin;
String* pOriginlocalized;
String* pDestination;
String* pDestinationlocalized;
String* pLastupdated;
IList* pStops;
};

} /* namespace Swagger */

#endif /* SamiRouteDetail_H_ */
