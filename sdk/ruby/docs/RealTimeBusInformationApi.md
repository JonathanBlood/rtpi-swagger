# SwaggerClient::RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_real_time_bus_information**](RealTimeBusInformationApi.md#get_real_time_bus_information) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


# **get_real_time_bus_information**
> RealTimeInformationList get_real_time_bus_information(stopid, opts)

Endpoint to retrieve real time bus information

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::RealTimeBusInformationApi.new

stopid = "stopid_example" # String | The bus stop id

opts = { 
  format: "format_example", # String | If not provided JSON format will be used by default
  operator: "operator_example", # String | If provided retrieves routes for the given operator
  routeid: "routeid_example", # String | The route identifier
  maxresults: "maxresults_example" # String | The maximum number of results, if not provided system will limit the number of results depending on server configuration
}

begin
  #Endpoint to retrieve real time bus information
  result = api_instance.get_real_time_bus_information(stopid, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling RealTimeBusInformationApi->get_real_time_bus_information: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **String**| The bus stop id | 
 **format** | **String**| If not provided JSON format will be used by default | [optional] 
 **operator** | **String**| If provided retrieves routes for the given operator | [optional] 
 **routeid** | **String**| The route identifier | [optional] 
 **maxresults** | **String**| The maximum number of results, if not provided system will limit the number of results depending on server configuration | [optional] 

### Return type

[**RealTimeInformationList**](RealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



