# Swagger\Client\RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRealTimeBusInformation**](RealTimeBusInformationApi.md#getRealTimeBusInformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


# **getRealTimeBusInformation**
> \Swagger\Client\Model\RealTimeInformationList getRealTimeBusInformation($stopid, $format, $operator, $routeid, $maxresults)

Endpoint to retrieve real time bus information

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\RealTimeBusInformationApi();
$stopid = "stopid_example"; // string | The bus stop id
$format = "format_example"; // string | If not provided JSON format will be used by default
$operator = "operator_example"; // string | If provided retrieves routes for the given operator
$routeid = "routeid_example"; // string | The route identifier
$maxresults = "maxresults_example"; // string | The maximum number of results, if not provided system will limit the number of results depending on server configuration

try {
    $result = $api_instance->getRealTimeBusInformation($stopid, $format, $operator, $routeid, $maxresults);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling RealTimeBusInformationApi->getRealTimeBusInformation: ', $e->getMessage(), PHP_EOL;
}
?>
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

[**\Swagger\Client\Model\RealTimeInformationList**](../Model/RealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

