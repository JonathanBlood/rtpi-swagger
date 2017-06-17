/*
 * SamiOperator.h
 * 
 * 
 */

#ifndef SamiOperator_H_
#define SamiOperator_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiOperator: public SamiObject {
public:
    SamiOperator();
    SamiOperator(String* json);
    virtual ~SamiOperator();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOperator* fromJson(String* obj);

    String* getPOperatorreference();
    void setPOperatorreference(String* pOperatorreference);
    String* getPOperatorname();
    void setPOperatorname(String* pOperatorname);
    String* getPOperatordescription();
    void setPOperatordescription(String* pOperatordescription);

private:
    String* pOperatorreference;
String* pOperatorname;
String* pOperatordescription;
};

} /* namespace Swagger */

#endif /* SamiOperator_H_ */
