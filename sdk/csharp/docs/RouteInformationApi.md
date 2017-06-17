# IO.Swagger.Api.RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRoutes**](RouteInformationApi.md#getroutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


<a name="getroutes"></a>
# **GetRoutes**
> RouteList GetRoutes (string format = null, string _operator = null)

Endpoint to retrieve list of routes

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetRoutesExample
    {
        public void main()
        {
            
            var apiInstance = new RouteInformationApi();
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 
            var _operator = _operator_example;  // string | If provided retrieves routes for the given operator (optional) 

            try
            {
                // Endpoint to retrieve list of routes
                RouteList result = apiInstance.GetRoutes(format, _operator);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling RouteInformationApi.GetRoutes: " + e.Message );
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

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

