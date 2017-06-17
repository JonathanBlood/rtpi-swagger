package io.swagger.client.api {

import io.swagger.common.ApiInvoker;
import io.swagger.exception.ApiErrorCodes;
import io.swagger.exception.ApiError;
import io.swagger.common.ApiUserCredentials;
import io.swagger.event.Response;
import io.swagger.common.SwaggerApi;
import io.swagger.client.model.TimetableList;

import mx.rpc.AsyncToken;
import mx.utils.UIDUtil;
import flash.utils.Dictionary;
import flash.events.EventDispatcher;

public class TimetableInformationApi extends SwaggerApi {
    /**
    * Constructor for the TimetableInformationApi api client
    * @param apiCredentials Wrapper object for tokens and hostName required towards authentication
    * @param eventDispatcher Optional event dispatcher that when provided is used by the SDK to dispatch any Response
    */
    public function TimetableInformationApi(apiCredentials: ApiUserCredentials, eventDispatcher: EventDispatcher = null) {
        super(apiCredentials, eventDispatcher);
    }

        public static const event_get_time_table: String = "get_time_table";


    /*
     * Returns TimetableList 
     */
    public function get_time_table (type: String, stopid: String, routeid: String, format: String): String {
        // create path and map variables
        var path: String = "/timetableinformation".replace(/{format}/g,"xml");

        // query params
        var queryParams: Dictionary = new Dictionary();
        var headerParams: Dictionary = new Dictionary();

        // verify required params are set
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

        if("null" != String(format))
            queryParams["format"] = toPathValue(format);
if("null" != String(type))
            queryParams["type"] = toPathValue(type);
if("null" != String(stopid))
            queryParams["stopid"] = toPathValue(stopid);
if("null" != String(routeid))
            queryParams["routeid"] = toPathValue(routeid);

        
        var token:AsyncToken = getApiInvoker().invokeAPI(path, "GET", queryParams, null, headerParams);

        var requestId: String = getUniqueId();

        token.requestId = requestId;
        token.completionEventType = "get_time_table";

        token.returnType = TimetableList;
        return requestId;

    }
}
}
