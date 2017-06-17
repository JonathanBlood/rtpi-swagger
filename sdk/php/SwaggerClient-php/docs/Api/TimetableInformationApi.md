# Swagger\Client\TimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTimeTable**](TimetableInformationApi.md#getTimeTable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


# **getTimeTable**
> \Swagger\Client\Model\TimetableList getTimeTable($type, $stopid, $routeid, $format)

Endpoint to retrieve timetable information

### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

$api_instance = new Swagger\Client\Api\TimetableInformationApi();
$type = "type_example"; // string | value: week; Time table information is retrieved for the whole week
$stopid = "stopid_example"; // string | The bus stop id, if not provided all bus stops are returned
$routeid = "routeid_example"; // string | The route identifier
$format = "format_example"; // string | If not provided JSON format will be used by default

try {
    $result = $api_instance->getTimeTable($type, $stopid, $routeid, $format);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling TimetableInformationApi->getTimeTable: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **string**| value: week; Time table information is retrieved for the whole week |
 **stopid** | **string**| The bus stop id, if not provided all bus stops are returned |
 **routeid** | **string**| The route identifier |
 **format** | **string**| If not provided JSON format will be used by default | [optional]

### Return type

[**\Swagger\Client\Model\TimetableList**](../Model/TimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

