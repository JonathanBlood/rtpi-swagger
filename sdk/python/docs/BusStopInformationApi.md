# swagger_client.BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_bus_stops**](BusStopInformationApi.md#get_bus_stops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


# **get_bus_stops**
> BusStopList get_bus_stops(format=format, operator=operator, stopid=stopid, stopname=stopname)

Endpoint to retrieve bus stop information

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.BusStopInformationApi()
format = 'format_example' # str | If not provided JSON format will be used by default (optional)
operator = 'operator_example' # str | If provided retrieves routes for the given operator (optional)
stopid = 'stopid_example' # str | The bus stop id, if not provided all bus stops are returned (optional)
stopname = 'stopname_example' # str | The stop name, only matching stops are returned (optional)

try: 
    # Endpoint to retrieve bus stop information
    api_response = api_instance.get_bus_stops(format=format, operator=operator, stopid=stopid, stopname=stopname)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling BusStopInformationApi->get_bus_stops: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **str**| If not provided JSON format will be used by default | [optional] 
 **operator** | **str**| If provided retrieves routes for the given operator | [optional] 
 **stopid** | **str**| The bus stop id, if not provided all bus stops are returned | [optional] 
 **stopname** | **str**| The stop name, only matching stops are returned | [optional] 

### Return type

[**BusStopList**](BusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

