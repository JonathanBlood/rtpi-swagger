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


/**
 * RealTimeInformation
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-17T16:51:03.987+01:00")
public class RealTimeInformation   {
  @SerializedName("arrivaldatetime")
  private String arrivaldatetime = null;

  @SerializedName("duetime")
  private String duetime = null;

  @SerializedName("departuredatetime")
  private String departuredatetime = null;

  @SerializedName("departureduetime")
  private String departureduetime = null;

  @SerializedName("scheduledarrivaldatetime")
  private String scheduledarrivaldatetime = null;

  @SerializedName("scheduleddeparturedatetime")
  private String scheduleddeparturedatetime = null;

  @SerializedName("destination")
  private String destination = null;

  @SerializedName("destinationlocalized")
  private String destinationlocalized = null;

  @SerializedName("origin")
  private String origin = null;

  @SerializedName("originlocalized")
  private String originlocalized = null;

  @SerializedName("direction")
  private String direction = null;

  @SerializedName("operator")
  private String operator = null;

  @SerializedName("additionalinformation")
  private String additionalinformation = null;

  @SerializedName("lowfloorstatus")
  private String lowfloorstatus = null;

  @SerializedName("route")
  private String route = null;

  @SerializedName("sourcetimestamp")
  private String sourcetimestamp = null;

  @SerializedName("monitored")
  private String monitored = null;

  public RealTimeInformation arrivaldatetime(String arrivaldatetime) {
    this.arrivaldatetime = arrivaldatetime;
    return this;
  }

   /**
   * Get arrivaldatetime
   * @return arrivaldatetime
  **/
  @ApiModelProperty(example = "17/06/2017 14:40:00", value = "")
  public String getArrivaldatetime() {
    return arrivaldatetime;
  }

  public void setArrivaldatetime(String arrivaldatetime) {
    this.arrivaldatetime = arrivaldatetime;
  }

  public RealTimeInformation duetime(String duetime) {
    this.duetime = duetime;
    return this;
  }

   /**
   * Get duetime
   * @return duetime
  **/
  @ApiModelProperty(example = "Due", value = "")
  public String getDuetime() {
    return duetime;
  }

  public void setDuetime(String duetime) {
    this.duetime = duetime;
  }

  public RealTimeInformation departuredatetime(String departuredatetime) {
    this.departuredatetime = departuredatetime;
    return this;
  }

   /**
   * Get departuredatetime
   * @return departuredatetime
  **/
  @ApiModelProperty(example = "17/06/2017 14:40:00", value = "")
  public String getDeparturedatetime() {
    return departuredatetime;
  }

  public void setDeparturedatetime(String departuredatetime) {
    this.departuredatetime = departuredatetime;
  }

  public RealTimeInformation departureduetime(String departureduetime) {
    this.departureduetime = departureduetime;
    return this;
  }

   /**
   * Get departureduetime
   * @return departureduetime
  **/
  @ApiModelProperty(example = "Due", value = "")
  public String getDepartureduetime() {
    return departureduetime;
  }

  public void setDepartureduetime(String departureduetime) {
    this.departureduetime = departureduetime;
  }

  public RealTimeInformation scheduledarrivaldatetime(String scheduledarrivaldatetime) {
    this.scheduledarrivaldatetime = scheduledarrivaldatetime;
    return this;
  }

   /**
   * Get scheduledarrivaldatetime
   * @return scheduledarrivaldatetime
  **/
  @ApiModelProperty(example = "17/06/2017 14:40:00", value = "")
  public String getScheduledarrivaldatetime() {
    return scheduledarrivaldatetime;
  }

  public void setScheduledarrivaldatetime(String scheduledarrivaldatetime) {
    this.scheduledarrivaldatetime = scheduledarrivaldatetime;
  }

  public RealTimeInformation scheduleddeparturedatetime(String scheduleddeparturedatetime) {
    this.scheduleddeparturedatetime = scheduleddeparturedatetime;
    return this;
  }

   /**
   * Get scheduleddeparturedatetime
   * @return scheduleddeparturedatetime
  **/
  @ApiModelProperty(example = "17/06/2017 14:40:00", value = "")
  public String getScheduleddeparturedatetime() {
    return scheduleddeparturedatetime;
  }

  public void setScheduleddeparturedatetime(String scheduleddeparturedatetime) {
    this.scheduleddeparturedatetime = scheduleddeparturedatetime;
  }

  public RealTimeInformation destination(String destination) {
    this.destination = destination;
    return this;
  }

   /**
   * Get destination
   * @return destination
  **/
  @ApiModelProperty(example = "Shanard Road", value = "")
  public String getDestination() {
    return destination;
  }

  public void setDestination(String destination) {
    this.destination = destination;
  }

  public RealTimeInformation destinationlocalized(String destinationlocalized) {
    this.destinationlocalized = destinationlocalized;
    return this;
  }

   /**
   * Get destinationlocalized
   * @return destinationlocalized
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getDestinationlocalized() {
    return destinationlocalized;
  }

  public void setDestinationlocalized(String destinationlocalized) {
    this.destinationlocalized = destinationlocalized;
  }

  public RealTimeInformation origin(String origin) {
    this.origin = origin;
    return this;
  }

   /**
   * Get origin
   * @return origin
  **/
  @ApiModelProperty(example = "Park Avenue", value = "")
  public String getOrigin() {
    return origin;
  }

  public void setOrigin(String origin) {
    this.origin = origin;
  }

  public RealTimeInformation originlocalized(String originlocalized) {
    this.originlocalized = originlocalized;
    return this;
  }

   /**
   * Get originlocalized
   * @return originlocalized
  **/
  @ApiModelProperty(example = "Park Avenue", value = "")
  public String getOriginlocalized() {
    return originlocalized;
  }

  public void setOriginlocalized(String originlocalized) {
    this.originlocalized = originlocalized;
  }

  public RealTimeInformation direction(String direction) {
    this.direction = direction;
    return this;
  }

   /**
   * Get direction
   * @return direction
  **/
  @ApiModelProperty(example = "Inbound", value = "")
  public String getDirection() {
    return direction;
  }

  public void setDirection(String direction) {
    this.direction = direction;
  }

  public RealTimeInformation operator(String operator) {
    this.operator = operator;
    return this;
  }

   /**
   * Get operator
   * @return operator
  **/
  @ApiModelProperty(example = "bac", value = "")
  public String getOperator() {
    return operator;
  }

  public void setOperator(String operator) {
    this.operator = operator;
  }

  public RealTimeInformation additionalinformation(String additionalinformation) {
    this.additionalinformation = additionalinformation;
    return this;
  }

   /**
   * Get additionalinformation
   * @return additionalinformation
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getAdditionalinformation() {
    return additionalinformation;
  }

  public void setAdditionalinformation(String additionalinformation) {
    this.additionalinformation = additionalinformation;
  }

  public RealTimeInformation lowfloorstatus(String lowfloorstatus) {
    this.lowfloorstatus = lowfloorstatus;
    return this;
  }

   /**
   * Get lowfloorstatus
   * @return lowfloorstatus
  **/
  @ApiModelProperty(example = "no", value = "")
  public String getLowfloorstatus() {
    return lowfloorstatus;
  }

  public void setLowfloorstatus(String lowfloorstatus) {
    this.lowfloorstatus = lowfloorstatus;
  }

  public RealTimeInformation route(String route) {
    this.route = route;
    return this;
  }

   /**
   * Get route
   * @return route
  **/
  @ApiModelProperty(example = "1", value = "")
  public String getRoute() {
    return route;
  }

  public void setRoute(String route) {
    this.route = route;
  }

  public RealTimeInformation sourcetimestamp(String sourcetimestamp) {
    this.sourcetimestamp = sourcetimestamp;
    return this;
  }

   /**
   * Get sourcetimestamp
   * @return sourcetimestamp
  **/
  @ApiModelProperty(example = "17/06/2017 13:40:16", value = "")
  public String getSourcetimestamp() {
    return sourcetimestamp;
  }

  public void setSourcetimestamp(String sourcetimestamp) {
    this.sourcetimestamp = sourcetimestamp;
  }

  public RealTimeInformation monitored(String monitored) {
    this.monitored = monitored;
    return this;
  }

   /**
   * Get monitored
   * @return monitored
  **/
  @ApiModelProperty(example = "true", value = "")
  public String getMonitored() {
    return monitored;
  }

  public void setMonitored(String monitored) {
    this.monitored = monitored;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RealTimeInformation realTimeInformation = (RealTimeInformation) o;
    return Objects.equals(this.arrivaldatetime, realTimeInformation.arrivaldatetime) &&
        Objects.equals(this.duetime, realTimeInformation.duetime) &&
        Objects.equals(this.departuredatetime, realTimeInformation.departuredatetime) &&
        Objects.equals(this.departureduetime, realTimeInformation.departureduetime) &&
        Objects.equals(this.scheduledarrivaldatetime, realTimeInformation.scheduledarrivaldatetime) &&
        Objects.equals(this.scheduleddeparturedatetime, realTimeInformation.scheduleddeparturedatetime) &&
        Objects.equals(this.destination, realTimeInformation.destination) &&
        Objects.equals(this.destinationlocalized, realTimeInformation.destinationlocalized) &&
        Objects.equals(this.origin, realTimeInformation.origin) &&
        Objects.equals(this.originlocalized, realTimeInformation.originlocalized) &&
        Objects.equals(this.direction, realTimeInformation.direction) &&
        Objects.equals(this.operator, realTimeInformation.operator) &&
        Objects.equals(this.additionalinformation, realTimeInformation.additionalinformation) &&
        Objects.equals(this.lowfloorstatus, realTimeInformation.lowfloorstatus) &&
        Objects.equals(this.route, realTimeInformation.route) &&
        Objects.equals(this.sourcetimestamp, realTimeInformation.sourcetimestamp) &&
        Objects.equals(this.monitored, realTimeInformation.monitored);
  }

  @Override
  public int hashCode() {
    return Objects.hash(arrivaldatetime, duetime, departuredatetime, departureduetime, scheduledarrivaldatetime, scheduleddeparturedatetime, destination, destinationlocalized, origin, originlocalized, direction, operator, additionalinformation, lowfloorstatus, route, sourcetimestamp, monitored);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RealTimeInformation {\n");
    
    sb.append("    arrivaldatetime: ").append(toIndentedString(arrivaldatetime)).append("\n");
    sb.append("    duetime: ").append(toIndentedString(duetime)).append("\n");
    sb.append("    departuredatetime: ").append(toIndentedString(departuredatetime)).append("\n");
    sb.append("    departureduetime: ").append(toIndentedString(departureduetime)).append("\n");
    sb.append("    scheduledarrivaldatetime: ").append(toIndentedString(scheduledarrivaldatetime)).append("\n");
    sb.append("    scheduleddeparturedatetime: ").append(toIndentedString(scheduleddeparturedatetime)).append("\n");
    sb.append("    destination: ").append(toIndentedString(destination)).append("\n");
    sb.append("    destinationlocalized: ").append(toIndentedString(destinationlocalized)).append("\n");
    sb.append("    origin: ").append(toIndentedString(origin)).append("\n");
    sb.append("    originlocalized: ").append(toIndentedString(originlocalized)).append("\n");
    sb.append("    direction: ").append(toIndentedString(direction)).append("\n");
    sb.append("    operator: ").append(toIndentedString(operator)).append("\n");
    sb.append("    additionalinformation: ").append(toIndentedString(additionalinformation)).append("\n");
    sb.append("    lowfloorstatus: ").append(toIndentedString(lowfloorstatus)).append("\n");
    sb.append("    route: ").append(toIndentedString(route)).append("\n");
    sb.append("    sourcetimestamp: ").append(toIndentedString(sourcetimestamp)).append("\n");
    sb.append("    monitored: ").append(toIndentedString(monitored)).append("\n");
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

