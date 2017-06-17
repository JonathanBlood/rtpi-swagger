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


#include "RouteDetailInformationApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

RouteDetailInformationApi::RouteDetailInformationApi( std::shared_ptr<ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

RouteDetailInformationApi::~RouteDetailInformationApi()
{
}

pplx::task<std::shared_ptr<RouteDetailList>> RouteDetailInformationApi::getRouteDetail(utility::string_t operator, utility::string_t routeid, utility::string_t format)
{
    
    
    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = U("/routeinformation");
        
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( U("application/json") );
responseHttpContentTypes.insert( U("application/xml") );
    
    utility::string_t responseHttpContentType;
    
    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 || responseHttpContentTypes.find(U("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("application/json");
    }
    // multipart formdata 
    else if( responseHttpContentTypes.find(U("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = U("multipart/form-data");
    }
    else
    {
        throw ApiException(400, U("RouteDetailInformationApi->getRouteDetail does not produce any supported media type"));
    }    
    
    headerParams[U("Accept")] = responseHttpContentType;
    
    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( U("application/json") );
consumeHttpContentTypes.insert( U("application/xml") );
    
    
    {
        queryParams[U("operator")] = ApiClient::parameterToString(operator);
        
    }
    
    {
        queryParams[U("routeid")] = ApiClient::parameterToString(routeid);
        
    }
    
    {
        queryParams[U("format")] = ApiClient::parameterToString(format);
        
    }
    

    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;
   
    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(U("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("application/json");

    }
    // multipart formdata 
    else if( consumeHttpContentTypes.find(U("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = U("multipart/form-data");
        
    }
    else
    {
        throw ApiException(415, U("RouteDetailInformationApi->getRouteDetail does not consume any supported media type"));
    }    
    
    
    return m_ApiClient->callApi(path, U("GET"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
		// 1xx - informational : OK
		// 2xx - successful	   : OK
		// 3xx - redirection   : OK 
		// 4xx - client error  : not OK
		// 5xx - client error  : not OK
		if (response.status_code() >= 400)
		{
			throw ApiException(response.status_code()
				, U("error calling getRouteDetail: ") + response.reason_phrase()
				, std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
		}
        
        // check response content type
        if(response.headers().has(U("Content-Type")))
        {
            utility::string_t contentType = response.headers()[U("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , U("error calling getRouteDetail: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }
        
        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<RouteDetailList> result(new RouteDetailList());
        
        if(responseHttpContentType == U("application/json"))
        {
            web::json::value json = web::json::value::parse(response);
            
            result->fromJson(json);
        }
        // else if(responseHttpContentType == U("multipart/form-data"))
        // {
        // TODO multipart response parsing    
        // }
        else 
        {
			throw ApiException(500
				, U("error calling findPetsByStatus: unsupported response type"));
        }
        
        return result;
    });            
}

}
}
}
}

