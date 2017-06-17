# swagger-android-client

## Requirements

Building the API client library requires [Maven](https://maven.apache.org/) to be installed.

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn deploy
```

Refer to the [official documentation](https://maven.apache.org/plugins/maven-deploy-plugin/usage.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
    <groupId>io.swagger</groupId>
    <artifactId>swagger-android-client</artifactId>
    <version>1.0.0</version>
    <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
compile "io.swagger:swagger-android-client:1.0.0"
```

### Others

At first generate the JAR by executing:

    mvn package

Then manually install the following JARs:

* target/swagger-android-client-1.0.0.jar
* target/lib/*.jar

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

```java

import io.swagger.client.api.BusStopInformationApi;

public class BusStopInformationApiExample {

    public static void main(String[] args) {
        BusStopInformationApi apiInstance = new BusStopInformationApi();
        String format = "format_example"; // String | If not provided JSON format will be used by default
        String operator = "operator_example"; // String | If provided retrieves routes for the given operator
        String stopid = "stopid_example"; // String | The bus stop id, if not provided all bus stops are returned
        String stopname = "stopname_example"; // String | The stop name, only matching stops are returned
        try {
            BusStopList result = apiInstance.getBusStops(format, operator, stopid, stopname);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling BusStopInformationApi#getBusStops");
            e.printStackTrace();
        }
    }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*BusStopInformationApi* | [**getBusStops**](docs/BusStopInformationApi.md#getBusStops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information
*OperatorInformationApi* | [**getOperators**](docs/OperatorInformationApi.md#getOperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system
*RealTimeBusInformationApi* | [**getRealTimeBusInformation**](docs/RealTimeBusInformationApi.md#getRealTimeBusInformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information
*RouteDetailInformationApi* | [**getRouteDetail**](docs/RouteDetailInformationApi.md#getRouteDetail) | **GET** /routeinformation | Endpoint to retrieve route detail information
*RouteInformationApi* | [**getRoutes**](docs/RouteInformationApi.md#getRoutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes
*TimetableInformationApi* | [**getTimeTable**](docs/TimetableInformationApi.md#getTimeTable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


## Documentation for Models

 - [BusStopList](docs/BusStopList.md)
 - [Operator](docs/Operator.md)
 - [OperatorList](docs/OperatorList.md)
 - [RealTimeInformation](docs/RealTimeInformation.md)
 - [RealTimeInformationList](docs/RealTimeInformationList.md)
 - [Route](docs/Route.md)
 - [RouteDetail](docs/RouteDetail.md)
 - [RouteDetailList](docs/RouteDetailList.md)
 - [RouteList](docs/RouteList.md)
 - [RouteOperator](docs/RouteOperator.md)
 - [Stop](docs/Stop.md)
 - [Timetable](docs/Timetable.md)
 - [TimetableList](docs/TimetableList.md)


## Documentation for Authorization

All endpoints do not require authorization.
Authentication schemes defined for the API:

## Recommendation

It's recommended to create an instance of `ApiClient` per thread in a multithreaded environment to avoid any potential issue.

## Author



