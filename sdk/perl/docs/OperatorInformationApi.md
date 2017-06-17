# WWW::SwaggerClient::OperatorInformationApi

## Load the API package
```perl
use WWW::SwaggerClient::Object::OperatorInformationApi;
```

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_operators**](OperatorInformationApi.md#get_operators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


# **get_operators**
> OperatorList get_operators(format => $format)

Endpoint to retrieve information about route operators in the system

### Example 
```perl
use Data::Dumper;

my $api_instance = WWW::SwaggerClient::OperatorInformationApi->new();
my $format = 'format_example'; # string | If not provided JSON format will be used by default

eval { 
    my $result = $api_instance->get_operators(format => $format);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling OperatorInformationApi->get_operators: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional] 

### Return type

[**OperatorList**](OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

