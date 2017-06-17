#ifndef SamiRealTimeBusInformationApi_H_
#define SamiRealTimeBusInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiRealTimeInformationList.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiRealTimeBusInformationApi {
public:
  SamiRealTimeBusInformationApi();
  virtual ~SamiRealTimeBusInformationApi();

  SamiRealTimeInformationList* 
  getRealTimeBusInformationWithCompletion(String* stopid, String* format, String* operator, String* routeid, String* maxresults, void (* handler)(SamiRealTimeInformationList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiRealTimeBusInformationApi_H_ */
