package io.swagger.client.api {

import io.swagger.common.ApiInvoker;
import io.swagger.exception.ApiErrorCodes;
import io.swagger.exception.ApiError;
import io.swagger.common.ApiUserCredentials;
import io.swagger.event.Response;
import io.swagger.common.SwaggerApi;
import io.swagger.client.model.RealTimeInformationList;

import mx.rpc.AsyncToken;
import mx.utils.UIDUtil;
import flash.utils.Dictionary;
import flash.events.EventDispatcher;

public class RealTimeBusInformationApi extends SwaggerApi {
    /**
    * Constructor for the RealTimeBusInformationApi api client
    * @param apiCredentials Wrapper object for tokens and hostName required towards authentication
    * @param eventDispatcher Optional event dispatcher that when provided is used by the SDK to dispatch any Response
    */
    public function RealTimeBusInformationApi(apiCredentials: ApiUserCredentials, eventDispatcher: EventDispatcher = null) {
        super(apiCredentials, eventDispatcher);
    }

        public static const event_get_real_time_bus_information: String = "get_real_time_bus_information";


    /*
     * Returns RealTimeInformationList 
     */
    public function get_real_time_bus_information (stopid: String, format: String, operator: String, routeid: String, maxresults: String): String {
        // create path and map variables
        var path: String = "/realtimebusinformation".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        // verify required params are set
        if(        // verify required params are set
        if(        // verify required params are set
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
if("null" != String(stopid))
            queryParams["stopid"] = toPathValue(stopid);
if("null" != String(routeid))
            queryParams["routeid"] = toPathValue(routeid);
if("null" != String(maxresults))
            queryParams["maxresults"] = toPathValue(maxresults);

        
        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "get_real_time_bus_information";

        token.returnType = RealTimeInformationList;
        return requestId;

    }
}
}
