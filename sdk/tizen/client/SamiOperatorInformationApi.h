#ifndef SamiOperatorInformationApi_H_
#define SamiOperatorInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiOperatorList.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOperatorInformationApi {
public:
  SamiOperatorInformationApi();
  virtual ~SamiOperatorInformationApi();

  SamiOperatorList* 
  getOperatorsWithCompletion(String* format, void (* handler)(SamiOperatorList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOperatorInformationApi_H_ */
