package io.swagger.client.api

import io.swagger.client.model.RouteList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class RouteInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getRoutes(format: Option[String] = None,
      operator: Option[String] = None
      )(implicit reader: ClientResponseReader[RouteList]): Future[RouteList] = {
    // create path and map variables
    val path = (addFmt("/routelistinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }

    if (operator != null) operator.foreach { v => queryParams += "operator" -> v.toString }



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
