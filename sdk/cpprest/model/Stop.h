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
 * Stop.h
 * 
 * 
 */

#ifndef Stop_H_
#define Stop_H_


#include "ModelBase.h"

#include "RouteOperator.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Stop
	: public ModelBase
{
public:
    Stop();
    virtual ~Stop();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Stop members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStopid() const;
    void setStopid(utility::string_t value);
    bool stopidIsSet() const;
    void unsetStopid();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplaystopid() const;
    void setDisplaystopid(utility::string_t value);
    bool displaystopidIsSet() const;
    void unsetDisplaystopid();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShortname() const;
    void setShortname(utility::string_t value);
    bool shortnameIsSet() const;
    void unsetShortname();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getShortnamelocalized() const;
    void setShortnamelocalized(utility::string_t value);
    bool shortnamelocalizedIsSet() const;
    void unsetShortnamelocalized();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullname() const;
    void setFullname(utility::string_t value);
    bool fullnameIsSet() const;
    void unsetFullname();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullnamelocalized() const;
    void setFullnamelocalized(utility::string_t value);
    bool fullnamelocalizedIsSet() const;
    void unsetFullnamelocalized();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLatitude() const;
    void setLatitude(utility::string_t value);
    bool latitudeIsSet() const;
    void unsetLatitude();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLongitude() const;
    void setLongitude(utility::string_t value);
    bool longitudeIsSet() const;
    void unsetLongitude();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RouteOperator>>& getOperators();
    bool operatorsIsSet() const;
    void unsetOperators();
    
protected:
    utility::string_t m_Stopid;
    bool m_StopidIsSet;
utility::string_t m_Displaystopid;
    bool m_DisplaystopidIsSet;
utility::string_t m_Shortname;
    bool m_ShortnameIsSet;
utility::string_t m_Shortnamelocalized;
    bool m_ShortnamelocalizedIsSet;
utility::string_t m_Fullname;
    bool m_FullnameIsSet;
utility::string_t m_Fullnamelocalized;
    bool m_FullnamelocalizedIsSet;
utility::string_t m_Latitude;
    bool m_LatitudeIsSet;
utility::string_t m_Longitude;
    bool m_LongitudeIsSet;
std::vector<std::shared_ptr<RouteOperator>> m_Operators;
    bool m_OperatorsIsSet;
};

}
}
}
}

#endif /* Stop_H_ */