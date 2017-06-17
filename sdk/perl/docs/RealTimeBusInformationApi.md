# WWW::SwaggerClient::RealTimeBusInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::RealTimeBusInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_real_time_bus_information**](RealTimeBusInformationApi.md#get_real_time_bus_information) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


# **get_real_time_bus_information**
> RealTimeInformationList get_real_time_bus_information(stopid => $stopid, format => $format, operator => $operator, routeid => $routeid, maxresults => $maxresults)

Endpoint to retrieve real time bus information

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::RealTimeBusInformationApi->new();
my $stopid = 'stopid_example'; # string | The bus stop id
my $format = 'format_example'; # string | If not provided JSON format will be used by default
my $operator = 'operator_example'; # string | If provided retrieves routes for the given operator
my $routeid = 'routeid_example'; # string | The route identifier
my $maxresults = 'maxresults_example'; # string | The maximum number of results, if not provided system will limit the number of results depending on server configuration

eval { 
    my $result = $api_instance->get_real_time_bus_information(stopid => $stopid, format => $format, operator => $operator, routeid => $routeid, maxresults => $maxresults);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RealTimeBusInformationApi->get_real_time_bus_information: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **string**| The bus stop id | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 
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

