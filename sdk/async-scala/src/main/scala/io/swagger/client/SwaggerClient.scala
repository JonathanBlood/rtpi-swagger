package io.swagger.client

import io.swagger.client.api._

import com.wordnik.swagger.client._

import java.io.Closeable

class SwaggerClient(config: SwaggerConfig) extends Closeable {
  val locator = config.locator
  val name = config.name

  private[this] val client = transportClient

  protected def transportClient: TransportClient = new RestClient(config)
  
  val busStopInformation = new BusStopInformationApi(client, config)
  
  val operatorInformation = new OperatorInformationApi(client, config)
  
  val realTimeBusInformation = new RealTimeBusInformationApi(client, config)
  
  val routeDetailInformation = new RouteDetailInformationApi(client, config)
  
  val routeInformation = new RouteInformationApi(client, config)
  
  val timetableInformation = new TimetableInformationApi(client, config)
  

  def close() {
    client.close()
  }
}
