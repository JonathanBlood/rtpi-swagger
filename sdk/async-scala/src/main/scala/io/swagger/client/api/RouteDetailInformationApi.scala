package io.swagger.client.api

import io.swagger.client.model.RouteDetailList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class RouteDetailInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getRouteDetail(operator: String,
      routeid: String,
      format: Option[String] = None
      )(implicit reader: ClientResponseReader[RouteDetailList]): Future[RouteDetailList] = {
    // create path and map variables
    val path = (addFmt("/routeinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }

    if (operator != null) queryParams += "operator" -> operator.toString

    if (routeid != null) queryParams += "routeid" -> routeid.toString



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
