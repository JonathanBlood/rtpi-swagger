# \RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRealTimeBusInformation**](RealTimeBusInformationApi.md#GetRealTimeBusInformation) | **Get** /realtimebusinformation | Endpoint to retrieve real time bus information


# **GetRealTimeBusInformation**
> RealTimeInformationList GetRealTimeBusInformation($stopid, $format, $operator, $routeid, $maxresults)

Endpoint to retrieve real time bus information


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **string**| The bus stop id | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 
 **routeid** | **string**| The route identifier | [optional] 
 **maxresults** | **string**| The maximum number of results, if not provided system will limit the number of results depending on server configuration | [optional] 

### Return type

[**RealTimeInformationList**](RealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

