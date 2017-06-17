# Swagger\Client\RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRouteDetail**](RouteDetailInformationApi.md#getRouteDetail) | **GET** /routeinformation | Endpoint to retrieve route detail information


# **getRouteDetail**
> \Swagger\Client\Model\RouteDetailList getRouteDetail($operator, $routeid, $format)

Endpoint to retrieve route detail information

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\RouteDetailInformationApi();
$operator = "operator_example"; // string | The requested operator id
$routeid = "routeid_example"; // string | The requested route id
$format = "format_example"; // string | If not provided JSON format will be used by default

try {
    $result = $api_instance->getRouteDetail($operator, $routeid, $format);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RouteDetailInformationApi->getRouteDetail: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **string**| The requested operator id |
 **routeid** | **string**| The requested route id |
 **format** | **string**| If not provided JSON format will be used by default | [optional]

### Return type

[**\Swagger\Client\Model\RouteDetailList**](../Model/RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

