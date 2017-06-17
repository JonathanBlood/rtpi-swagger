/*
 * SamiRouteOperator.h
 * 
 * 
 */

#ifndef SamiRouteOperator_H_
#define SamiRouteOperator_H_

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

class SamiRouteOperator: public SamiObject {
public:
    SamiRouteOperator();
    SamiRouteOperator(String* json);
    virtual ~SamiRouteOperator();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiRouteOperator* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);
    IList* getPRoutes();
    void setPRoutes(IList* pRoutes);

private:
    String* pName;
IList* pRoutes;
};

} /* namespace Swagger */

#endif /* SamiRouteOperator_H_ */
