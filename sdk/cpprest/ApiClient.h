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
 * ApiClient.h
 * 
 * This is an API client responsible for stating the HTTP calls 
 */

#ifndef ApiClient_H_
#define ApiClient_H_


#include "ApiConfiguration.h"
#include "ApiException.h"
#include "IHttpBody.h"
#include "HttpContent.h"

#include <memory> 
#include <vector> 

#include <cpprest/details/basic_types.h>
#include <cpprest/http_client.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  ApiClient
{
public:
    ApiClient( std::shared_ptr<ApiConfiguration> configuration = nullptr );
    virtual ~ApiClient();
    
    std::shared_ptr<ApiConfiguration> getConfiguration() const;
    void setConfiguration(std::shared_ptr<ApiConfiguration> configuration);
    
    static utility::string_t parameterToString(utility::string_t value);
    static utility::string_t parameterToString(int32_t value);
    static utility::string_t parameterToString(int64_t value);
    
    template<class T>
    static utility::string_t parameterToArrayString(std::vector<T> value)
    {
        utility::stringstream_t ss;
        
        for( size_t i = 0; i < value.size(); i++)
        {
            if( i > 0) ss << U(", ");
            ss << ApiClient::parameterToString(value[i]);
        }

        return ss.str();        
    }
    
    pplx::task<web::http::http_response> callApi( 
        const utility::string_t& path, 
        const utility::string_t& method, 
        const std::map<utility::string_t, utility::string_t>& queryParams, 
        const std::shared_ptr<IHttpBody> postBody, 
        const std::map<utility::string_t, utility::string_t>& headerParams, 
        const std::map<utility::string_t, utility::string_t>& formParams, 
        const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
        const utility::string_t& contentType
    ) const;
    
protected:

    std::shared_ptr<ApiConfiguration> m_Configuration;
};

}
}
}
}

#endif /* ApiClient_H_ */
