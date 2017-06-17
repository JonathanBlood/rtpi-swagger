#ifndef SamiRouteInformationApi_H_
#define SamiRouteInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiRouteList.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiRouteInformationApi {
public:
  SamiRouteInformationApi();
  virtual ~SamiRouteInformationApi();

  SamiRouteList* 
  getRoutesWithCompletion(String* format, String* operator, void (* handler)(SamiRouteList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiRouteInformationApi_H_ */
