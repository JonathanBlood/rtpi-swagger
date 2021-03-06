/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.OperatorInformationApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * &lt;p&gt;RTPI REST Web Services API (&lt;a href&#x3D;\&quot;https://goo.gl/s6NTJe\&quot;&gt;RRWS API&lt;/a&gt;) provides REST interface to retrieve information on real time bus information, timetables and bus stops. &lt;/p&gt; &lt;p&gt;Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.&lt;/p&gt;  &lt;h2&gt;Error Codes&lt;/h2&gt; &lt;table&gt; &lt;tr&gt;&lt;th&gt;Error Code&lt;/th&gt;&lt;th&gt;Description&lt;/th&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;0&lt;/td&gt;&lt;td&gt;Success&lt;/td&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;1&lt;/td&gt;&lt;td&gt;No Results&lt;/td&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;2&lt;/td&gt;&lt;td&gt;Missing Parameter&lt;/td&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;3&lt;/td&gt;&lt;td&gt;Invalid Parameter&lt;/td&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;4&lt;/td&gt;&lt;td&gt;Sceduled Downtime&lt;/td&gt;&lt;/tr&gt; &lt;tr&gt;&lt;td&gt;5&lt;/td&gt;&lt;td&gt;Unexpected System Error&lt;/td&gt;&lt;/tr&gt; &lt;/table&gt; &lt;p&gt;Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).&lt;/p&gt; 
 * Version: 1.0.0
 * Generated at: 2017-06-17T16:51:06.863+01:00
 * Generated by: class io.swagger.codegen.languages.JavascriptClosureAngularClientCodegen
 */
goog.provide('API.Client.OperatorInformationApi');

goog.require('API.Client.OperatorList');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.OperatorInformationApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('OperatorInformationApiBasePath') ?
                   /** @type {!string} */ ($injector.get('OperatorInformationApiBasePath')) :
                   'https://data.dublinked.ie/cgi-bin/rtpi/';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('OperatorInformationApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('OperatorInformationApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.OperatorInformationApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * Endpoint to retrieve information about route operators in the system
 * 
 * @param {!string=} opt_format If not provided JSON format will be used by default
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.OperatorList>}
 */
API.Client.OperatorInformationApi.prototype.getOperators = function(opt_format, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/operatorinformation';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  if (opt_format !== undefined) {
    queryParameters['format'] = opt_format;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
