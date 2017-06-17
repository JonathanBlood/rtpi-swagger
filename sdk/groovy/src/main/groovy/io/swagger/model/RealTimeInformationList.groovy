package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.RealTimeInformation;
import java.util.List;
@Canonical
class RealTimeInformationList {

    String errorcode = null

    String errormessage = null

    Integer numberofresults = null

    String stopid = null

    String timestamp = null

    List<RealTimeInformation> results = new ArrayList<RealTimeInformation>()
  

}

