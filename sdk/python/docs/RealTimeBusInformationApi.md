# swagger_client.RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_real_time_bus_information**](RealTimeBusInformationApi.md#get_real_time_bus_information) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


# **get_real_time_bus_information**
> RealTimeInformationList get_real_time_bus_information(stopid, format=format, operator=operator, routeid=routeid, maxresults=maxresults)

Endpoint to retrieve real time bus information

### Example 
```python
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# create an instance of the API class
api_instance = swagger_client.RealTimeBusInformationApi()
stopid = 'stopid_example' # str | The bus stop id
format = 'format_example' # str | If not provided JSON format will be used by default (optional)
operator = 'operator_example' # str | If provided retrieves routes for the given operator (optional)
routeid = 'routeid_example' # str | The route identifier (optional)
maxresults = 'maxresults_example' # str | The maximum number of results, if not provided system will limit the number of results depending on server configuration (optional)

try: 
    # Endpoint to retrieve real time bus information
    api_response = api_instance.get_real_time_bus_information(stopid, format=format, operator=operator, routeid=routeid, maxresults=maxresults)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling RealTimeBusInformationApi->get_real_time_bus_information: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **str**| The bus stop id | 
 **format** | **str**| If not provided JSON format will be used by default | [optional] 
 **operator** | **str**| If provided retrieves routes for the given operator | [optional] 
 **routeid** | **str**| The route identifier | [optional] 
 **maxresults** | **str**| The maximum number of results, if not provided system will limit the number of results depending on server configuration | [optional] 

### Return type

[**RealTimeInformationList**](RealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

