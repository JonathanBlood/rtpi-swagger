package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.Stop;
import java.util.List;
@Canonical
class RouteDetail {

    String operator = null

    String origin = null

    String originlocalized = null

    String destination = null

    String destinationlocalized = null

    String lastupdated = null

    List<Stop> stops = new ArrayList<Stop>()
  

}

