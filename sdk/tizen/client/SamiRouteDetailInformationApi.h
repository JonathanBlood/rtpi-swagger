#ifndef SamiRouteDetailInformationApi_H_
#define SamiRouteDetailInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiRouteDetailList.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiRouteDetailInformationApi {
public:
  SamiRouteDetailInformationApi();
  virtual ~SamiRouteDetailInformationApi();

  SamiRouteDetailList* 
  getRouteDetailWithCompletion(String* operator, String* routeid, String* format, void (* handler)(SamiRouteDetailList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiRouteDetailInformationApi_H_ */
