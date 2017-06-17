/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime


case class RouteDetailList (
  errorcode: Option[String],
  errormessage: Option[String],
  numberofresults: Option[Int],
  route: Option[String],
  timestamp: Option[String],
  results: Option[Seq[RouteDetail]])
   extends ApiModel


