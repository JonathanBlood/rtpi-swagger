# SwaggerClient::TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_time_table**](TimetableInformationApi.md#get_time_table) | **GET** /timetableinformation | Endpoint to retrieve timetable information


# **get_time_table**
> TimetableList get_time_table(type, stopid, routeid, opts)

Endpoint to retrieve timetable information

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::TimetableInformationApi.new

type = "type_example" # String | value: week; Time table information is retrieved for the whole week

stopid = "stopid_example" # String | The bus stop id, if not provided all bus stops are returned

routeid = "routeid_example" # String | The route identifier

opts = { 
  format: "format_example" # String | If not provided JSON format will be used by default
}

begin
  #Endpoint to retrieve timetable information
  result = api_instance.get_time_table(type, stopid, routeid, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling TimetableInformationApi->get_time_table: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **String**| value: week; Time table information is retrieved for the whole week | 
 **stopid** | **String**| The bus stop id, if not provided all bus stops are returned | 
 **routeid** | **String**| The route identifier | 
 **format** | **String**| If not provided JSON format will be used by default | [optional] 

### Return type

[**TimetableList**](TimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



