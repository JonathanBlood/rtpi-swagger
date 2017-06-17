/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */
package io.swagger.client.api

import io.swagger.client.model.BusStopList
import io.swagger.client.core._
import io.swagger.client.core.CollectionFormats._
import io.swagger.client.core.ApiKeyLocations._

object BusStopInformationApi {

  /**
   * 
   * 
   * Expected answers:
   *   code 200 : BusStopList (Success)
   * 
   * @param format If not provided JSON format will be used by default
   * @param operator If provided retrieves routes for the given operator
   * @param stopid The bus stop id, if not provided all bus stops are returned
   * @param stopname The stop name, only matching stops are returned
   */
  def getBusStops(format: Option[String] = None, operator: Option[String] = None, stopid: Option[String] = None, stopname: Option[String] = None): ApiRequest[BusStopList] =
    ApiRequest[BusStopList](ApiMethods.GET, "https://data.dublinked.ie/cgi-bin/rtpi/", "/busstopinformation", "application/json")
      .withQueryParam("format", format)
      .withQueryParam("operator", operator)
      .withQueryParam("stopid", stopid)
      .withQueryParam("stopname", stopname)
      .withSuccessResponse[BusStopList](200)
      

}

