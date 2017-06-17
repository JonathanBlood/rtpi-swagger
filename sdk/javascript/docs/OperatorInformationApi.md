# RtpiRestWebServicesApi.OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOperators**](OperatorInformationApi.md#getOperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


<a name="getOperators"></a>
# **getOperators**
> OperatorList getOperators(opts)

Endpoint to retrieve information about route operators in the system

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.OperatorInformationApi();

var opts = { 
  'format': "format_example" // String | If not provided JSON format will be used by default
};

var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getOperators(opts, callback);
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

