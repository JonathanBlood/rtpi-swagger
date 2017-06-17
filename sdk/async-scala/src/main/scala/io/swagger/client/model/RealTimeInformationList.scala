package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class RealTimeInformationList (
  errorcode: Option[String],
errormessage: Option[String],
numberofresults: Option[Integer],
stopid: Option[String],
timestamp: Option[String],
results: Option[List[RealTimeInformation]]
)
