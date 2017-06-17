# RtpiRestWebServicesApi.RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRoutes**](RouteInformationApi.md#getRoutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


<a name="getRoutes"></a>
# **getRoutes**
> RouteList getRoutes(opts)

Endpoint to retrieve list of routes

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.RouteInformationApi();

var opts = { 
  'format': "format_example", // String | If not provided JSON format will be used by default
  'operator': "operator_example" // String | If provided retrieves routes for the given operator
};

var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getRoutes(opts, callback);
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

