package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.Stop;
import java.util.List;
@Canonical
class BusStopList {

    String errorcode = null

    String errormessage = null

    Integer numberofresults = null

    String timestamp = null

    List<Stop> results = new ArrayList<Stop>()
  

}

