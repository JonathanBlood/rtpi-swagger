package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class Timetable (
  startdayofweek: Option[String],
enddayofweek: Option[String],
destination: Option[String],
destinationlocalized: Option[String],
lastupdated: Option[String],
departures: Option[List[String]]
)
