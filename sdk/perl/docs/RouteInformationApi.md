# WWW::SwaggerClient::RouteInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::RouteInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_routes**](RouteInformationApi.md#get_routes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


# **get_routes**
> RouteList get_routes(format => $format, operator => $operator)

Endpoint to retrieve list of routes

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::RouteInformationApi->new();
my $format = 'format_example'; # string | If not provided JSON format will be used by default
my $operator = 'operator_example'; # string | If provided retrieves routes for the given operator

eval { 
    my $result = $api_instance->get_routes(format => $format, operator => $operator);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling RouteInformationApi->get_routes: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 
 **operator** | **string**| If provided retrieves routes for the given operator | [optional] 

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

