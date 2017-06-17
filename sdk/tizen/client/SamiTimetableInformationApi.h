#ifndef SamiTimetableInformationApi_H_
#define SamiTimetableInformationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiTimetableList.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTimetableInformationApi {
public:
  SamiTimetableInformationApi();
  virtual ~SamiTimetableInformationApi();

  SamiTimetableList* 
  getTimeTableWithCompletion(String* type, String* stopid, String* routeid, String* format, void (* handler)(SamiTimetableList*, SamiError*));
  static String getBasePath() {
    return L"https://data.dublinked.ie/cgi-bin/rtpi/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTimetableInformationApi_H_ */
