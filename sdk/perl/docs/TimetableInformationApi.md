# WWW::SwaggerClient::TimetableInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::TimetableInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_time_table**](TimetableInformationApi.md#get_time_table) | **GET** /timetableinformation | Endpoint to retrieve timetable information


# **get_time_table**
> TimetableList get_time_table(type => $type, stopid => $stopid, routeid => $routeid, format => $format)

Endpoint to retrieve timetable information

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::TimetableInformationApi->new();
my $type = 'type_example'; # string | value: week; Time table information is retrieved for the whole week
my $stopid = 'stopid_example'; # string | The bus stop id, if not provided all bus stops are returned
my $routeid = 'routeid_example'; # string | The route identifier
my $format = 'format_example'; # string | If not provided JSON format will be used by default

eval { 
    my $result = $api_instance->get_time_table(type => $type, stopid => $stopid, routeid => $routeid, format => $format);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling TimetableInformationApi->get_time_table: $@\n";
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

