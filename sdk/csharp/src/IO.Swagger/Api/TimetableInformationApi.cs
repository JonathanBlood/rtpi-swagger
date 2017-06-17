/* 
 * RTPI REST Web Services API
 *
 * <p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface ITimetableInformationApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Endpoint to retrieve timetable information
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>TimetableList</returns>
        TimetableList GetTimeTable (string type, string stopid, string routeid, string format = null);

        /// <summary>
        /// Endpoint to retrieve timetable information
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>ApiResponse of TimetableList</returns>
        ApiResponse<TimetableList> GetTimeTableWithHttpInfo (string type, string stopid, string routeid, string format = null);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Endpoint to retrieve timetable information
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>Task of TimetableList</returns>
        System.Threading.Tasks.Task<TimetableList> GetTimeTableAsync (string type, string stopid, string routeid, string format = null);

        /// <summary>
        /// Endpoint to retrieve timetable information
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>Task of ApiResponse (TimetableList)</returns>
        System.Threading.Tasks.Task<ApiResponse<TimetableList>> GetTimeTableAsyncWithHttpInfo (string type, string stopid, string routeid, string format = null);
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class TimetableInformationApi : ITimetableInformationApi
    {
        private IO.Swagger.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="TimetableInformationApi"/> class.
        /// </summary>
        /// <returns></returns>
        public TimetableInformationApi(String basePath)
        {
            this.Configuration = new Configuration(new ApiClient(basePath));

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="TimetableInformationApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public TimetableInformationApi(Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = Configuration.Default;
            else
                this.Configuration = configuration;

            ExceptionFactory = IO.Swagger.Client.Configuration.DefaultExceptionFactory;

            // ensure API client has configuration ready
            if (Configuration.ApiClient.Configuration == null)
            {
                this.Configuration.ApiClient.Configuration = this.Configuration;
            }
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuration.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Configuration Configuration {get; set;}

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public IO.Swagger.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public Dictionary<String, String> DefaultHeader()
        {
            return this.Configuration.DefaultHeader;
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }

        /// <summary>
        /// Endpoint to retrieve timetable information 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>TimetableList</returns>
        public TimetableList GetTimeTable (string type, string stopid, string routeid, string format = null)
        {
             ApiResponse<TimetableList> localVarResponse = GetTimeTableWithHttpInfo(type, stopid, routeid, format);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Endpoint to retrieve timetable information 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>ApiResponse of TimetableList</returns>
        public ApiResponse< TimetableList > GetTimeTableWithHttpInfo (string type, string stopid, string routeid, string format = null)
        {
            // verify the required parameter 'type' is set
            if (type == null)
                throw new ApiException(400, "Missing required parameter 'type' when calling TimetableInformationApi->GetTimeTable");
            // verify the required parameter 'stopid' is set
            if (stopid == null)
                throw new ApiException(400, "Missing required parameter 'stopid' when calling TimetableInformationApi->GetTimeTable");
            // verify the required parameter 'routeid' is set
            if (routeid == null)
                throw new ApiException(400, "Missing required parameter 'routeid' when calling TimetableInformationApi->GetTimeTable");

            var localVarPath = "/timetableinformation";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json", 
                "application/xml"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json", 
                "application/xml"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (format != null) localVarQueryParams.Add("format", Configuration.ApiClient.ParameterToString(format)); // query parameter
            if (type != null) localVarQueryParams.Add("type", Configuration.ApiClient.ParameterToString(type)); // query parameter
            if (stopid != null) localVarQueryParams.Add("stopid", Configuration.ApiClient.ParameterToString(stopid)); // query parameter
            if (routeid != null) localVarQueryParams.Add("routeid", Configuration.ApiClient.ParameterToString(routeid)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetTimeTable", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<TimetableList>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (TimetableList) Configuration.ApiClient.Deserialize(localVarResponse, typeof(TimetableList)));
            
        }

        /// <summary>
        /// Endpoint to retrieve timetable information 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>Task of TimetableList</returns>
        public async System.Threading.Tasks.Task<TimetableList> GetTimeTableAsync (string type, string stopid, string routeid, string format = null)
        {
             ApiResponse<TimetableList> localVarResponse = await GetTimeTableAsyncWithHttpInfo(type, stopid, routeid, format);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Endpoint to retrieve timetable information 
        /// </summary>
        /// <exception cref="IO.Swagger.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="type">value: week; Time table information is retrieved for the whole week</param>
        /// <param name="stopid">The bus stop id, if not provided all bus stops are returned</param>
        /// <param name="routeid">The route identifier</param>
        /// <param name="format">If not provided JSON format will be used by default (optional)</param>
        /// <returns>Task of ApiResponse (TimetableList)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<TimetableList>> GetTimeTableAsyncWithHttpInfo (string type, string stopid, string routeid, string format = null)
        {
            // verify the required parameter 'type' is set
            if (type == null)
                throw new ApiException(400, "Missing required parameter 'type' when calling TimetableInformationApi->GetTimeTable");
            // verify the required parameter 'stopid' is set
            if (stopid == null)
                throw new ApiException(400, "Missing required parameter 'stopid' when calling TimetableInformationApi->GetTimeTable");
            // verify the required parameter 'routeid' is set
            if (routeid == null)
                throw new ApiException(400, "Missing required parameter 'routeid' when calling TimetableInformationApi->GetTimeTable");

            var localVarPath = "/timetableinformation";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new Dictionary<String, String>();
            var localVarHeaderParams = new Dictionary<String, String>(Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json", 
                "application/xml"
            };
            String localVarHttpContentType = Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json", 
                "application/xml"
            };
            String localVarHttpHeaderAccept = Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            // set "format" to json by default
            // e.g. /pet/{petId}.{format} becomes /pet/{petId}.json
            localVarPathParams.Add("format", "json");
            if (format != null) localVarQueryParams.Add("format", Configuration.ApiClient.ParameterToString(format)); // query parameter
            if (type != null) localVarQueryParams.Add("type", Configuration.ApiClient.ParameterToString(type)); // query parameter
            if (stopid != null) localVarQueryParams.Add("stopid", Configuration.ApiClient.ParameterToString(stopid)); // query parameter
            if (routeid != null) localVarQueryParams.Add("routeid", Configuration.ApiClient.ParameterToString(routeid)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetTimeTable", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<TimetableList>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => x.Value.ToString()),
                (TimetableList) Configuration.ApiClient.Deserialize(localVarResponse, typeof(TimetableList)));
            
        }

    }
}
