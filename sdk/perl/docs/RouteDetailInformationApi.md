# WWW::SwaggerClient::RouteDetailInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::RouteDetailInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_route_detail**](RouteDetailInformationApi.md#get_route_detail) | **GET** /routeinformation | Endpoint to retrieve route detail information


# **get_route_detail**
> RouteDetailList get_route_detail(operator => $operator, routeid => $routeid, format => $format)

Endpoint to retrieve route detail information

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::RouteDetailInformationApi->new();
my $operator = 'operator_example'; # string | The requested operator id
my $routeid = 'routeid_example'; # string | The requested route id
my $format = 'format_example'; # string | If not provided JSON format will be used by default

eval { 
    my $result = $api_instance->get_route_detail(operator => $operator, routeid => $routeid, format => $format);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RouteDetailInformationApi->get_route_detail: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **string**| The requested operator id | 
 **routeid** | **string**| The requested route id | 
 **format** | **string**| If not provided JSON format will be used by default | [optional] 

### Return type

[**RouteDetailList**](RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

