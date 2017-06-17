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
import io.swagger.client.model.RealTimeInformation;
import java.util.ArrayList;
import java.util.List;


/**
 * RealTimeInformationList
 */
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-17T16:51:03.987+01:00")
public class RealTimeInformationList   {
  @SerializedName("errorcode")
  private String errorcode = null;

  @SerializedName("errormessage")
  private String errormessage = null;

  @SerializedName("numberofresults")
  private Integer numberofresults = null;

  @SerializedName("stopid")
  private String stopid = null;

  @SerializedName("timestamp")
  private String timestamp = null;

  @SerializedName("results")
  private List<RealTimeInformation> results = new ArrayList<RealTimeInformation>();

  public RealTimeInformationList errorcode(String errorcode) {
    this.errorcode = errorcode;
    return this;
  }

   /**
   * Get errorcode
   * @return errorcode
  **/
  @ApiModelProperty(example = "0", value = "")
  public String getErrorcode() {
    return errorcode;
  }

  public void setErrorcode(String errorcode) {
    this.errorcode = errorcode;
  }

  public RealTimeInformationList errormessage(String errormessage) {
    this.errormessage = errormessage;
    return this;
  }

   /**
   * Get errormessage
   * @return errormessage
  **/
  @ApiModelProperty(example = "null", value = "")
  public String getErrormessage() {
    return errormessage;
  }

  public void setErrormessage(String errormessage) {
    this.errormessage = errormessage;
  }

  public RealTimeInformationList numberofresults(Integer numberofresults) {
    this.numberofresults = numberofresults;
    return this;
  }

   /**
   * Get numberofresults
   * @return numberofresults
  **/
  @ApiModelProperty(example = "5", value = "")
  public Integer getNumberofresults() {
    return numberofresults;
  }

  public void setNumberofresults(Integer numberofresults) {
    this.numberofresults = numberofresults;
  }

  public RealTimeInformationList stopid(String stopid) {
    this.stopid = stopid;
    return this;
  }

   /**
   * Get stopid
   * @return stopid
  **/
  @ApiModelProperty(example = "281", value = "")
  public String getStopid() {
    return stopid;
  }

  public void setStopid(String stopid) {
    this.stopid = stopid;
  }

  public RealTimeInformationList timestamp(String timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(example = "17/06/2017 11:44:35", value = "")
  public String getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(String timestamp) {
    this.timestamp = timestamp;
  }

  public RealTimeInformationList results(List<RealTimeInformation> results) {
    this.results = results;
    return this;
  }

  public RealTimeInformationList addResultsItem(RealTimeInformation resultsItem) {
    this.results.add(resultsItem);
    return this;
  }

   /**
   * Get results
   * @return results
  **/
  @ApiModelProperty(example = "null", value = "")
  public List<RealTimeInformation> getResults() {
    return results;
  }

  public void setResults(List<RealTimeInformation> results) {
    this.results = results;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RealTimeInformationList realTimeInformationList = (RealTimeInformationList) o;
    return Objects.equals(this.errorcode, realTimeInformationList.errorcode) &&
        Objects.equals(this.errormessage, realTimeInformationList.errormessage) &&
        Objects.equals(this.numberofresults, realTimeInformationList.numberofresults) &&
        Objects.equals(this.stopid, realTimeInformationList.stopid) &&
        Objects.equals(this.timestamp, realTimeInformationList.timestamp) &&
        Objects.equals(this.results, realTimeInformationList.results);
  }

  @Override
  public int hashCode() {
    return Objects.hash(errorcode, errormessage, numberofresults, stopid, timestamp, results);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RealTimeInformationList {\n");
    
    sb.append("    errorcode: ").append(toIndentedString(errorcode)).append("\n");
    sb.append("    errormessage: ").append(toIndentedString(errormessage)).append("\n");
    sb.append("    numberofresults: ").append(toIndentedString(numberofresults)).append("\n");
    sb.append("    stopid: ").append(toIndentedString(stopid)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    results: ").append(toIndentedString(results)).append("\n");
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

