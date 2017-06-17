/**
 * RTPI REST Web Services API
 * <p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * RealTimeInformation.h
 * 
 * 
 */

#ifndef RealTimeInformation_H_
#define RealTimeInformation_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RealTimeInformation
	: public ModelBase
{
public:
    RealTimeInformation();
    virtual ~RealTimeInformation();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// RealTimeInformation members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getArrivaldatetime() const;
    void setArrivaldatetime(utility::string_t value);
    bool arrivaldatetimeIsSet() const;
    void unsetArrivaldatetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDuetime() const;
    void setDuetime(utility::string_t value);
    bool duetimeIsSet() const;
    void unsetDuetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDeparturedatetime() const;
    void setDeparturedatetime(utility::string_t value);
    bool departuredatetimeIsSet() const;
    void unsetDeparturedatetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDepartureduetime() const;
    void setDepartureduetime(utility::string_t value);
    bool departureduetimeIsSet() const;
    void unsetDepartureduetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScheduledarrivaldatetime() const;
    void setScheduledarrivaldatetime(utility::string_t value);
    bool scheduledarrivaldatetimeIsSet() const;
    void unsetScheduledarrivaldatetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScheduleddeparturedatetime() const;
    void setScheduleddeparturedatetime(utility::string_t value);
    bool scheduleddeparturedatetimeIsSet() const;
    void unsetScheduleddeparturedatetime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDestination() const;
    void setDestination(utility::string_t value);
    bool destinationIsSet() const;
    void unsetDestination();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDestinationlocalized() const;
    void setDestinationlocalized(utility::string_t value);
    bool destinationlocalizedIsSet() const;
    void unsetDestinationlocalized();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrigin() const;
    void setOrigin(utility::string_t value);
    bool originIsSet() const;
    void unsetOrigin();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOriginlocalized() const;
    void setOriginlocalized(utility::string_t value);
    bool originlocalizedIsSet() const;
    void unsetOriginlocalized();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDirection() const;
    void setDirection(utility::string_t value);
    bool directionIsSet() const;
    void unsetDirection();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOperator() const;
    void setOperator(utility::string_t value);
    bool operatorIsSet() const;
    void unsetOperator();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAdditionalinformation() const;
    void setAdditionalinformation(utility::string_t value);
    bool additionalinformationIsSet() const;
    void unsetAdditionalinformation();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLowfloorstatus() const;
    void setLowfloorstatus(utility::string_t value);
    bool lowfloorstatusIsSet() const;
    void unsetLowfloorstatus();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRoute() const;
    void setRoute(utility::string_t value);
    bool routeIsSet() const;
    void unsetRoute();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSourcetimestamp() const;
    void setSourcetimestamp(utility::string_t value);
    bool sourcetimestampIsSet() const;
    void unsetSourcetimestamp();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMonitored() const;
    void setMonitored(utility::string_t value);
    bool monitoredIsSet() const;
    void unsetMonitored();
    
protected:
    utility::string_t m_Arrivaldatetime;
    bool m_ArrivaldatetimeIsSet;
utility::string_t m_Duetime;
    bool m_DuetimeIsSet;
utility::string_t m_Departuredatetime;
    bool m_DeparturedatetimeIsSet;
utility::string_t m_Departureduetime;
    bool m_DepartureduetimeIsSet;
utility::string_t m_Scheduledarrivaldatetime;
    bool m_ScheduledarrivaldatetimeIsSet;
utility::string_t m_Scheduleddeparturedatetime;
    bool m_ScheduleddeparturedatetimeIsSet;
utility::string_t m_Destination;
    bool m_DestinationIsSet;
utility::string_t m_Destinationlocalized;
    bool m_DestinationlocalizedIsSet;
utility::string_t m_Origin;
    bool m_OriginIsSet;
utility::string_t m_Originlocalized;
    bool m_OriginlocalizedIsSet;
utility::string_t m_Direction;
    bool m_DirectionIsSet;
utility::string_t m_Operator;
    bool m_OperatorIsSet;
utility::string_t m_Additionalinformation;
    bool m_AdditionalinformationIsSet;
utility::string_t m_Lowfloorstatus;
    bool m_LowfloorstatusIsSet;
utility::string_t m_Route;
    bool m_RouteIsSet;
utility::string_t m_Sourcetimestamp;
    bool m_SourcetimestampIsSet;
utility::string_t m_Monitored;
    bool m_MonitoredIsSet;
};

}
}
}
}

#endif /* RealTimeInformation_H_ */
