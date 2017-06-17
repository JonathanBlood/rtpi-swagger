package io.swagger.client.api {

import io.swagger.common.ApiInvoker;
import io.swagger.exception.ApiErrorCodes;
import io.swagger.exception.ApiError;
import io.swagger.common.ApiUserCredentials;
import io.swagger.event.Response;
import io.swagger.common.SwaggerApi;
import io.swagger.client.model.RouteDetailList;

import mx.rpc.AsyncToken;
import mx.utils.UIDUtil;
import flash.utils.Dictionary;
import flash.events.EventDispatcher;

public class RouteDetailInformationApi extends SwaggerApi {
    /**
    * Constructor for the RouteDetailInformationApi api client
    * @param apiCredentials Wrapper object for tokens and hostName required towards authentication
    * @param eventDispatcher Optional event dispatcher that when provided is used by the SDK to dispatch any Response
    */
    public function RouteDetailInformationApi(apiCredentials: ApiUserCredentials, eventDispatcher: EventDispatcher = null) {
        super(apiCredentials, eventDispatcher);
    }

        public static const event_get_route_detail: String = "get_route_detail";


    /*
     * Returns RouteDetailList 
     */
    public function get_route_detail (operator: String, routeid: String, format: String): String {
        // create path and map variables
        var path: String = "/routeinformation".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        // verify required params are set
        if(        // verify required params are set
        if(        // verify required params are set
        if() {
            throw new ApiError(400, "missing required params");
        }
) {
            throw new ApiError(400, "missing required params");
        }
) {
            throw new ApiError(400, "missing required params");
        }

        if("null" != String(format))
            queryParams["format"] = toPathValue(format);
if("null" != String(operator))
            queryParams["operator"] = toPathValue(operator);
if("null" != String(routeid))
            queryParams["routeid"] = toPathValue(routeid);

        
        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "get_route_detail";

        token.returnType = RouteDetailList;
        return requestId;

    }
}
}
