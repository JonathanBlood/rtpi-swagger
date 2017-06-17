package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.RouteDetail;
import java.util.List;
@Canonical
class RouteDetailList {

    String errorcode = null

    String errormessage = null

    Integer numberofresults = null

    String route = null

    String timestamp = null

    List<RouteDetail> results = new ArrayList<RouteDetail>()
  

}

