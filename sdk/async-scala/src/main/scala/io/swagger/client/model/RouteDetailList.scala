package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class RouteDetailList (
  errorcode: Option[String],
errormessage: Option[String],
numberofresults: Option[Integer],
route: Option[String],
timestamp: Option[String],
results: Option[List[RouteDetail]]
)
