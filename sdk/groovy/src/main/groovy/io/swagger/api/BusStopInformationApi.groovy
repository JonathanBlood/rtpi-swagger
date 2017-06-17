package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.BusStopList

import java.util.*;

@Mixin(ApiUtils)
class BusStopInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getBusStops ( String format, String operator, String stopid, String stopname, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/busstopinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))
if (!"null".equals(String.valueOf(operator)))
            queryParams.put("operator", String.valueOf(operator))
if (!"null".equals(String.valueOf(stopid)))
            queryParams.put("stopid", String.valueOf(stopid))
if (!"null".equals(String.valueOf(stopname)))
            queryParams.put("stopname", String.valueOf(stopname))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    BusStopList.class )
                    
    }
}
