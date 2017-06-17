package io.swagger.client.api

import io.swagger.client.model.BusStopList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class BusStopInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getBusStops(format: Option[String] = None,
      operator: Option[String] = None,
      stopid: Option[String] = None,
      stopname: Option[String] = None
      )(implicit reader: ClientResponseReader[BusStopList]): Future[BusStopList] = {
    // create path and map variables
    val path = (addFmt("/busstopinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }

    if (operator != null) operator.foreach { v => queryParams += "operator" -> v.toString }

    if (stopid != null) stopid.foreach { v => queryParams += "stopid" -> v.toString }

    if (stopname != null) stopname.foreach { v => queryParams += "stopname" -> v.toString }



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
