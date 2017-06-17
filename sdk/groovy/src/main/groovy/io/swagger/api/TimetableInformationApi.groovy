package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.TimetableList

import java.util.*;

@Mixin(ApiUtils)
class TimetableInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getTimeTable ( String type, String stopid, String routeid, String format, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/timetableinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    
        // verify required params are set
        if (type == null) {
            throw new RuntimeException("missing required params type")
        }
        // verify required params are set
        if (stopid == null) {
            throw new RuntimeException("missing required params stopid")
        }
        // verify required params are set
        if (routeid == null) {
            throw new RuntimeException("missing required params routeid")
        }

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))
if (!"null".equals(String.valueOf(type)))
            queryParams.put("type", String.valueOf(type))
if (!"null".equals(String.valueOf(stopid)))
            queryParams.put("stopid", String.valueOf(stopid))
if (!"null".equals(String.valueOf(routeid)))
            queryParams.put("routeid", String.valueOf(routeid))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    TimetableList.class )
                    
    }
}
