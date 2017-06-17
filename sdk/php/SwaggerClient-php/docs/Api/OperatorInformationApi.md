# Swagger\Client\OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOperators**](OperatorInformationApi.md#getOperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


# **getOperators**
> \Swagger\Client\Model\OperatorList getOperators($format)

Endpoint to retrieve information about route operators in the system

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\OperatorInformationApi();
$format = "format_example"; // string | If not provided JSON format will be used by default

try {
    $result = $api_instance->getOperators($format);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling OperatorInformationApi->getOperators: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional]

### Return type

[**\Swagger\Client\Model\OperatorList**](../Model/OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

