# IO.Swagger.Api.RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRouteDetail**](RouteDetailInformationApi.md#getroutedetail) | **GET** /routeinformation | Endpoint to retrieve route detail information


<a name="getroutedetail"></a>
# **GetRouteDetail**
> RouteDetailList GetRouteDetail (string _operator, string routeid, string format = null)

Endpoint to retrieve route detail information

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetRouteDetailExample
    {
        public void main()
        {
            
            var apiInstance = new RouteDetailInformationApi();
            var _operator = _operator_example;  // string | The requested operator id
            var routeid = routeid_example;  // string | The requested route id
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 

            try
            {
                // Endpoint to retrieve route detail information
                RouteDetailList result = apiInstance.GetRouteDetail(_operator, routeid, format);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling RouteDetailInformationApi.GetRouteDetail: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_operator** | **string**| The requested operator id | 
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

