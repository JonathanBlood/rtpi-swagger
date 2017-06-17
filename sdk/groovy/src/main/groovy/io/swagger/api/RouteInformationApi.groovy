package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.RouteList

import java.util.*;

@Mixin(ApiUtils)
class RouteInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getRoutes ( String format, String operator, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/routelistinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))
if (!"null".equals(String.valueOf(operator)))
            queryParams.put("operator", String.valueOf(operator))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    RouteList.class )
                    
    }
}
