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

package io.swagger.client.api;

import io.swagger.client.ApiInvoker;
import io.swagger.client.ApiException;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import com.android.volley.Response;
import com.android.volley.VolleyError;

import io.swagger.client.model.TimetableList;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class TimetableInformationApi {
  String basePath = "https://data.dublinked.ie/cgi-bin/rtpi/";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  /**
  * Endpoint to retrieve timetable information
  * 
   * @param type value: week; Time table information is retrieved for the whole week
   * @param stopid The bus stop id, if not provided all bus stops are returned
   * @param routeid The route identifier
   * @param format If not provided JSON format will be used by default
   * @return TimetableList
  */
  public TimetableList getTimeTable (String type, String stopid, String routeid, String format) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
     Object postBody = null;
  
      // verify the required parameter 'type' is set
      if (type == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'type' when calling getTimeTable",
      new ApiException(400, "Missing the required parameter 'type' when calling getTimeTable"));
      }
  
      // verify the required parameter 'stopid' is set
      if (stopid == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'stopid' when calling getTimeTable",
      new ApiException(400, "Missing the required parameter 'stopid' when calling getTimeTable"));
      }
  
      // verify the required parameter 'routeid' is set
      if (routeid == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'routeid' when calling getTimeTable",
      new ApiException(400, "Missing the required parameter 'routeid' when calling getTimeTable"));
      }
  

  // create path and map variables
  String path = "/timetableinformation".replaceAll("\\{format\\}","json");

  // query params
  List<Pair> queryParams = new ArrayList<Pair>();
      // header params
      Map<String, String> headerParams = new HashMap<String, String>();
      // form params
      Map<String, String> formParams = new HashMap<String, String>();

          queryParams.addAll(ApiInvoker.parameterToPairs("", "format", format));
          queryParams.addAll(ApiInvoker.parameterToPairs("", "type", type));
          queryParams.addAll(ApiInvoker.parameterToPairs("", "stopid", stopid));
          queryParams.addAll(ApiInvoker.parameterToPairs("", "routeid", routeid));


      String[] contentTypes = {
  "application/json","application/xml"
      };
      String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

      if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
  

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
      } else {
      // normal form params
        }

      String[] authNames = new String[] {  };

      try {
        String localVarResponse = apiInvoker.invokeAPI (basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames);
        if(localVarResponse != null){
           return (TimetableList) ApiInvoker.deserialize(localVarResponse, "", TimetableList.class);
        } else {
           return null;
        }
      } catch (ApiException ex) {
         throw ex;
      } catch (InterruptedException ex) {
         throw ex;
      } catch (ExecutionException ex) {
         if(ex.getCause() instanceof VolleyError) {
	    VolleyError volleyError = (VolleyError)ex.getCause();
	    if (volleyError.networkResponse != null) {
	       throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
	    }
         }
         throw ex;
      } catch (TimeoutException ex) {
         throw ex;
      }
  }

      /**
   * Endpoint to retrieve timetable information
   * 
   * @param type value: week; Time table information is retrieved for the whole week   * @param stopid The bus stop id, if not provided all bus stops are returned   * @param routeid The route identifier   * @param format If not provided JSON format will be used by default
  */
  public void getTimeTable (String type, String stopid, String routeid, String format, final Response.Listener<TimetableList> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = null;

  
    // verify the required parameter 'type' is set
    if (type == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'type' when calling getTimeTable",
         new ApiException(400, "Missing the required parameter 'type' when calling getTimeTable"));
    }
    
    // verify the required parameter 'stopid' is set
    if (stopid == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'stopid' when calling getTimeTable",
         new ApiException(400, "Missing the required parameter 'stopid' when calling getTimeTable"));
    }
    
    // verify the required parameter 'routeid' is set
    if (routeid == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'routeid' when calling getTimeTable",
         new ApiException(400, "Missing the required parameter 'routeid' when calling getTimeTable"));
    }
    

    // create path and map variables
    String path = "/timetableinformation".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    queryParams.addAll(ApiInvoker.parameterToPairs("", "format", format));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "type", type));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "stopid", stopid));
    queryParams.addAll(ApiInvoker.parameterToPairs("", "routeid", routeid));


    String[] contentTypes = {
      "application/json","application/xml"
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

      String[] authNames = new String[] {  };

    try {
      apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
            try {
              responseListener.onResponse((TimetableList) ApiInvoker.deserialize(localVarResponse,  "", TimetableList.class));
            } catch (ApiException exception) {
               errorListener.onErrorResponse(new VolleyError(exception));
            }
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
}
