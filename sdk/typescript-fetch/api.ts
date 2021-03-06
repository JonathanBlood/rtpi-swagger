/**
 * RTPI REST Web Services API
 * <p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import * as querystring from "querystring";
import * as url from "url";

import * as isomorphicFetch from "isomorphic-fetch";
import * as assign from "core-js/library/fn/object/assign";

interface Dictionary<T> { [index: string]: T; }
export interface FetchAPI { (url: string, init?: any): Promise<any>; }

const BASE_PATH = "https://data.dublinked.ie/cgi-bin/rtpi/";

export interface FetchArgs {
    url: string;
    options: any; 
}

export class BaseAPI {
    basePath: string;
    fetch: FetchAPI;

    constructor(fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) {
        this.basePath = basePath;
        this.fetch = fetch;
    }
}

export interface BusStopList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "timestamp"?: string;
    "results"?: Array<Stop>;
}

export interface Operator {
    "operatorreference"?: string;
    "operatorname"?: string;
    "operatordescription"?: string;
}

export interface OperatorList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "timestamp"?: string;
    "results"?: Array<Operator>;
}

export interface RealTimeInformation {
    "arrivaldatetime"?: string;
    "duetime"?: string;
    "departuredatetime"?: string;
    "departureduetime"?: string;
    "scheduledarrivaldatetime"?: string;
    "scheduleddeparturedatetime"?: string;
    "destination"?: string;
    "destinationlocalized"?: string;
    "origin"?: string;
    "originlocalized"?: string;
    "direction"?: string;
    "operator"?: string;
    "additionalinformation"?: string;
    "lowfloorstatus"?: string;
    "route"?: string;
    "sourcetimestamp"?: string;
    "monitored"?: string;
}

export interface RealTimeInformationList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "stopid"?: string;
    "timestamp"?: string;
    "results"?: Array<RealTimeInformation>;
}

export interface Route {
    "operator"?: string;
    "route"?: string;
}

export interface RouteDetail {
    "operator"?: string;
    "origin"?: string;
    "originlocalized"?: string;
    "destination"?: string;
    "destinationlocalized"?: string;
    "lastupdated"?: string;
    "stops"?: Array<Stop>;
}

export interface RouteDetailList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "route"?: string;
    "timestamp"?: string;
    "results"?: Array<RouteDetail>;
}

export interface RouteList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "timestamp"?: string;
    "results"?: Array<Route>;
}

export interface RouteOperator {
    "name"?: string;
    "routes"?: Array<string>;
}

export interface Stop {
    "stopid"?: string;
    "displaystopid"?: string;
    "shortname"?: string;
    "shortnamelocalized"?: string;
    "fullname"?: string;
    "fullnamelocalized"?: string;
    "latitude"?: string;
    "longitude"?: string;
    "operators"?: Array<RouteOperator>;
}

export interface Timetable {
    "startdayofweek"?: string;
    "enddayofweek"?: string;
    "destination"?: string;
    "destinationlocalized"?: string;
    "lastupdated"?: string;
    "departures"?: Array<string>;
}

export interface TimetableList {
    "errorcode"?: string;
    "errormessage"?: string;
    "numberofresults"?: number;
    "route"?: string;
    "stopid"?: string;
    "timestamp"?: string;
    "results"?: Array<Timetable>;
}



/**
 * BusStopInformationApi - fetch parameter creator
 */
