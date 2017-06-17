# \TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetTimeTable**](TimetableInformationApi.md#GetTimeTable) | **Get** /timetableinformation | Endpoint to retrieve timetable information


# **GetTimeTable**
> TimetableList GetTimeTable($type_, $stopid, $routeid, $format)

Endpoint to retrieve timetable information


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type_** | **string**| value: week; Time table information is retrieved for the whole week | 
 **stopid** | **string**| The bus stop id, if not provided all bus stops are returned | 
 **routeid** | **string**| The route identifier | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 

### Return type

[**TimetableList**](TimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

