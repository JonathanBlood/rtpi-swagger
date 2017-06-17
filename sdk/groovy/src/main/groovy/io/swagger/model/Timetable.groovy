package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import java.util.List;
@Canonical
class Timetable {

    String startdayofweek = null

    String enddayofweek = null

    String destination = null

    String destinationlocalized = null

    String lastupdated = null

    List<String> departures = new ArrayList<String>()
  

}

