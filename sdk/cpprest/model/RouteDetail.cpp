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



#include "RouteDetail.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RouteDetail::RouteDetail()
{
    m_Operator = U("");
    m_OperatorIsSet = false;
    m_Origin = U("");
    m_OriginIsSet = false;
    m_Originlocalized = U("");
    m_OriginlocalizedIsSet = false;
    m_Destination = U("");
    m_DestinationIsSet = false;
    m_Destinationlocalized = U("");
    m_DestinationlocalizedIsSet = false;
    m_Lastupdated = U("");
    m_LastupdatedIsSet = false;
    m_StopsIsSet = false;
    
}

RouteDetail::~RouteDetail()
{
}

void RouteDetail::validate() 
{
    // TODO: implement validation
}

web::json::value RouteDetail::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_OperatorIsSet)
    {
        val[U("operator")] = ModelBase::toJson(m_Operator);
    }
    if(m_OriginIsSet)
    {
        val[U("origin")] = ModelBase::toJson(m_Origin);
    }
    if(m_OriginlocalizedIsSet)
    {
        val[U("originlocalized")] = ModelBase::toJson(m_Originlocalized);
    }
    if(m_DestinationIsSet)
    {
        val[U("destination")] = ModelBase::toJson(m_Destination);
    }
    if(m_DestinationlocalizedIsSet)
    {
        val[U("destinationlocalized")] = ModelBase::toJson(m_Destinationlocalized);
    }
    if(m_LastupdatedIsSet)
    {
        val[U("lastupdated")] = ModelBase::toJson(m_Lastupdated);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Stops )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            val[U("stops")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void RouteDetail::fromJson(web::json::value& val)
{
    if(val.has_field(U("operator")))
    {
        setOperator(ModelBase::stringFromJson(val[U("operator")]));
                
    }
    if(val.has_field(U("origin")))
    {
        setOrigin(ModelBase::stringFromJson(val[U("origin")]));
                
    }
    if(val.has_field(U("originlocalized")))
    {
        setOriginlocalized(ModelBase::stringFromJson(val[U("originlocalized")]));
                
    }
    if(val.has_field(U("destination")))
    {
        setDestination(ModelBase::stringFromJson(val[U("destination")]));
                
    }
    if(val.has_field(U("destinationlocalized")))
    {
        setDestinationlocalized(ModelBase::stringFromJson(val[U("destinationlocalized")]));
                
    }
    if(val.has_field(U("lastupdated")))
    {
        setLastupdated(ModelBase::stringFromJson(val[U("lastupdated")]));
                
    }
    {
        m_Stops.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("stops")))
        {
        for( auto& item : val[U("stops")].as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Stops.push_back( std::shared_ptr<Stop>(nullptr) );
            }
            else
            {
                std::shared_ptr<Stop> newItem(new Stop());
                newItem->fromJson(item);
                m_Stops.push_back( newItem );
            }
            
        }
        }
    }
    
}

