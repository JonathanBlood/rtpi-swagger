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
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace IO.Swagger.Model
{
    /// <summary>
    /// BusStopList
    /// </summary>
    [DataContract]
    public partial class BusStopList :  IEquatable<BusStopList>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BusStopList" /> class.
        /// </summary>
        /// <param name="Errorcode">Errorcode.</param>
        /// <param name="Errormessage">Errormessage.</param>
        /// <param name="Numberofresults">Numberofresults.</param>
        /// <param name="Timestamp">Timestamp.</param>
        /// <param name="Results">Results.</param>
        public BusStopList(string Errorcode = null, string Errormessage = null, int? Numberofresults = null, string Timestamp = null, List<Stop> Results = null)
        {
            this.Errorcode = Errorcode;
            this.Errormessage = Errormessage;
            this.Numberofresults = Numberofresults;
            this.Timestamp = Timestamp;
            this.Results = Results;
        }
        
        /// <summary>
        /// Gets or Sets Errorcode
        /// </summary>
        [DataMember(Name="errorcode", EmitDefaultValue=false)]
        public string Errorcode { get; set; }
        /// <summary>
        /// Gets or Sets Errormessage
        /// </summary>
        [DataMember(Name="errormessage", EmitDefaultValue=false)]
        public string Errormessage { get; set; }
        /// <summary>
        /// Gets or Sets Numberofresults
        /// </summary>
        [DataMember(Name="numberofresults", EmitDefaultValue=false)]
        public int? Numberofresults { get; set; }
        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public string Timestamp { get; set; }
        /// <summary>
        /// Gets or Sets Results
        /// </summary>
        [DataMember(Name="results", EmitDefaultValue=false)]
        public List<Stop> Results { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BusStopList {\n");
            sb.Append("  Errorcode: ").Append(Errorcode).Append("\n");
            sb.Append("  Errormessage: ").Append(Errormessage).Append("\n");
            sb.Append("  Numberofresults: ").Append(Numberofresults).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Results: ").Append(Results).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as BusStopList);
        }

        /// <summary>
        /// Returns true if BusStopList instances are equal
        /// </summary>
        /// <param name="other">Instance of BusStopList to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BusStopList other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Errorcode == other.Errorcode ||
                    this.Errorcode != null &&
                    this.Errorcode.Equals(other.Errorcode)
                ) && 
                (
                    this.Errormessage == other.Errormessage ||
                    this.Errormessage != null &&
                    this.Errormessage.Equals(other.Errormessage)
                ) && 
                (
                    this.Numberofresults == other.Numberofresults ||
                    this.Numberofresults != null &&
                    this.Numberofresults.Equals(other.Numberofresults)
                ) && 
                (
                    this.Timestamp == other.Timestamp ||
                    this.Timestamp != null &&
                    this.Timestamp.Equals(other.Timestamp)
                ) && 
                (
                    this.Results == other.Results ||
                    this.Results != null &&
                    this.Results.SequenceEqual(other.Results)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.Errorcode != null)
                    hash = hash * 59 + this.Errorcode.GetHashCode();
                if (this.Errormessage != null)
                    hash = hash * 59 + this.Errormessage.GetHashCode();
                if (this.Numberofresults != null)
                    hash = hash * 59 + this.Numberofresults.GetHashCode();
                if (this.Timestamp != null)
                    hash = hash * 59 + this.Timestamp.GetHashCode();
                if (this.Results != null)
                    hash = hash * 59 + this.Results.GetHashCode();
                return hash;
            }
        }
    }

}
