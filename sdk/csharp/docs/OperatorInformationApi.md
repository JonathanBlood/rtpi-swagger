# IO.Swagger.Api.OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetOperators**](OperatorInformationApi.md#getoperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


<a name="getoperators"></a>
# **GetOperators**
> OperatorList GetOperators (string format = null)

Endpoint to retrieve information about route operators in the system

### Example
```csharp
using System;
using System.Diagnostics;
using IO.Swagger.Api;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace Example
{
    public class GetOperatorsExample
    {
        public void main()
        {
            
            var apiInstance = new OperatorInformationApi();
            var format = format_example;  // string | If not provided JSON format will be used by default (optional) 

            try
            {
                // Endpoint to retrieve information about route operators in the system
                OperatorList result = apiInstance.GetOperators(format);
                Debug.WriteLine(result);
            }
            catch (Exception e)
            {
                Debug.Print("Exception when calling OperatorInformationApi.GetOperators: " + e.Message );
            }
        }
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 

### Return type

[**OperatorList**](OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