export const BusStopInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve bus stop information
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param stopname The stop name, only matching stops are returned
     */
    getBusStops(params: {  format?: string; operator?: string; stopid?: string; stopname?: string; }): FetchArgs {
        const baseUrl = `/busstopinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
            "operator": params.operator,
            "stopid": params.stopid,
            "stopname": params.stopname,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * BusStopInformationApi - functional programming interface
 */
export const BusStopInformationApiFp = {
    /** 
     * Endpoint to retrieve bus stop information
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param stopname The stop name, only matching stops are returned
     */
    getBusStops(params: { format?: string; operator?: string; stopid?: string; stopname?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<BusStopList> {
        const fetchArgs = BusStopInformationApiFetchParamCreactor.getBusStops(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * BusStopInformationApi - object-oriented interface
 */
export class BusStopInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve bus stop information
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param stopname The stop name, only matching stops are returned
     */
    getBusStops(params: {  format?: string; operator?: string; stopid?: string; stopname?: string; }) {
        return BusStopInformationApiFp.getBusStops(params)(this.fetch, this.basePath);
    }
};

/**
 * BusStopInformationApi - factory interface
 */
export const BusStopInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve bus stop information
         * @param format If not provided JSON format will be used by default
         * @param operator If provided retrieves routes for the given operator
         * @param stopid The bus stop id, if not provided all bus stops are returned
         * @param stopname The stop name, only matching stops are returned
         */
        getBusStops(params: {  format?: string; operator?: string; stopid?: string; stopname?: string; }) {
            return BusStopInformationApiFp.getBusStops(params)(fetch, basePath);
        },
    }
};


/**
 * OperatorInformationApi - fetch parameter creator
 */
export const OperatorInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve information about route operators in the system
     * @param format If not provided JSON format will be used by default
     */
    getOperators(params: {  format?: string; }): FetchArgs {
        const baseUrl = `/operatorinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * OperatorInformationApi - functional programming interface
 */
export const OperatorInformationApiFp = {
    /** 
     * Endpoint to retrieve information about route operators in the system
     * @param format If not provided JSON format will be used by default
     */
    getOperators(params: { format?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<OperatorList> {
        const fetchArgs = OperatorInformationApiFetchParamCreactor.getOperators(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * OperatorInformationApi - object-oriented interface
 */
export class OperatorInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve information about route operators in the system
     * @param format If not provided JSON format will be used by default
     */
    getOperators(params: {  format?: string; }) {
        return OperatorInformationApiFp.getOperators(params)(this.fetch, this.basePath);
    }
};

/**
 * OperatorInformationApi - factory interface
 */
export const OperatorInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve information about route operators in the system
         * @param format If not provided JSON format will be used by default
         */
        getOperators(params: {  format?: string; }) {
            return OperatorInformationApiFp.getOperators(params)(fetch, basePath);
        },
    }
};


/**
 * RealTimeBusInformationApi - fetch parameter creator
 */
export const RealTimeBusInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve real time bus information
     * @param stopid The bus stop id
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param routeid The route identifier
     * @param maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
     */
    getRealTimeBusInformation(params: {  stopid: string; format?: string; operator?: string; routeid?: string; maxresults?: string; }): FetchArgs {
        // verify required parameter "stopid" is set
        if (params["stopid"] == null) {
            throw new Error("Missing required parameter stopid when calling getRealTimeBusInformation");
        }
        const baseUrl = `/realtimebusinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
            "operator": params.operator,
            "stopid": params.stopid,
            "routeid": params.routeid,
            "maxresults": params.maxresults,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * RealTimeBusInformationApi - functional programming interface
 */
export const RealTimeBusInformationApiFp = {
    /** 
     * Endpoint to retrieve real time bus information
     * @param stopid The bus stop id
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param routeid The route identifier
     * @param maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
     */
    getRealTimeBusInformation(params: { stopid: string; format?: string; operator?: string; routeid?: string; maxresults?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<RealTimeInformationList> {
        const fetchArgs = RealTimeBusInformationApiFetchParamCreactor.getRealTimeBusInformation(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * RealTimeBusInformationApi - object-oriented interface
 */
export class RealTimeBusInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve real time bus information
     * @param stopid The bus stop id
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     * @param routeid The route identifier
     * @param maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
     */
    getRealTimeBusInformation(params: {  stopid: string; format?: string; operator?: string; routeid?: string; maxresults?: string; }) {
        return RealTimeBusInformationApiFp.getRealTimeBusInformation(params)(this.fetch, this.basePath);
    }
};

/**
 * RealTimeBusInformationApi - factory interface
 */
export const RealTimeBusInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve real time bus information
         * @param stopid The bus stop id
         * @param format If not provided JSON format will be used by default
         * @param operator If provided retrieves routes for the given operator
         * @param routeid The route identifier
         * @param maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
         */
        getRealTimeBusInformation(params: {  stopid: string; format?: string; operator?: string; routeid?: string; maxresults?: string; }) {
            return RealTimeBusInformationApiFp.getRealTimeBusInformation(params)(fetch, basePath);
        },
    }
};


/**
 * RouteDetailInformationApi - fetch parameter creator
 */
export const RouteDetailInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve route detail information
     * @param operator The requested operator id
     * @param routeid The requested route id
     * @param format If not provided JSON format will be used by default
     */
    getRouteDetail(params: {  operator: string; routeid: string; format?: string; }): FetchArgs {
        // verify required parameter "operator" is set
        if (params["operator"] == null) {
            throw new Error("Missing required parameter operator when calling getRouteDetail");
        }
        // verify required parameter "routeid" is set
        if (params["routeid"] == null) {
            throw new Error("Missing required parameter routeid when calling getRouteDetail");
        }
        const baseUrl = `/routeinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
            "operator": params.operator,
            "routeid": params.routeid,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * RouteDetailInformationApi - functional programming interface
 */
export const RouteDetailInformationApiFp = {
    /** 
     * Endpoint to retrieve route detail information
     * @param operator The requested operator id
     * @param routeid The requested route id
     * @param format If not provided JSON format will be used by default
     */
    getRouteDetail(params: { operator: string; routeid: string; format?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<RouteDetailList> {
        const fetchArgs = RouteDetailInformationApiFetchParamCreactor.getRouteDetail(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * RouteDetailInformationApi - object-oriented interface
 */
export class RouteDetailInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve route detail information
     * @param operator The requested operator id
     * @param routeid The requested route id
     * @param format If not provided JSON format will be used by default
     */
    getRouteDetail(params: {  operator: string; routeid: string; format?: string; }) {
        return RouteDetailInformationApiFp.getRouteDetail(params)(this.fetch, this.basePath);
    }
};

/**
 * RouteDetailInformationApi - factory interface
 */
export const RouteDetailInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve route detail information
         * @param operator The requested operator id
         * @param routeid The requested route id
         * @param format If not provided JSON format will be used by default
         */
        getRouteDetail(params: {  operator: string; routeid: string; format?: string; }) {
            return RouteDetailInformationApiFp.getRouteDetail(params)(fetch, basePath);
        },
    }
};


/**
 * RouteInformationApi - fetch parameter creator
 */
export const RouteInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve list of routes
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     */
    getRoutes(params: {  format?: string; operator?: string; }): FetchArgs {
        const baseUrl = `/routelistinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
            "operator": params.operator,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * RouteInformationApi - functional programming interface
 */
export const RouteInformationApiFp = {
    /** 
     * Endpoint to retrieve list of routes
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     */
    getRoutes(params: { format?: string; operator?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<RouteList> {
        const fetchArgs = RouteInformationApiFetchParamCreactor.getRoutes(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * RouteInformationApi - object-oriented interface
 */
export class RouteInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve list of routes
     * @param format If not provided JSON format will be used by default
     * @param operator If provided retrieves routes for the given operator
     */
    getRoutes(params: {  format?: string; operator?: string; }) {
        return RouteInformationApiFp.getRoutes(params)(this.fetch, this.basePath);
    }
};

/**
 * RouteInformationApi - factory interface
 */
export const RouteInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve list of routes
         * @param format If not provided JSON format will be used by default
         * @param operator If provided retrieves routes for the given operator
         */
        getRoutes(params: {  format?: string; operator?: string; }) {
            return RouteInformationApiFp.getRoutes(params)(fetch, basePath);
        },
    }
};


/**
 * TimetableInformationApi - fetch parameter creator
 */
export const TimetableInformationApiFetchParamCreactor = {
    /** 
     * Endpoint to retrieve timetable information
     * @param type value: week; Time table information is retrieved for the whole week
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param routeid The route identifier
     * @param format If not provided JSON format will be used by default
     */
    getTimeTable(params: {  type: string; stopid: string; routeid: string; format?: string; }): FetchArgs {
        // verify required parameter "type" is set
        if (params["type"] == null) {
            throw new Error("Missing required parameter type when calling getTimeTable");
        }
        // verify required parameter "stopid" is set
        if (params["stopid"] == null) {
            throw new Error("Missing required parameter stopid when calling getTimeTable");
        }
        // verify required parameter "routeid" is set
        if (params["routeid"] == null) {
            throw new Error("Missing required parameter routeid when calling getTimeTable");
        }
        const baseUrl = `/timetableinformation`;
        let urlObj = url.parse(baseUrl, true);
        urlObj.query = assign({}, urlObj.query, { 
            "format": params.format,
            "type": params.type,
            "stopid": params.stopid,
            "routeid": params.routeid,
        });
        let fetchOptions: RequestInit = { method: "GET" };

        let contentTypeHeader: Dictionary<string>;
        if (contentTypeHeader) {
            fetchOptions.headers = contentTypeHeader;
        }
        return {
            url: url.format(urlObj),
            options: fetchOptions,
        };
    },
}

/**
 * TimetableInformationApi - functional programming interface
 */
export const TimetableInformationApiFp = {
    /** 
     * Endpoint to retrieve timetable information
     * @param type value: week; Time table information is retrieved for the whole week
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param routeid The route identifier
     * @param format If not provided JSON format will be used by default
     */
    getTimeTable(params: { type: string; stopid: string; routeid: string; format?: string;  }): (fetch: FetchAPI, basePath?: string) => Promise<TimetableList> {
        const fetchArgs = TimetableInformationApiFetchParamCreactor.getTimeTable(params);
        return (fetch: FetchAPI = isomorphicFetch, basePath: string = BASE_PATH) => {
            return fetch(basePath + fetchArgs.url, fetchArgs.options).then((response) => {
                if (response.status >= 200 && response.status < 300) {
                    return response.json();
                } else {
                    throw response;
                }
            });
        };
    },
};

/**
 * TimetableInformationApi - object-oriented interface
 */
export class TimetableInformationApi extends BaseAPI {
    /** 
     * Endpoint to retrieve timetable information
     * @param type value: week; Time table information is retrieved for the whole week
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param routeid The route identifier
     * @param format If not provided JSON format will be used by default
     */
    getTimeTable(params: {  type: string; stopid: string; routeid: string; format?: string; }) {
        return TimetableInformationApiFp.getTimeTable(params)(this.fetch, this.basePath);
    }
};

/**
 * TimetableInformationApi - factory interface
 */
export const TimetableInformationApiFactory = function (fetch?: FetchAPI, basePath?: string) {
    return {
        /** 
         * Endpoint to retrieve timetable information
         * @param type value: week; Time table information is retrieved for the whole week
         * @param stopid The bus stop id, if not provided all bus stops are returned
         * @param routeid The route identifier
         * @param format If not provided JSON format will be used by default
         */
        getTimeTable(params: {  type: string; stopid: string; routeid: string; format?: string; }) {
            return TimetableInformationApiFp.getTimeTable(params)(fetch, basePath);
        },
    }
};

