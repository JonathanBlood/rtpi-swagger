#ifndef SamiBusStopInformationApi_H_
#define SamiBusStopInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBusStopList.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBusStopInformationApi {
public:
  SamiBusStopInformationApi();
  virtual ~SamiBusStopInformationApi();

  SamiBusStopList* 
  getBusStopsWithCompletion(String* format, String* operator, String* stopid, String* stopname, void (* handler)(SamiBusStopList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBusStopInformationApi_H_ */
