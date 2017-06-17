package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.RealTimeInformationList

import java.util.*;

@Mixin(ApiUtils)
class RealTimeBusInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getRealTimeBusInformation ( String stopid, String format, String operator, String routeid, String maxresults, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/realtimebusinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    
        // verify required params are set
        if (stopid == null) {
            throw new RuntimeException("missing required params stopid")
        }

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))
if (!"null".equals(String.valueOf(operator)))
            queryParams.put("operator", String.valueOf(operator))
if (!"null".equals(String.valueOf(stopid)))
            queryParams.put("stopid", String.valueOf(stopid))
if (!"null".equals(String.valueOf(routeid)))
            queryParams.put("routeid", String.valueOf(routeid))
if (!"null".equals(String.valueOf(maxresults)))
            queryParams.put("maxresults", String.valueOf(maxresults))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    RealTimeInformationList.class )
                    
    }
}
