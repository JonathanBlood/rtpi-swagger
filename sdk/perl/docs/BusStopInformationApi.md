# WWW::SwaggerClient::BusStopInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::BusStopInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_bus_stops**](BusStopInformationApi.md#get_bus_stops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


# **get_bus_stops**
> BusStopList get_bus_stops(format => $format, operator => $operator, stopid => $stopid, stopname => $stopname)

Endpoint to retrieve bus stop information

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::BusStopInformationApi->new();
my $format = 'format_example'; # string | If not provided JSON format will be used by default
my $operator = 'operator_example'; # string | If provided retrieves routes for the given operator
my $stopid = 'stopid_example'; # string | The bus stop id, if not provided all bus stops are returned
my $stopname = 'stopname_example'; # string | The stop name, only matching stops are returned

eval { 
    my $result = $api_instance->get_bus_stops(format => $format, operator => $operator, stopid => $stopid, stopname => $stopname);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling BusStopInformationApi->get_bus_stops: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 
 **stopid** | **string**| The bus stop id, if not provided all bus stops are returned | [optional] 
 **stopname** | **string**| The stop name, only matching stops are returned | [optional] 

### Return type

[**BusStopList**](BusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

