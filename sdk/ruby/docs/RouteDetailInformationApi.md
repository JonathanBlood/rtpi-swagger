# SwaggerClient::RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_route_detail**](RouteDetailInformationApi.md#get_route_detail) | **GET** /routeinformation | Endpoint to retrieve route detail information


# **get_route_detail**
> RouteDetailList get_route_detail(operator, routeid, opts)

Endpoint to retrieve route detail information

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::RouteDetailInformationApi.new

operator = "operator_example" # String | The requested operator id

routeid = "routeid_example" # String | The requested route id

opts = { 
  format: "format_example" # String | If not provided JSON format will be used by default
}

begin
  #Endpoint to retrieve route detail information
  result = api_instance.get_route_detail(operator, routeid, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling RouteDetailInformationApi->get_route_detail: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **String**| The requested operator id | 
 **routeid** | **String**| The requested route id | 
 **format** | **String**| If not provided JSON format will be used by default | [optional] 

### Return type

[**RouteDetailList**](RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



