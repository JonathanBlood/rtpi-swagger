package io.swagger.client.api

import io.swagger.client.model.OperatorList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class OperatorInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getOperators(format: Option[String] = None
      )(implicit reader: ClientResponseReader[OperatorList]): Future[OperatorList] = {
    // create path and map variables
    val path = (addFmt("/operatorinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
