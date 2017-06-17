# RtpiRestWebServicesApi.BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBusStops**](BusStopInformationApi.md#getBusStops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


<a name="getBusStops"></a>
# **getBusStops**
> BusStopList getBusStops(opts)

Endpoint to retrieve bus stop information

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.BusStopInformationApi();

var opts = { 
  'format': "format_example", // String | If not provided JSON format will be used by default
  'operator': "operator_example", // String | If provided retrieves routes for the given operator
  'stopid': "stopid_example", // String | The bus stop id, if not provided all bus stops are returned
  'stopname': "stopname_example" // String | The stop name, only matching stops are returned
};

var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getBusStops(opts, callback);
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

