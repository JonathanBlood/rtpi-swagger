package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class RouteDetail (
  operator: Option[String],
origin: Option[String],
originlocalized: Option[String],
destination: Option[String],
destinationlocalized: Option[String],
lastupdated: Option[String],
stops: Option[List[Stop]]
)
