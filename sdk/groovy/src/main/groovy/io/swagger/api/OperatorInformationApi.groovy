package io.swagger.api;

import groovyx.net.http.*
import static groovyx.net.http.ContentType.*
import static groovyx.net.http.Method.*
import io.swagger.api.ApiUtils

import io.swagger.model.OperatorList

import java.util.*;

@Mixin(ApiUtils)
class OperatorInformationApi {
    String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/"
    String versionPath = "/api/v1"

    def getOperators ( String format, Closure onSuccess, Closure onFailure)  {
        // create path and map variables
        String resourcePath = "/operatorinformation"

        // query params
        def queryParams = [:]
        def headerParams = [:]
    

        if (!"null".equals(String.valueOf(format)))
            queryParams.put("format", String.valueOf(format))


        invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams,
                    "GET", "",
                    OperatorList.class )
                    
    }
}
