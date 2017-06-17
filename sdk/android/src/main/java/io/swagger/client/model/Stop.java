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

import io.swagger.client.model.RouteOperator;
import java.util.*;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Stop  {
  
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
  private List<RouteOperator> operators = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getStopid() {
    return stopid;
  }
  public void setStopid(String stopid) {
    this.stopid = stopid;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplaystopid() {
    return displaystopid;
  }
  public void setDisplaystopid(String displaystopid) {
    this.displaystopid = displaystopid;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getShortname() {
    return shortname;
  }
  public void setShortname(String shortname) {
    this.shortname = shortname;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getShortnamelocalized() {
    return shortnamelocalized;
  }
  public void setShortnamelocalized(String shortnamelocalized) {
    this.shortnamelocalized = shortnamelocalized;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFullname() {
    return fullname;
  }
  public void setFullname(String fullname) {
    this.fullname = fullname;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFullnamelocalized() {
    return fullnamelocalized;
  }
  public void setFullnamelocalized(String fullnamelocalized) {
    this.fullnamelocalized = fullnamelocalized;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getLatitude() {
    return latitude;
  }
  public void setLatitude(String latitude) {
    this.latitude = latitude;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getLongitude() {
    return longitude;
  }
  public void setLongitude(String longitude) {
    this.longitude = longitude;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<RouteOperator> getOperators() {
    return operators;
  }
  public void setOperators(List<RouteOperator> operators) {
    this.operators = operators;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Stop stop = (Stop) o;
    return (stopid == null ? stop.stopid == null : stopid.equals(stop.stopid)) &&
        (displaystopid == null ? stop.displaystopid == null : displaystopid.equals(stop.displaystopid)) &&
        (shortname == null ? stop.shortname == null : shortname.equals(stop.shortname)) &&
        (shortnamelocalized == null ? stop.shortnamelocalized == null : shortnamelocalized.equals(stop.shortnamelocalized)) &&
        (fullname == null ? stop.fullname == null : fullname.equals(stop.fullname)) &&
        (fullnamelocalized == null ? stop.fullnamelocalized == null : fullnamelocalized.equals(stop.fullnamelocalized)) &&
        (latitude == null ? stop.latitude == null : latitude.equals(stop.latitude)) &&
        (longitude == null ? stop.longitude == null : longitude.equals(stop.longitude)) &&
        (operators == null ? stop.operators == null : operators.equals(stop.operators));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (stopid == null ? 0: stopid.hashCode());
    result = 31 * result + (displaystopid == null ? 0: displaystopid.hashCode());
    result = 31 * result + (shortname == null ? 0: shortname.hashCode());
    result = 31 * result + (shortnamelocalized == null ? 0: shortnamelocalized.hashCode());
    result = 31 * result + (fullname == null ? 0: fullname.hashCode());
    result = 31 * result + (fullnamelocalized == null ? 0: fullnamelocalized.hashCode());
    result = 31 * result + (latitude == null ? 0: latitude.hashCode());
    result = 31 * result + (longitude == null ? 0: longitude.hashCode());
    result = 31 * result + (operators == null ? 0: operators.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Stop {\n");
    
    sb.append("  stopid: ").append(stopid).append("\n");
    sb.append("  displaystopid: ").append(displaystopid).append("\n");
    sb.append("  shortname: ").append(shortname).append("\n");
    sb.append("  shortnamelocalized: ").append(shortnamelocalized).append("\n");
    sb.append("  fullname: ").append(fullname).append("\n");
    sb.append("  fullnamelocalized: ").append(fullnamelocalized).append("\n");
    sb.append("  latitude: ").append(latitude).append("\n");
    sb.append("  longitude: ").append(longitude).append("\n");
    sb.append("  operators: ").append(operators).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}