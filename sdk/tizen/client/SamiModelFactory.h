#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiBusStopList.h"
#include "SamiOperator.h"
#include "SamiOperatorList.h"
#include "SamiRealTimeInformation.h"
#include "SamiRealTimeInformationList.h"
#include "SamiRoute.h"
#include "SamiRouteDetail.h"
#include "SamiRouteDetailList.h"
#include "SamiRouteList.h"
#include "SamiRouteOperator.h"
#include "SamiStop.h"
#include "SamiTimetable.h"
#include "SamiTimetableList.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiBusStopList", true)) {
      return new SamiBusStopList();
    }
    if(type.Equals(L"SamiOperator", true)) {
      return new SamiOperator();
    }
    if(type.Equals(L"SamiOperatorList", true)) {
      return new SamiOperatorList();
    }
    if(type.Equals(L"SamiRealTimeInformation", true)) {
      return new SamiRealTimeInformation();
    }
    if(type.Equals(L"SamiRealTimeInformationList", true)) {
      return new SamiRealTimeInformationList();
    }
    if(type.Equals(L"SamiRoute", true)) {
      return new SamiRoute();
    }
    if(type.Equals(L"SamiRouteDetail", true)) {
      return new SamiRouteDetail();
    }
    if(type.Equals(L"SamiRouteDetailList", true)) {
      return new SamiRouteDetailList();
    }
    if(type.Equals(L"SamiRouteList", true)) {
      return new SamiRouteList();
    }
    if(type.Equals(L"SamiRouteOperator", true)) {
      return new SamiRouteOperator();
    }
    if(type.Equals(L"SamiStop", true)) {
      return new SamiStop();
    }
    if(type.Equals(L"SamiTimetable", true)) {
      return new SamiTimetable();
    }
    if(type.Equals(L"SamiTimetableList", true)) {
      return new SamiTimetableList();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
