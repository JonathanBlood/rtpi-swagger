package io.swagger.client.api

import io.swagger.client.model.TimetableList
import com.wordnik.swagger.client._
import scala.concurrent.Future
import collection.mutable

class TimetableInformationApi(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getTimeTable(_type: String,
      stopid: String,
      routeid: String,
      format: Option[String] = None
      )(implicit reader: ClientResponseReader[TimetableList]): Future[TimetableList] = {
    // create path and map variables
    val path = (addFmt("/timetableinformation"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (format != null) format.foreach { v => queryParams += "format" -> v.toString }

    if (_type != null) queryParams += "type" -> _type.toString

    if (stopid != null) queryParams += "stopid" -> stopid.toString

    if (routeid != null) queryParams += "routeid" -> routeid.toString



    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
