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
    /// RealTimeInformation
    /// </summary>
    [DataContract]
    public partial class RealTimeInformation :  IEquatable<RealTimeInformation>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RealTimeInformation" /> class.
        /// </summary>
        /// <param name="Arrivaldatetime">Arrivaldatetime.</param>
        /// <param name="Duetime">Duetime.</param>
        /// <param name="Departuredatetime">Departuredatetime.</param>
        /// <param name="Departureduetime">Departureduetime.</param>
        /// <param name="Scheduledarrivaldatetime">Scheduledarrivaldatetime.</param>
        /// <param name="Scheduleddeparturedatetime">Scheduleddeparturedatetime.</param>
        /// <param name="Destination">Destination.</param>
        /// <param name="Destinationlocalized">Destinationlocalized.</param>
        /// <param name="Origin">Origin.</param>
        /// <param name="Originlocalized">Originlocalized.</param>
        /// <param name="Direction">Direction.</param>
        /// <param name="_Operator">_Operator.</param>
        /// <param name="Additionalinformation">Additionalinformation.</param>
        /// <param name="Lowfloorstatus">Lowfloorstatus.</param>
        /// <param name="Route">Route.</param>
        /// <param name="Sourcetimestamp">Sourcetimestamp.</param>
        /// <param name="Monitored">Monitored.</param>
        public RealTimeInformation(string Arrivaldatetime = null, string Duetime = null, string Departuredatetime = null, string Departureduetime = null, string Scheduledarrivaldatetime = null, string Scheduleddeparturedatetime = null, string Destination = null, string Destinationlocalized = null, string Origin = null, string Originlocalized = null, string Direction = null, string _Operator = null, string Additionalinformation = null, string Lowfloorstatus = null, string Route = null, string Sourcetimestamp = null, string Monitored = null)
        {
            this.Arrivaldatetime = Arrivaldatetime;
            this.Duetime = Duetime;
            this.Departuredatetime = Departuredatetime;
            this.Departureduetime = Departureduetime;
            this.Scheduledarrivaldatetime = Scheduledarrivaldatetime;
            this.Scheduleddeparturedatetime = Scheduleddeparturedatetime;
            this.Destination = Destination;
            this.Destinationlocalized = Destinationlocalized;
            this.Origin = Origin;
            this.Originlocalized = Originlocalized;
            this.Direction = Direction;
            this._Operator = _Operator;
            this.Additionalinformation = Additionalinformation;
            this.Lowfloorstatus = Lowfloorstatus;
            this.Route = Route;
            this.Sourcetimestamp = Sourcetimestamp;
            this.Monitored = Monitored;
        }
        
        /// <summary>
        /// Gets or Sets Arrivaldatetime
        /// </summary>
        [DataMember(Name="arrivaldatetime", EmitDefaultValue=false)]
        public string Arrivaldatetime { get; set; }
        /// <summary>
        /// Gets or Sets Duetime
        /// </summary>
        [DataMember(Name="duetime", EmitDefaultValue=false)]
        public string Duetime { get; set; }
        /// <summary>
        /// Gets or Sets Departuredatetime
        /// </summary>
        [DataMember(Name="departuredatetime", EmitDefaultValue=false)]
        public string Departuredatetime { get; set; }
        /// <summary>
        /// Gets or Sets Departureduetime
        /// </summary>
        [DataMember(Name="departureduetime", EmitDefaultValue=false)]
        public string Departureduetime { get; set; }
        /// <summary>
        /// Gets or Sets Scheduledarrivaldatetime
        /// </summary>
        [DataMember(Name="scheduledarrivaldatetime", EmitDefaultValue=false)]
        public string Scheduledarrivaldatetime { get; set; }
        /// <summary>
        /// Gets or Sets Scheduleddeparturedatetime
        /// </summary>
        [DataMember(Name="scheduleddeparturedatetime", EmitDefaultValue=false)]
        public string Scheduleddeparturedatetime { get; set; }
        /// <summary>
        /// Gets or Sets Destination
        /// </summary>
        [DataMember(Name="destination", EmitDefaultValue=false)]
        public string Destination { get; set; }
        /// <summary>
        /// Gets or Sets Destinationlocalized
        /// </summary>
        [DataMember(Name="destinationlocalized", EmitDefaultValue=false)]
        public string Destinationlocalized { get; set; }
        /// <summary>
        /// Gets or Sets Origin
        /// </summary>
        [DataMember(Name="origin", EmitDefaultValue=false)]
        public string Origin { get; set; }
        /// <summary>
        /// Gets or Sets Originlocalized
        /// </summary>
        [DataMember(Name="originlocalized", EmitDefaultValue=false)]
        public string Originlocalized { get; set; }
        /// <summary>
        /// Gets or Sets Direction
        /// </summary>
        [DataMember(Name="direction", EmitDefaultValue=false)]
        public string Direction { get; set; }
        /// <summary>
        /// Gets or Sets _Operator
        /// </summary>
        [DataMember(Name="operator", EmitDefaultValue=false)]
        public string _Operator { get; set; }
        /// <summary>
        /// Gets or Sets Additionalinformation
        /// </summary>
        [DataMember(Name="additionalinformation", EmitDefaultValue=false)]
        public string Additionalinformation { get; set; }
        /// <summary>
        /// Gets or Sets Lowfloorstatus
        /// </summary>
        [DataMember(Name="lowfloorstatus", EmitDefaultValue=false)]
        public string Lowfloorstatus { get; set; }
        /// <summary>
        /// Gets or Sets Route
        /// </summary>
        [DataMember(Name="route", EmitDefaultValue=false)]
        public string Route { get; set; }
        /// <summary>
        /// Gets or Sets Sourcetimestamp
        /// </summary>
        [DataMember(Name="sourcetimestamp", EmitDefaultValue=false)]
        public string Sourcetimestamp { get; set; }
        /// <summary>
        /// Gets or Sets Monitored
        /// </summary>
        [DataMember(Name="monitored", EmitDefaultValue=false)]
        public string Monitored { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RealTimeInformation {\n");
            sb.Append("  Arrivaldatetime: ").Append(Arrivaldatetime).Append("\n");
            sb.Append("  Duetime: ").Append(Duetime).Append("\n");
            sb.Append("  Departuredatetime: ").Append(Departuredatetime).Append("\n");
            sb.Append("  Departureduetime: ").Append(Departureduetime).Append("\n");
            sb.Append("  Scheduledarrivaldatetime: ").Append(Scheduledarrivaldatetime).Append("\n");
            sb.Append("  Scheduleddeparturedatetime: ").Append(Scheduleddeparturedatetime).Append("\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Destinationlocalized: ").Append(Destinationlocalized).Append("\n");
            sb.Append("  Origin: ").Append(Origin).Append("\n");
            sb.Append("  Originlocalized: ").Append(Originlocalized).Append("\n");
            sb.Append("  Direction: ").Append(Direction).Append("\n");
            sb.Append("  _Operator: ").Append(_Operator).Append("\n");
            sb.Append("  Additionalinformation: ").Append(Additionalinformation).Append("\n");
            sb.Append("  Lowfloorstatus: ").Append(Lowfloorstatus).Append("\n");
            sb.Append("  Route: ").Append(Route).Append("\n");
            sb.Append("  Sourcetimestamp: ").Append(Sourcetimestamp).Append("\n");
            sb.Append("  Monitored: ").Append(Monitored).Append("\n");
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
            return this.Equals(obj as RealTimeInformation);
        }

        /// <summary>
        /// Returns true if RealTimeInformation instances are equal
        /// </summary>
        /// <param name="other">Instance of RealTimeInformation to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RealTimeInformation other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Arrivaldatetime == other.Arrivaldatetime ||
                    this.Arrivaldatetime != null &&
                    this.Arrivaldatetime.Equals(other.Arrivaldatetime)
                ) && 
                (
                    this.Duetime == other.Duetime ||
                    this.Duetime != null &&
                    this.Duetime.Equals(other.Duetime)
                ) && 
                (
                    this.Departuredatetime == other.Departuredatetime ||
                    this.Departuredatetime != null &&
                    this.Departuredatetime.Equals(other.Departuredatetime)
                ) && 
                (
                    this.Departureduetime == other.Departureduetime ||
                    this.Departureduetime != null &&
                    this.Departureduetime.Equals(other.Departureduetime)
                ) && 
                (
                    this.Scheduledarrivaldatetime == other.Scheduledarrivaldatetime ||
                    this.Scheduledarrivaldatetime != null &&
                    this.Scheduledarrivaldatetime.Equals(other.Scheduledarrivaldatetime)
                ) && 
                (
                    this.Scheduleddeparturedatetime == other.Scheduleddeparturedatetime ||
                    this.Scheduleddeparturedatetime != null &&
                    this.Scheduleddeparturedatetime.Equals(other.Scheduleddeparturedatetime)
                ) && 
                (
                    this.Destination == other.Destination ||
                    this.Destination != null &&
                    this.Destination.Equals(other.Destination)
                ) && 
                (
                    this.Destinationlocalized == other.Destinationlocalized ||
                    this.Destinationlocalized != null &&
                    this.Destinationlocalized.Equals(other.Destinationlocalized)
                ) && 
                (
                    this.Origin == other.Origin ||
                    this.Origin != null &&
                    this.Origin.Equals(other.Origin)
                ) && 
                (
                    this.Originlocalized == other.Originlocalized ||
                    this.Originlocalized != null &&
                    this.Originlocalized.Equals(other.Originlocalized)
                ) && 
                (
                    this.Direction == other.Direction ||
                    this.Direction != null &&
                    this.Direction.Equals(other.Direction)
                ) && 
                (
                    this._Operator == other._Operator ||
                    this._Operator != null &&
                    this._Operator.Equals(other._Operator)
                ) && 
                (
                    this.Additionalinformation == other.Additionalinformation ||
                    this.Additionalinformation != null &&
                    this.Additionalinformation.Equals(other.Additionalinformation)
                ) && 
                (
                    this.Lowfloorstatus == other.Lowfloorstatus ||
                    this.Lowfloorstatus != null &&
                    this.Lowfloorstatus.Equals(other.Lowfloorstatus)
                ) && 
                (
                    this.Route == other.Route ||
                    this.Route != null &&
                    this.Route.Equals(other.Route)
                ) && 
                (
                    this.Sourcetimestamp == other.Sourcetimestamp ||
                    this.Sourcetimestamp != null &&
                    this.Sourcetimestamp.Equals(other.Sourcetimestamp)
                ) && 
                (
                    this.Monitored == other.Monitored ||
                    this.Monitored != null &&
                    this.Monitored.Equals(other.Monitored)
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
                if (this.Arrivaldatetime != null)
                    hash = hash * 59 + this.Arrivaldatetime.GetHashCode();
                if (this.Duetime != null)
                    hash = hash * 59 + this.Duetime.GetHashCode();
                if (this.Departuredatetime != null)
                    hash = hash * 59 + this.Departuredatetime.GetHashCode();
                if (this.Departureduetime != null)
                    hash = hash * 59 + this.Departureduetime.GetHashCode();
                if (this.Scheduledarrivaldatetime != null)
                    hash = hash * 59 + this.Scheduledarrivaldatetime.GetHashCode();
                if (this.Scheduleddeparturedatetime != null)
                    hash = hash * 59 + this.Scheduleddeparturedatetime.GetHashCode();
                if (this.Destination != null)
                    hash = hash * 59 + this.Destination.GetHashCode();
                if (this.Destinationlocalized != null)
                    hash = hash * 59 + this.Destinationlocalized.GetHashCode();
                if (this.Origin != null)
                    hash = hash * 59 + this.Origin.GetHashCode();
                if (this.Originlocalized != null)
                    hash = hash * 59 + this.Originlocalized.GetHashCode();
                if (this.Direction != null)
                    hash = hash * 59 + this.Direction.GetHashCode();
                if (this._Operator != null)
                    hash = hash * 59 + this._Operator.GetHashCode();
                if (this.Additionalinformation != null)
                    hash = hash * 59 + this.Additionalinformation.GetHashCode();
                if (this.Lowfloorstatus != null)
                    hash = hash * 59 + this.Lowfloorstatus.GetHashCode();
                if (this.Route != null)
                    hash = hash * 59 + this.Route.GetHashCode();
                if (this.Sourcetimestamp != null)
                    hash = hash * 59 + this.Sourcetimestamp.GetHashCode();
                if (this.Monitored != null)
                    hash = hash * 59 + this.Monitored.GetHashCode();
                return hash;
            }
        }
    }

}
