# IO.Swagger.Api.TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetTimeTable**](TimetableInformationApi.md#gettimetable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


<a name="gettimetable"></a>
# **GetTimeTable**
> TimetableList GetTimeTable (string type, string stopid, string routeid, string format = null)

Endpoint to retrieve timetable information

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetTimeTableExample
    {
        public void main()
        {
            
            var apiInstance = new TimetableInformationApi();
            var type = type_example;  // string | value: week; Time table information is retrieved for the whole week
            var stopid = stopid_example;  // string | The bus stop id, if not provided all bus stops are returned
            var routeid = routeid_example;  // string | The route identifier
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 

            try
            {
                // Endpoint to retrieve timetable information
                TimetableList result = apiInstance.GetTimeTable(type, stopid, routeid, format);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling TimetableInformationApi.GetTimeTable: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **string**| value: week; Time table information is retrieved for the whole week | 
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

