# SwaggerClient::BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_bus_stops**](BusStopInformationApi.md#get_bus_stops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


# **get_bus_stops**
> BusStopList get_bus_stops(opts)

Endpoint to retrieve bus stop information

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::BusStopInformationApi.new

opts = { 
  format: "format_example", # String | If not provided JSON format will be used by default
  operator: "operator_example", # String | If provided retrieves routes for the given operator
  stopid: "stopid_example", # String | The bus stop id, if not provided all bus stops are returned
  stopname: "stopname_example" # String | The stop name, only matching stops are returned
}

begin
  #Endpoint to retrieve bus stop information
  result = api_instance.get_bus_stops(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BusStopInformationApi->get_bus_stops: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **String**| If not provided JSON format will be used by default | [optional] 
 **operator** | **String**| If provided retrieves routes for the given operator | [optional] 
 **stopid** | **String**| The bus stop id, if not provided all bus stops are returned | [optional] 
 **stopname** | **String**| The stop name, only matching stops are returned | [optional] 

### Return type

[**BusStopList**](BusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