void RouteDetail::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_OperatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("operator"), m_Operator));
                
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("origin"), m_Origin));
                
    }
    if(m_OriginlocalizedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("originlocalized"), m_Originlocalized));
                
    }
    if(m_DestinationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("destination"), m_Destination));
                
    }
    if(m_DestinationlocalizedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("destinationlocalized"), m_Destinationlocalized));
                
    }
    if(m_LastupdatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("lastupdated"), m_Lastupdated));
                
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Stops )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0) 
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("stops"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void RouteDetail::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("operator")))
    {
        setOperator(ModelBase::stringFromHttpContent(multipart->getContent(U("operator"))));
                
    }
    if(multipart->hasContent(U("origin")))
    {
        setOrigin(ModelBase::stringFromHttpContent(multipart->getContent(U("origin"))));
                
    }
    if(multipart->hasContent(U("originlocalized")))
    {
        setOriginlocalized(ModelBase::stringFromHttpContent(multipart->getContent(U("originlocalized"))));
                
    }
    if(multipart->hasContent(U("destination")))
    {
        setDestination(ModelBase::stringFromHttpContent(multipart->getContent(U("destination"))));
                
    }
    if(multipart->hasContent(U("destinationlocalized")))
    {
        setDestinationlocalized(ModelBase::stringFromHttpContent(multipart->getContent(U("destinationlocalized"))));
                
    }
    if(multipart->hasContent(U("lastupdated")))
    {
        setLastupdated(ModelBase::stringFromHttpContent(multipart->getContent(U("lastupdated"))));
                
    }
    {
        m_Stops.clear();
        if(multipart->hasContent(U("stops")))
        {            
        
        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("stops"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null()) 
            {
                m_Stops.push_back( std::shared_ptr<Stop>(nullptr) );
            }
            else
            {
                std::shared_ptr<Stop> newItem(new Stop());
                newItem->fromJson(item);
                m_Stops.push_back( newItem );
            }
            
        }
        }
    }
    
}
    
   
utility::string_t RouteDetail::getOperator() const
{
	return m_Operator;
}
void RouteDetail::setOperator(utility::string_t value)
{
	m_Operator = value;
    m_OperatorIsSet = true;
}
bool RouteDetail::operatorIsSet() const
{
    return m_OperatorIsSet;
}
void RouteDetail::unsetOperator() 
{
    m_OperatorIsSet = false;
}
utility::string_t RouteDetail::getOrigin() const
{
	return m_Origin;
}
void RouteDetail::setOrigin(utility::string_t value)
{
	m_Origin = value;
    m_OriginIsSet = true;
}
bool RouteDetail::originIsSet() const
{
    return m_OriginIsSet;
}
void RouteDetail::unsetOrigin() 
{
    m_OriginIsSet = false;
}
utility::string_t RouteDetail::getOriginlocalized() const
{
	return m_Originlocalized;
}
void RouteDetail::setOriginlocalized(utility::string_t value)
{
	m_Originlocalized = value;
    m_OriginlocalizedIsSet = true;
}
bool RouteDetail::originlocalizedIsSet() const
{
    return m_OriginlocalizedIsSet;
}
void RouteDetail::unsetOriginlocalized() 
{
    m_OriginlocalizedIsSet = false;
}
utility::string_t RouteDetail::getDestination() const
{
	return m_Destination;
}
void RouteDetail::setDestination(utility::string_t value)
{
	m_Destination = value;
    m_DestinationIsSet = true;
}
bool RouteDetail::destinationIsSet() const
{
    return m_DestinationIsSet;
}
void RouteDetail::unsetDestination() 
{
    m_DestinationIsSet = false;
}
utility::string_t RouteDetail::getDestinationlocalized() const
{
	return m_Destinationlocalized;
}
void RouteDetail::setDestinationlocalized(utility::string_t value)
{
	m_Destinationlocalized = value;
    m_DestinationlocalizedIsSet = true;
}
bool RouteDetail::destinationlocalizedIsSet() const
{
    return m_DestinationlocalizedIsSet;
}
void RouteDetail::unsetDestinationlocalized() 
{
    m_DestinationlocalizedIsSet = false;
}
utility::string_t RouteDetail::getLastupdated() const
{
	return m_Lastupdated;
}
void RouteDetail::setLastupdated(utility::string_t value)
{
	m_Lastupdated = value;
    m_LastupdatedIsSet = true;
}
bool RouteDetail::lastupdatedIsSet() const
{
    return m_LastupdatedIsSet;
}
void RouteDetail::unsetLastupdated() 
{
    m_LastupdatedIsSet = false;
}
std::vector<std::shared_ptr<Stop>>& RouteDetail::getStops()
{
	return m_Stops;
}
bool RouteDetail::stopsIsSet() const
{
    return m_StopsIsSet;
}
void RouteDetail::unsetStops() 
{
    m_StopsIsSet = false;
}

}
}
}
}
