/*
 * SamiRoute.h
 * 
 * 
 */

#ifndef SamiRoute_H_
#define SamiRoute_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiRoute: public SamiObject {
public:
    SamiRoute();
    SamiRoute(String* json);
    virtual ~SamiRoute();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRoute* fromJson(String* obj);

    String* getPOperator();
    void setPOperator(String* pOperator);
    String* getPRoute();
    void setPRoute(String* pRoute);

private:
    String* pOperator;
String* pRoute;
};

} /* namespace Swagger */

#endif /* SamiRoute_H_ */
