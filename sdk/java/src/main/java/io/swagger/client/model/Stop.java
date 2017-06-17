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
import io.swagger.client.model.RouteOperator;
import java.util.ArrayList;
import java.util.List;


/**
 * Stop
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-17T16:51:03.987+01:00")
public class Stop   {
  @SerializedName("stopid")
  private String stopid = null;

  @SerializedName("displaystopid")
  private String displaystopid = null;

  @SerializedName("shortname")
  private String shortname = null;

  @SerializedName("shortnamelocalized")
  private String shortnamelocalized = null;

  @SerializedName("fullname")
  private String fullname = null;

  @SerializedName("fullnamelocalized")
  private String fullnamelocalized = null;

  @SerializedName("latitude")
  private String latitude = null;

  @SerializedName("longitude")
  private String longitude = null;

  @SerializedName("operators")
  private List<RouteOperator> operators = new ArrayList<RouteOperator>();

  public Stop stopid(String stopid) {
    this.stopid = stopid;
    return this;
  }

   /**
   * Get stopid
   * @return stopid
  **/
  @ApiModelProperty(example = "HSTON", value = "")
  public String getStopid() {
    return stopid;
  }

  public void setStopid(String stopid) {
    this.stopid = stopid;
  }

  public Stop displaystopid(String displaystopid) {
    this.displaystopid = displaystopid;
    return this;
  }

   /**
   * Get displaystopid
   * @return displaystopid
  **/
  @ApiModelProperty(example = "Dublin Heuston Station", value = "")
  public String getDisplaystopid() {
    return displaystopid;
  }

  public void setDisplaystopid(String displaystopid) {
    this.displaystopid = displaystopid;
  }

  public Stop shortname(String shortname) {
    this.shortname = shortname;
    return this;
  }

   /**
   * Get shortname
   * @return shortname
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getShortname() {
    return shortname;
  }

  public void setShortname(String shortname) {
    this.shortname = shortname;
  }

  public Stop shortnamelocalized(String shortnamelocalized) {
    this.shortnamelocalized = shortnamelocalized;
    return this;
  }

   /**
   * Get shortnamelocalized
   * @return shortnamelocalized
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getShortnamelocalized() {
    return shortnamelocalized;
  }

  public void setShortnamelocalized(String shortnamelocalized) {
    this.shortnamelocalized = shortnamelocalized;
  }

  public Stop fullname(String fullname) {
    this.fullname = fullname;
    return this;
  }

   /**
   * Get fullname
   * @return fullname
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getFullname() {
    return fullname;
  }

  public void setFullname(String fullname) {
    this.fullname = fullname;
  }

  public Stop fullnamelocalized(String fullnamelocalized) {
    this.fullnamelocalized = fullnamelocalized;
    return this;
  }

   /**
   * Get fullnamelocalized
   * @return fullnamelocalized
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getFullnamelocalized() {
    return fullnamelocalized;
  }

  public void setFullnamelocalized(String fullnamelocalized) {
    this.fullnamelocalized = fullnamelocalized;
  }

  public Stop latitude(String latitude) {
    this.latitude = latitude;
    return this;
  }

   /**
   * Get latitude
   * @return latitude
  **/
  @ApiModelProperty(example = "53.34642974", value = "")
  public String getLatitude() {
    return latitude;
  }

  public void setLatitude(String latitude) {
    this.latitude = latitude;
  }

  public Stop longitude(String longitude) {
    this.longitude = longitude;
    return this;
  }

   /**
   * Get longitude
   * @return longitude
  **/
  @ApiModelProperty(example = "-6.294607473", value = "")
  public String getLongitude() {
    return longitude;
  }

  public void setLongitude(String longitude) {
    this.longitude = longitude;
  }

  public Stop operators(List<RouteOperator> operators) {
    this.operators = operators;
    return this;
  }

  public Stop addOperatorsItem(RouteOperator operatorsItem) {
    this.operators.add(operatorsItem);
    return this;
  }

   /**
   * Get operators
   * @return operators
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<RouteOperator> getOperators() {
    return operators;
  }

  public void setOperators(List<RouteOperator> operators) {
    this.operators = operators;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Stop stop = (Stop) o;
    return Objects.equals(this.stopid, stop.stopid) &&
        Objects.equals(this.displaystopid, stop.displaystopid) &&
        Objects.equals(this.shortname, stop.shortname) &&
        Objects.equals(this.shortnamelocalized, stop.shortnamelocalized) &&
        Objects.equals(this.fullname, stop.fullname) &&
        Objects.equals(this.fullnamelocalized, stop.fullnamelocalized) &&
        Objects.equals(this.latitude, stop.latitude) &&
        Objects.equals(this.longitude, stop.longitude) &&
        Objects.equals(this.operators, stop.operators);
  }

  @Override
  public int hashCode() {
    return Objects.hash(stopid, displaystopid, shortname, shortnamelocalized, fullname, fullnamelocalized, latitude, longitude, operators);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Stop {\n");
    
    sb.append("    stopid: ").append(toIndentedString(stopid)).append("\n");
    sb.append("    displaystopid: ").append(toIndentedString(displaystopid)).append("\n");
    sb.append("    shortname: ").append(toIndentedString(shortname)).append("\n");
    sb.append("    shortnamelocalized: ").append(toIndentedString(shortnamelocalized)).append("\n");
    sb.append("    fullname: ").append(toIndentedString(fullname)).append("\n");
    sb.append("    fullnamelocalized: ").append(toIndentedString(fullnamelocalized)).append("\n");
    sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
    sb.append("    longitude: ").append(toIndentedString(longitude)).append("\n");
    sb.append("    operators: ").append(toIndentedString(operators)).append("\n");
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

