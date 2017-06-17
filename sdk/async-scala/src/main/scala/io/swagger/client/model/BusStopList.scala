package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class BusStopList (
  errorcode: Option[String],
errormessage: Option[String],
numberofresults: Option[Integer],
timestamp: Option[String],
results: Option[List[Stop]]
)
