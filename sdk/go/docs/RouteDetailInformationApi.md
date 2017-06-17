# \RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRouteDetail**](RouteDetailInformationApi.md#GetRouteDetail) | **Get** /routeinformation | Endpoint to retrieve route detail information


# **GetRouteDetail**
> RouteDetailList GetRouteDetail($operator, $routeid, $format)

Endpoint to retrieve route detail information


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **string**| The requested operator id | 
 **routeid** | **string**| The requested route id | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 

### Return type

[**RouteDetailList**](RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

