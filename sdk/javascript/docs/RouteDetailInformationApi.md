# RtpiRestWebServicesApi.RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRouteDetail**](RouteDetailInformationApi.md#getRouteDetail) | **GET** /routeinformation | Endpoint to retrieve route detail information


<a name="getRouteDetail"></a>
# **getRouteDetail**
> RouteDetailList getRouteDetail(operator, routeid, opts)

Endpoint to retrieve route detail information

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.RouteDetailInformationApi();

var operator = "operator_example"; // String | The requested operator id

var routeid = "routeid_example"; // String | The requested route id

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
apiInstance.getRouteDetail(operator, routeid, opts, callback);
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

