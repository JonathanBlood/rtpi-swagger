package io.swagger.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.ArrayList;
import io.swagger.model.Timetable;
import java.util.List;
@Canonical
class TimetableList {

    String errorcode = null

    String errormessage = null

    Integer numberofresults = null

    String route = null

    String stopid = null

    String timestamp = null

    List<Timetable> results = new ArrayList<Timetable>()
  

}

