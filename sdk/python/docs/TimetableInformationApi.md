# swagger_client.TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_time_table**](TimetableInformationApi.md#get_time_table) | **GET** /timetableinformation | Endpoint to retrieve timetable information


# **get_time_table**
> TimetableList get_time_table(type, stopid, routeid, format=format)

Endpoint to retrieve timetable information

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.TimetableInformationApi()
type = 'type_example' # str | value: week; Time table information is retrieved for the whole week
stopid = 'stopid_example' # str | The bus stop id, if not provided all bus stops are returned
routeid = 'routeid_example' # str | The route identifier
format = 'format_example' # str | If not provided JSON format will be used by default (optional)

try: 
    # Endpoint to retrieve timetable information
    api_response = api_instance.get_time_table(type, stopid, routeid, format=format)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling TimetableInformationApi->get_time_table: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **str**| value: week; Time table information is retrieved for the whole week | 
 **stopid** | **str**| The bus stop id, if not provided all bus stops are returned | 
 **routeid** | **str**| The route identifier | 
 **format** | **str**| If not provided JSON format will be used by default | [optional] 

### Return type

[**TimetableList**](TimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

