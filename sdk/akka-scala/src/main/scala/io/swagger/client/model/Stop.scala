/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class Stop (
  stopid: Option[String],
  displaystopid: Option[String],
  shortname: Option[String],
  shortnamelocalized: Option[String],
  fullname: Option[String],
  fullnamelocalized: Option[String],
  latitude: Option[String],
  longitude: Option[String],
  operators: Option[Seq[RouteOperator]])
   extends ApiModel


