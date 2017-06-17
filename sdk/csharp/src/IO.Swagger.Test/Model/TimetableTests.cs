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


using NUnit.Framework;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using IO.Swagger.Api;
using IO.Swagger.Model;
using IO.Swagger.Client;
using System.Reflection;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing Timetable
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class TimetableTests
    {
        // TODO uncomment below to declare an instance variable for Timetable
        //private Timetable instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of Timetable
            //instance = new Timetable();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of Timetable
        /// </summary>
        [Test]
        public void TimetableInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOfType" Timetable
            //Assert.IsInstanceOfType<Timetable> (instance, "variable 'instance' is a Timetable");
        }

        /// <summary>
        /// Test the property 'Startdayofweek'
        /// </summary>
        [Test]
        public void StartdayofweekTest()
        {
            // TODO unit test for the property 'Startdayofweek'
        }
        /// <summary>
        /// Test the property 'Enddayofweek'
        /// </summary>
        [Test]
        public void EnddayofweekTest()
        {
            // TODO unit test for the property 'Enddayofweek'
        }
        /// <summary>
        /// Test the property 'Destination'
        /// </summary>
        [Test]
        public void DestinationTest()
        {
            // TODO unit test for the property 'Destination'
        }
        /// <summary>
        /// Test the property 'Destinationlocalized'
        /// </summary>
        [Test]
        public void DestinationlocalizedTest()
        {
            // TODO unit test for the property 'Destinationlocalized'
        }
        /// <summary>
        /// Test the property 'Lastupdated'
        /// </summary>
        [Test]
        public void LastupdatedTest()
        {
            // TODO unit test for the property 'Lastupdated'
        }
        /// <summary>
        /// Test the property 'Departures'
        /// </summary>
        [Test]
        public void DeparturesTest()
        {
            // TODO unit test for the property 'Departures'
        }

    }

}