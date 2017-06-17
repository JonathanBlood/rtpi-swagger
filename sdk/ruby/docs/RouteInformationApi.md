# SwaggerClient::RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_routes**](RouteInformationApi.md#get_routes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


# **get_routes**
> RouteList get_routes(opts)

Endpoint to retrieve list of routes

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::RouteInformationApi.new

opts = { 
  format: "format_example", # String | If not provided JSON format will be used by default
  operator: "operator_example" # String | If provided retrieves routes for the given operator
}

begin
  #Endpoint to retrieve list of routes
  result = api_instance.get_routes(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling RouteInformationApi->get_routes: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **String**| If not provided JSON format will be used by default | [optional] 
 **operator** | **String**| If provided retrieves routes for the given operator | [optional] 

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



