# Swagger\Client\BusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBusStops**](BusStopInformationApi.md#getBusStops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


# **getBusStops**
> \Swagger\Client\Model\BusStopList getBusStops($format, $operator, $stopid, $stopname)

Endpoint to retrieve bus stop information

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\BusStopInformationApi();
$format = "format_example"; // string | If not provided JSON format will be used by default
$operator = "operator_example"; // string | If provided retrieves routes for the given operator
$stopid = "stopid_example"; // string | The bus stop id, if not provided all bus stops are returned
$stopname = "stopname_example"; // string | The stop name, only matching stops are returned

try {
    $result = $api_instance->getBusStops($format, $operator, $stopid, $stopname);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BusStopInformationApi->getBusStops: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **string**| If not provided JSON format will be used by default | [optional]
 **operator** | **string**| If provided retrieves routes for the given operator | [optional]
 **stopid** | **string**| The bus stop id, if not provided all bus stops are returned | [optional]
 **stopname** | **string**| The stop name, only matching stops are returned | [optional]

### Return type

[**\Swagger\Client\Model\BusStopList**](../Model/BusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

