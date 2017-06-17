package io.swagger.client.model

import org.joda.time.DateTime
import java.util.UUID


case class Stop (
  stopid: Option[String],
displaystopid: Option[String],
shortname: Option[String],
shortnamelocalized: Option[String],
fullname: Option[String],
fullnamelocalized: Option[String],
latitude: Option[String],
longitude: Option[String],
operators: Option[List[RouteOperator]]
)
