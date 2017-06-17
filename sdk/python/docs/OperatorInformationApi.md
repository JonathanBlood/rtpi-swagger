# swagger_client.OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_operators**](OperatorInformationApi.md#get_operators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


# **get_operators**
> OperatorList get_operators(format=format)

Endpoint to retrieve information about route operators in the system

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.OperatorInformationApi()
format = 'format_example' # str | If not provided JSON format will be used by default (optional)

try: 
    # Endpoint to retrieve information about route operators in the system
    api_response = api_instance.get_operators(format=format)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling OperatorInformationApi->get_operators: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **str**| If not provided JSON format will be used by default | [optional] 

### Return type

[**OperatorList**](OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

