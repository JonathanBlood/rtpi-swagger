package io.swagger.client.api

import io.swagger.client.model.RealTimeInformationList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class RealTimeBusInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getRealTimeBusInformation(stopid: String,
      format: Option[String] = None,
      operator: Option[String] = None,
      routeid: Option[String] = None,
      maxresults: Option[String] = None
      )(implicit reader: ClientResponseReader[RealTimeInformationList]): Future[RealTimeInformationList] = {
    // create path and map variables
    val path = (addFmt("/realtimebusinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }

    if (operator != null) operator.foreach { v => queryParams += "operator" -> v.toString }

    if (stopid != null) queryParams += "stopid" -> stopid.toString

    if (routeid != null) routeid.foreach { v => queryParams += "routeid" -> v.toString }

    if (maxresults != null) maxresults.foreach { v => queryParams += "maxresults" -> v.toString }



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
