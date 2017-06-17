# IO.Swagger.Api.BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetBusStops**](BusStopInformationApi.md#getbusstops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


<a name="getbusstops"></a>
# **GetBusStops**
> BusStopList GetBusStops (string format = null, string _operator = null, string stopid = null, string stopname = null)

Endpoint to retrieve bus stop information

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetBusStopsExample
    {
        public void main()
        {
            
            var apiInstance = new BusStopInformationApi();
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 
            var _operator = _operator_example;  // string | If provided retrieves routes for the given operator (optional) 
            var stopid = stopid_example;  // string | The bus stop id, if not provided all bus stops are returned (optional) 
            var stopname = stopname_example;  // string | The stop name, only matching stops are returned (optional) 

            try
            {
                // Endpoint to retrieve bus stop information
                BusStopList result = apiInstance.GetBusStops(format, _operator, stopid, stopname);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling BusStopInformationApi.GetBusStops: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **_operator** | **string**| If provided retrieves routes for the given operator | [optional] 
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

