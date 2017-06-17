# swagger_client.RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_route_detail**](RouteDetailInformationApi.md#get_route_detail) | **GET** /routeinformation | Endpoint to retrieve route detail information


# **get_route_detail**
> RouteDetailList get_route_detail(operator, routeid, format=format)

Endpoint to retrieve route detail information

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.RouteDetailInformationApi()
operator = 'operator_example' # str | The requested operator id
routeid = 'routeid_example' # str | The requested route id
format = 'format_example' # str | If not provided JSON format will be used by default (optional)

try: 
    # Endpoint to retrieve route detail information
    api_response = api_instance.get_route_detail(operator, routeid, format=format)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling RouteDetailInformationApi->get_route_detail: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **str**| The requested operator id | 
 **routeid** | **str**| The requested route id | 
 **format** | **str**| If not provided JSON format will be used by default | [optional] 

### Return type

[**RouteDetailList**](RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

