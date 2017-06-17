# \BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetBusStops**](BusStopInformationApi.md#GetBusStops) | **Get** /busstopinformation | Endpoint to retrieve bus stop information


# **GetBusStops**
> BusStopList GetBusStops($format, $operator, $stopid, $stopname)

Endpoint to retrieve bus stop information


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 
 **stopid** | **string**| The bus stop id, if not provided all bus stops are returned | [optional] 
 **stopname** | **string**| The stop name, only matching stops are returned | [optional] 

### Return type

[**BusStopList**](BusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

