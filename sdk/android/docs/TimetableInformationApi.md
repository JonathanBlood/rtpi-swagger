# TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTimeTable**](TimetableInformationApi.md#getTimeTable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


<a name="getTimeTable"></a>
# **getTimeTable**
> TimetableList getTimeTable(type, stopid, routeid, format)

Endpoint to retrieve timetable information

### Example
```java
// Import classes:
//import io.swagger.client.api.TimetableInformationApi;

TimetableInformationApi apiInstance = new TimetableInformationApi();
String type = "type_example"; // String | value: week; Time table information is retrieved for the whole week
String stopid = "stopid_example"; // String | The bus stop id, if not provided all bus stops are returned
String routeid = "routeid_example"; // String | The route identifier
String format = "format_example"; // String | If not provided JSON format will be used by default
try {
    TimetableList result = apiInstance.getTimeTable(type, stopid, routeid, format);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TimetableInformationApi#getTimeTable");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **String**| value: week; Time table information is retrieved for the whole week | [enum: week]
 **stopid** | **String**| The bus stop id, if not provided all bus stops are returned |
 **routeid** | **String**| The route identifier |
 **format** | **String**| If not provided JSON format will be used by default | [optional] [enum: json, xml]

### Return type

[**TimetableList**](TimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

