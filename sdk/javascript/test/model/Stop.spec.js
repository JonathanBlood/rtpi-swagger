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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.RtpiRestWebServicesApi);
  }
}(this, function(expect, RtpiRestWebServicesApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new RtpiRestWebServicesApi.Stop();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('Stop', function() {
    it('should create an instance of Stop', function() {
      // uncomment below and update the code to test Stop
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be.a(RtpiRestWebServicesApi.Stop);
    });

    it('should have the property stopid (base name: "stopid")', function() {
      // uncomment below and update the code to test the property stopid
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property displaystopid (base name: "displaystopid")', function() {
      // uncomment below and update the code to test the property displaystopid
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property shortname (base name: "shortname")', function() {
      // uncomment below and update the code to test the property shortname
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property shortnamelocalized (base name: "shortnamelocalized")', function() {
      // uncomment below and update the code to test the property shortnamelocalized
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property fullname (base name: "fullname")', function() {
      // uncomment below and update the code to test the property fullname
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property fullnamelocalized (base name: "fullnamelocalized")', function() {
      // uncomment below and update the code to test the property fullnamelocalized
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property latitude (base name: "latitude")', function() {
      // uncomment below and update the code to test the property latitude
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property longitude (base name: "longitude")', function() {
      // uncomment below and update the code to test the property longitude
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

    it('should have the property operators (base name: "operators")', function() {
      // uncomment below and update the code to test the property operators
      //var instane = new RtpiRestWebServicesApi.Stop();
      //expect(instance).to.be();
    });

  });

}));
