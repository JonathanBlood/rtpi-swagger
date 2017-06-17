# IO.Swagger.Api.RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetRealTimeBusInformation**](RealTimeBusInformationApi.md#getrealtimebusinformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


<a name="getrealtimebusinformation"></a>
# **GetRealTimeBusInformation**
> RealTimeInformationList GetRealTimeBusInformation (string stopid, string format = null, string _operator = null, string routeid = null, string maxresults = null)

Endpoint to retrieve real time bus information

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetRealTimeBusInformationExample
    {
        public void main()
        {
            
            var apiInstance = new RealTimeBusInformationApi();
            var stopid = stopid_example;  // string | The bus stop id
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 
            var _operator = _operator_example;  // string | If provided retrieves routes for the given operator (optional) 
            var routeid = routeid_example;  // string | The route identifier (optional) 
            var maxresults = maxresults_example;  // string | The maximum number of results, if not provided system will limit the number of results depending on server configuration (optional) 

            try
            {
                // Endpoint to retrieve real time bus information
                RealTimeInformationList result = apiInstance.GetRealTimeBusInformation(stopid, format, _operator, routeid, maxresults);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling RealTimeBusInformationApi.GetRealTimeBusInformation: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **string**| The bus stop id | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **_operator** | **string**| If provided retrieves routes for the given operator | [optional] 
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

