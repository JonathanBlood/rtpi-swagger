package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.RouteOperator;
import java.util.List;
@Canonical
class Stop {

    String stopid = null

    String displaystopid = null

    String shortname = null

    String shortnamelocalized = null

    String fullname = null

    String fullnamelocalized = null

    String latitude = null

    String longitude = null

    List<RouteOperator> operators = new ArrayList<RouteOperator>()
  

}

