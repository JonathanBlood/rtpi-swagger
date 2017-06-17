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


package io.swagger.client.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.client.model.Stop;
import java.util.ArrayList;
import java.util.List;


/**
 * RouteDetail
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-17T16:51:03.987+01:00")
public class RouteDetail   {
  @SerializedName("operator")
  private String operator = null;

  @SerializedName("origin")
  private String origin = null;

  @SerializedName("originlocalized")
  private String originlocalized = null;

  @SerializedName("destination")
  private String destination = null;

  @SerializedName("destinationlocalized")
  private String destinationlocalized = null;

  @SerializedName("lastupdated")
  private String lastupdated = null;

  @SerializedName("stops")
  private List<Stop> stops = new ArrayList<Stop>();

  public RouteDetail operator(String operator) {
    this.operator = operator;
    return this;
  }

   /**
   * Get operator
   * @return operator
  **/
  @ApiModelProperty(example = "ir", value = "")
  public String getOperator() {
    return operator;
  }

  public void setOperator(String operator) {
    this.operator = operator;
  }

  public RouteDetail origin(String origin) {
    this.origin = origin;
    return this;
  }

   /**
   * Get origin
   * @return origin
  **/
  @ApiModelProperty(example = "Dublin Heuston Station", value = "")
  public String getOrigin() {
    return origin;
  }

  public void setOrigin(String origin) {
    this.origin = origin;
  }

  public RouteDetail originlocalized(String originlocalized) {
    this.originlocalized = originlocalized;
    return this;
  }

   /**
   * Get originlocalized
   * @return originlocalized
  **/
  @ApiModelProperty(example = "Stáisiún Heuston", value = "")
  public String getOriginlocalized() {
    return originlocalized;
  }

  public void setOriginlocalized(String originlocalized) {
    this.originlocalized = originlocalized;
  }

  public RouteDetail destination(String destination) {
    this.destination = destination;
    return this;
  }

   /**
   * Get destination
   * @return destination
  **/
  @ApiModelProperty(example = "Rushbrooke Station", value = "")
  public String getDestination() {
    return destination;
  }

  public void setDestination(String destination) {
    this.destination = destination;
  }

  public RouteDetail destinationlocalized(String destinationlocalized) {
    this.destinationlocalized = destinationlocalized;
    return this;
  }

   /**
   * Get destinationlocalized
   * @return destinationlocalized
  **/
  @ApiModelProperty(example = "Stáisiún Rinn an Chabhaigh", value = "")
  public String getDestinationlocalized() {
    return destinationlocalized;
  }

  public void setDestinationlocalized(String destinationlocalized) {
    this.destinationlocalized = destinationlocalized;
  }

  public RouteDetail lastupdated(String lastupdated) {
    this.lastupdated = lastupdated;
    return this;
  }

   /**
   * Get lastupdated
   * @return lastupdated
  **/
  @ApiModelProperty(example = "22/01/2014 10:32:08", value = "")
  public String getLastupdated() {
    return lastupdated;
  }

  public void setLastupdated(String lastupdated) {
    this.lastupdated = lastupdated;
  }

  public RouteDetail stops(List<Stop> stops) {
    this.stops = stops;
    return this;
  }

  public RouteDetail addStopsItem(Stop stopsItem) {
    this.stops.add(stopsItem);
    return this;
  }

   /**
   * Get stops
   * @return stops
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<Stop> getStops() {
    return stops;
  }

  public void setStops(List<Stop> stops) {
    this.stops = stops;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RouteDetail routeDetail = (RouteDetail) o;
    return Objects.equals(this.operator, routeDetail.operator) &&
        Objects.equals(this.origin, routeDetail.origin) &&
        Objects.equals(this.originlocalized, routeDetail.originlocalized) &&
        Objects.equals(this.destination, routeDetail.destination) &&
        Objects.equals(this.destinationlocalized, routeDetail.destinationlocalized) &&
        Objects.equals(this.lastupdated, routeDetail.lastupdated) &&
        Objects.equals(this.stops, routeDetail.stops);
  }

  @Override
  public int hashCode() {
    return Objects.hash(operator, origin, originlocalized, destination, destinationlocalized, lastupdated, stops);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RouteDetail {\n");
    
    sb.append("    operator: ").append(toIndentedString(operator)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    originlocalized: ").append(toIndentedString(originlocalized)).append("\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    destinationlocalized: ").append(toIndentedString(destinationlocalized)).append("\n");
    sb.append("    lastupdated: ").append(toIndentedString(lastupdated)).append("\n");
    sb.append("    stops: ").append(toIndentedString(stops)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

