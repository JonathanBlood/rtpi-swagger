package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class TimetableList (
  errorcode: Option[String],
errormessage: Option[String],
numberofresults: Option[Integer],
route: Option[String],
stopid: Option[String],
timestamp: Option[String],
results: Option[List[Timetable]]
)
