# Swagger\Client\RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRoutes**](RouteInformationApi.md#getRoutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


# **getRoutes**
> \Swagger\Client\Model\RouteList getRoutes($format, $operator)

Endpoint to retrieve list of routes

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\RouteInformationApi();
$format = "format_example"; // string | If not provided JSON format will be used by default
$operator = "operator_example"; // string | If provided retrieves routes for the given operator

try {
    $result = $api_instance->getRoutes($format, $operator);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RouteInformationApi->getRoutes: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional]
 **operator** | **string**| If provided retrieves routes for the given operator | [optional]

### Return type

[**\Swagger\Client\Model\RouteList**](../Model/RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

