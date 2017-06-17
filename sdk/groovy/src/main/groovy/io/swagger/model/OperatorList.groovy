package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.Operator;
import java.util.List;
@Canonical
class OperatorList {

    String errorcode = null

    String errormessage = null

    Integer numberofresults = null

    String timestamp = null

    List<Operator> results = new ArrayList<Operator>()
  

}

