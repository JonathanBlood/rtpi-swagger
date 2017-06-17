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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/RouteOperator'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./RouteOperator'));
  } else {
    // Browser globals (root is window)
    if (!root.RtpiRestWebServicesApi) {
      root.RtpiRestWebServicesApi = {};
    }
    root.RtpiRestWebServicesApi.Stop = factory(root.RtpiRestWebServicesApi.ApiClient, root.RtpiRestWebServicesApi.RouteOperator);
  }
}(this, function(ApiClient, RouteOperator) {
  'use strict';




  /**
   * The Stop model module.
   * @module model/Stop
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>Stop</code>.
   * @alias module:model/Stop
   * @class
   */
  var exports = function() {
    var _this = this;










  };

  /**
   * Constructs a <code>Stop</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Stop} obj Optional instance to populate.
   * @return {module:model/Stop} The populated <code>Stop</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('stopid')) {
        obj['stopid'] = ApiClient.convertToType(data['stopid'], 'String');
      }
      if (data.hasOwnProperty('displaystopid')) {
        obj['displaystopid'] = ApiClient.convertToType(data['displaystopid'], 'String');
      }
      if (data.hasOwnProperty('shortname')) {
        obj['shortname'] = ApiClient.convertToType(data['shortname'], 'String');
      }
      if (data.hasOwnProperty('shortnamelocalized')) {
        obj['shortnamelocalized'] = ApiClient.convertToType(data['shortnamelocalized'], 'String');
      }
      if (data.hasOwnProperty('fullname')) {
        obj['fullname'] = ApiClient.convertToType(data['fullname'], 'String');
      }
      if (data.hasOwnProperty('fullnamelocalized')) {
        obj['fullnamelocalized'] = ApiClient.convertToType(data['fullnamelocalized'], 'String');
      }
      if (data.hasOwnProperty('latitude')) {
        obj['latitude'] = ApiClient.convertToType(data['latitude'], 'String');
      }
      if (data.hasOwnProperty('longitude')) {
        obj['longitude'] = ApiClient.convertToType(data['longitude'], 'String');
      }
      if (data.hasOwnProperty('operators')) {
        obj['operators'] = ApiClient.convertToType(data['operators'], [RouteOperator]);
      }
    }
    return obj;
  }

  /**
   * @member {String} stopid
   */
  exports.prototype['stopid'] = undefined;
  /**
   * @member {String} displaystopid
   */
  exports.prototype['displaystopid'] = undefined;
  /**
   * @member {String} shortname
   */
  exports.prototype['shortname'] = undefined;
  /**
   * @member {String} shortnamelocalized
   */
  exports.prototype['shortnamelocalized'] = undefined;
  /**
   * @member {String} fullname
   */
  exports.prototype['fullname'] = undefined;
  /**
   * @member {String} fullnamelocalized
   */
  exports.prototype['fullnamelocalized'] = undefined;
  /**
   * @member {String} latitude
   */
  exports.prototype['latitude'] = undefined;
  /**
   * @member {String} longitude
   */
  exports.prototype['longitude'] = undefined;
  /**
   * @member {Array.<module:model/RouteOperator>} operators
   */
  exports.prototype['operators'] = undefined;



  return exports;
}));

