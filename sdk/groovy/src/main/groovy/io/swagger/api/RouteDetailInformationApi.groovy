package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.RouteDetailList

import java.util.*;

@Mixin(ApiUtils)
class RouteDetailInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getRouteDetail ( String operator, String routeid, String format, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/routeinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    
        // verify required params are set
        if (operator == null) {
            throw new RuntimeException("missing required params operator")
        }
        // verify required params are set
        if (routeid == null) {
            throw new RuntimeException("missing required params routeid")
        }

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))
if (!"null".equals(String.valueOf(operator)))
            queryParams.put("operator", String.valueOf(operator))
if (!"null".equals(String.valueOf(routeid)))
            queryParams.put("routeid", String.valueOf(routeid))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    RouteDetailList.class )
                    
    }
}
