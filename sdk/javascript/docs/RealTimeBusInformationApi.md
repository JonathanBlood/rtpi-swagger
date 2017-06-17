# RtpiRestWebServicesApi.RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRealTimeBusInformation**](RealTimeBusInformationApi.md#getRealTimeBusInformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


<a name="getRealTimeBusInformation"></a>
# **getRealTimeBusInformation**
> RealTimeInformationList getRealTimeBusInformation(stopid, opts)

Endpoint to retrieve real time bus information

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.RealTimeBusInformationApi();

var stopid = "stopid_example"; // String | The bus stop id

var opts = { 
  'format': "format_example", // String | If not provided JSON format will be used by default
  'operator': "operator_example", // String | If provided retrieves routes for the given operator
  'routeid': "routeid_example", // String | The route identifier
  'maxresults': "maxresults_example" // String | The maximum number of results, if not provided system will limit the number of results depending on server configuration
};

var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getRealTimeBusInformation(stopid, opts, callback);
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

