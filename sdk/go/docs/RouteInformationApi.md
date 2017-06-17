# \RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRoutes**](RouteInformationApi.md#GetRoutes) | **Get** /routelistinformation | Endpoint to retrieve list of routes


# **GetRoutes**
> RouteList GetRoutes($format, $operator)

Endpoint to retrieve list of routes


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

