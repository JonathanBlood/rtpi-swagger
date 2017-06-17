# swagger_client.RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_routes**](RouteInformationApi.md#get_routes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


# **get_routes**
> RouteList get_routes(format=format, operator=operator)

Endpoint to retrieve list of routes

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.RouteInformationApi()
format = 'format_example' # str | If not provided JSON format will be used by default (optional)
operator = 'operator_example' # str | If provided retrieves routes for the given operator (optional)

try: 
    # Endpoint to retrieve list of routes
    api_response = api_instance.get_routes(format=format, operator=operator)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling RouteInformationApi->get_routes: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **str**| If not provided JSON format will be used by default | [optional] 
 **operator** | **str**| If provided retrieves routes for the given operator | [optional] 

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

