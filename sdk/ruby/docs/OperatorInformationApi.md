# SwaggerClient::OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_operators**](OperatorInformationApi.md#get_operators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


# **get_operators**
> OperatorList get_operators(opts)

Endpoint to retrieve information about route operators in the system

### Example
```ruby
# load the gem
require 'swagger_client'

api_instance = SwaggerClient::OperatorInformationApi.new

opts = { 
  format: "format_example" # String | If not provided JSON format will be used by default
}

begin
  #Endpoint to retrieve information about route operators in the system
  result = api_instance.get_operators(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling OperatorInformationApi->get_operators: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **String**| If not provided JSON format will be used by default | [optional] 

### Return type

[**OperatorList**](OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml



