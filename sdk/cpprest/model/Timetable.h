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
 * Timetable.h
 * 
 * 
 */

#ifndef Timetable_H_
#define Timetable_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Timetable
	: public ModelBase
{
public:
    Timetable();
    virtual ~Timetable();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Timetable members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartdayofweek() const;
    void setStartdayofweek(utility::string_t value);
    bool startdayofweekIsSet() const;
    void unsetStartdayofweek();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnddayofweek() const;
    void setEnddayofweek(utility::string_t value);
    bool enddayofweekIsSet() const;
    void unsetEnddayofweek();
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
    utility::string_t getLastupdated() const;
    void setLastupdated(utility::string_t value);
    bool lastupdatedIsSet() const;
    void unsetLastupdated();
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getDepartures();
    bool departuresIsSet() const;
    void unsetDepartures();
    
protected:
    utility::string_t m_Startdayofweek;
    bool m_StartdayofweekIsSet;
utility::string_t m_Enddayofweek;
    bool m_EnddayofweekIsSet;
utility::string_t m_Destination;
    bool m_DestinationIsSet;
utility::string_t m_Destinationlocalized;
    bool m_DestinationlocalizedIsSet;
utility::string_t m_Lastupdated;
    bool m_LastupdatedIsSet;
std::vector<utility::string_t> m_Departures;
    bool m_DeparturesIsSet;
};

}
}
}
}

#endif /* Timetable_H_ */
