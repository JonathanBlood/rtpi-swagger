# RtpiRestWebServicesApi.TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTimeTable**](TimetableInformationApi.md#getTimeTable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


<a name="getTimeTable"></a>
# **getTimeTable**
> TimetableList getTimeTable(type, stopid, routeid, opts)

Endpoint to retrieve timetable information

### Example
```javascript
var RtpiRestWebServicesApi = require('rtpi_rest_web_services_api');

var apiInstance = new RtpiRestWebServicesApi.TimetableInformationApi();

var type = "type_example"; // String | value: week; Time table information is retrieved for the whole week

var stopid = "stopid_example"; // String | The bus stop id, if not provided all bus stops are returned

var routeid = "routeid_example"; // String | The route identifier

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
apiInstance.getTimeTable(type, stopid, routeid, opts, callback);
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

