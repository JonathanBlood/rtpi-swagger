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



#include "RealTimeInformationList.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RealTimeInformationList::RealTimeInformationList()
{
    m_Errorcode = U("");
    m_ErrorcodeIsSet = false;
    m_Errormessage = U("");
    m_ErrormessageIsSet = false;
    m_Numberofresults = 0;
    m_NumberofresultsIsSet = false;
    m_Stopid = U("");
    m_StopidIsSet = false;
    m_Timestamp = U("");
    m_TimestampIsSet = false;
    m_ResultsIsSet = false;
    
}

RealTimeInformationList::~RealTimeInformationList()
{
}

void RealTimeInformationList::validate() 
{
    // TODO: implement validation
}

web::json::value RealTimeInformationList::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_ErrorcodeIsSet)
    {
        val[U("errorcode")] = ModelBase::toJson(m_Errorcode);
    }
    if(m_ErrormessageIsSet)
    {
        val[U("errormessage")] = ModelBase::toJson(m_Errormessage);
    }
    if(m_NumberofresultsIsSet)
    {
        val[U("numberofresults")] = ModelBase::toJson(m_Numberofresults);
    }
    if(m_StopidIsSet)
    {
        val[U("stopid")] = ModelBase::toJson(m_Stopid);
    }
    if(m_TimestampIsSet)
    {
        val[U("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            val[U("results")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void RealTimeInformationList::fromJson(web::json::value& val)
{
    if(val.has_field(U("errorcode")))
    {
        setErrorcode(ModelBase::stringFromJson(val[U("errorcode")]));
                
    }
    if(val.has_field(U("errormessage")))
    {
        setErrormessage(ModelBase::stringFromJson(val[U("errormessage")]));
                
    }
    if(val.has_field(U("numberofresults")))
    {
        setNumberofresults(ModelBase::int32_tFromJson(val[U("numberofresults")]));
    }
    if(val.has_field(U("stopid")))
    {
        setStopid(ModelBase::stringFromJson(val[U("stopid")]));
                
    }
    if(val.has_field(U("timestamp")))
    {
        setTimestamp(ModelBase::stringFromJson(val[U("timestamp")]));
                
    }
    {
        m_Results.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("results")))
        {
        for( auto& item : val[U("results")].as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Results.push_back( std::shared_ptr<RealTimeInformation>(nullptr) );
            }
            else
            {
                std::shared_ptr<RealTimeInformation> newItem(new RealTimeInformation());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
            
        }
        }
    }
    
}

void RealTimeInformationList::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_ErrorcodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("errorcode"), m_Errorcode));
                
    }
    if(m_ErrormessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("errormessage"), m_Errormessage));
                
    }
    if(m_NumberofresultsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("numberofresults"), m_Numberofresults));
    }
    if(m_StopidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("stopid"), m_Stopid));
                
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("timestamp"), m_Timestamp));
                
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("results"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void RealTimeInformationList::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("errorcode")))
    {
        setErrorcode(ModelBase::stringFromHttpContent(multipart->getContent(U("errorcode"))));
                
    }
    if(multipart->hasContent(U("errormessage")))
    {
        setErrormessage(ModelBase::stringFromHttpContent(multipart->getContent(U("errormessage"))));
                
    }
    if(multipart->hasContent(U("numberofresults")))
    {
        setNumberofresults(ModelBase::int32_tFromHttpContent(multipart->getContent(U("numberofresults"))));
    }
    if(multipart->hasContent(U("stopid")))
    {
        setStopid(ModelBase::stringFromHttpContent(multipart->getContent(U("stopid"))));
                
    }
    if(multipart->hasContent(U("timestamp")))
    {
        setTimestamp(ModelBase::stringFromHttpContent(multipart->getContent(U("timestamp"))));
                
    }
    {
        m_Results.clear();
        if(multipart->hasContent(U("results")))
        {            
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("results"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Results.push_back( std::shared_ptr<RealTimeInformation>(nullptr) );
            }
            else
            {
                std::shared_ptr<RealTimeInformation> newItem(new RealTimeInformation());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
            
        }
        }
    }
    
}
    
   
utility::string_t RealTimeInformationList::getErrorcode() const
{
	return m_Errorcode;
}
void RealTimeInformationList::setErrorcode(utility::string_t value)
{
	m_Errorcode = value;
    m_ErrorcodeIsSet = true;
}
bool RealTimeInformationList::errorcodeIsSet() const
{
    return m_ErrorcodeIsSet;
}
void RealTimeInformationList::unsetErrorcode() 
{
    m_ErrorcodeIsSet = false;
}
utility::string_t RealTimeInformationList::getErrormessage() const
{
	return m_Errormessage;
}
void RealTimeInformationList::setErrormessage(utility::string_t value)
{
	m_Errormessage = value;
    m_ErrormessageIsSet = true;
}
bool RealTimeInformationList::errormessageIsSet() const
{
    return m_ErrormessageIsSet;
}
void RealTimeInformationList::unsetErrormessage() 
{
    m_ErrormessageIsSet = false;
}
int32_t RealTimeInformationList::getNumberofresults() const
{
	return m_Numberofresults;
}
void RealTimeInformationList::setNumberofresults(int32_t value)
{
	m_Numberofresults = value;
    m_NumberofresultsIsSet = true;
}
bool RealTimeInformationList::numberofresultsIsSet() const
{
    return m_NumberofresultsIsSet;
}
void RealTimeInformationList::unsetNumberofresults() 
{
    m_NumberofresultsIsSet = false;
}
utility::string_t RealTimeInformationList::getStopid() const
{
	return m_Stopid;
}
void RealTimeInformationList::setStopid(utility::string_t value)
{
	m_Stopid = value;
    m_StopidIsSet = true;
}
bool RealTimeInformationList::stopidIsSet() const
{
    return m_StopidIsSet;
}
void RealTimeInformationList::unsetStopid() 
{
    m_StopidIsSet = false;
}
utility::string_t RealTimeInformationList::getTimestamp() const
{
	return m_Timestamp;
}
void RealTimeInformationList::setTimestamp(utility::string_t value)
{
	m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool RealTimeInformationList::timestampIsSet() const
{
    return m_TimestampIsSet;
}
void RealTimeInformationList::unsetTimestamp() 
{
    m_TimestampIsSet = false;
}
std::vector<std::shared_ptr<RealTimeInformation>>& RealTimeInformationList::getResults()
{
	return m_Results;
}
bool RealTimeInformationList::resultsIsSet() const
{
    return m_ResultsIsSet;
}
void RealTimeInformationList::unsetResults() 
{
    m_ResultsIsSet = false;
}

}
}
}
}
