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

import {Http, Headers, RequestOptionsArgs, Response, URLSearchParams} from '@angular/http';
import {Injectable, Optional} from '@angular/core';
import {Observable} from 'rxjs/Observable';
import * as models from '../model/models';
import 'rxjs/Rx';

/* tslint:disable:no-unused-variable member-ordering */

'use strict';

@Injectable()
export class TimetableInformationApi {
    protected basePath = 'https://data.dublinked.ie/cgi-bin/rtpi/';
    public defaultHeaders : Headers = new Headers();

    constructor(protected http: Http, @Optional() basePath: string) {
        if (basePath) {
            this.basePath = basePath;
        }
    }

    /**
     * Endpoint to retrieve timetable information
     * 
     * @param type value: week; Time table information is retrieved for the whole week
     * @param stopid The bus stop id, if not provided all bus stops are returned
     * @param routeid The route identifier
     * @param format If not provided JSON format will be used by default
     */
    public getTimeTable (type: string, stopid: string, routeid: string, format?: string, extraHttpRequestParams?: any ) : Observable<models.TimetableList> {
        const path = this.basePath + '/timetableinformation';

        let queryParameters = new URLSearchParams();
        let headerParams = this.defaultHeaders;
        // verify required parameter 'type' is not null or undefined
        if (type === null || type === undefined) {
            throw new Error('Required parameter type was null or undefined when calling getTimeTable.');
        }
        // verify required parameter 'stopid' is not null or undefined
        if (stopid === null || stopid === undefined) {
            throw new Error('Required parameter stopid was null or undefined when calling getTimeTable.');
        }
        // verify required parameter 'routeid' is not null or undefined
        if (routeid === null || routeid === undefined) {
            throw new Error('Required parameter routeid was null or undefined when calling getTimeTable.');
        }
        if (format !== undefined) {
            queryParameters.set('format', String(format));
        }

        if (type !== undefined) {
            queryParameters.set('type', String(type));
        }

        if (stopid !== undefined) {
            queryParameters.set('stopid', String(stopid));
        }

        if (routeid !== undefined) {
            queryParameters.set('routeid', String(routeid));
        }

        let requestOptions: RequestOptionsArgs = {
            method: 'GET',
            headers: headerParams,
            search: queryParameters
        };

        return this.http.request(path, requestOptions)
            .map((response: Response) => {
                if (response.status === 204) {
                    return undefined;
                } else {
                    return response.json();
                }
            });
    }

}
