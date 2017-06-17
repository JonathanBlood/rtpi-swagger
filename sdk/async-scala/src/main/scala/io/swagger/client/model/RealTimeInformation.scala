package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class RealTimeInformation (
  arrivaldatetime: Option[String],
duetime: Option[String],
departuredatetime: Option[String],
departureduetime: Option[String],
scheduledarrivaldatetime: Option[String],
scheduleddeparturedatetime: Option[String],
destination: Option[String],
destinationlocalized: Option[String],
origin: Option[String],
originlocalized: Option[String],
direction: Option[String],
operator: Option[String],
additionalinformation: Option[String],
lowfloorstatus: Option[String],
route: Option[String],
sourcetimestamp: Option[String],
monitored: Option[String]
)
