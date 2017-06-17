package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.Timetable;

    public class TimetableListList implements ListWrapper {
        // This declaration below of _TimetableList_obj_class is to force flash compiler to include this class
        private var _timetableList_obj_class: io.swagger.client.model.TimetableList = null;
        [XmlElements(name="timetableList", type="io.swagger.client.model.TimetableList")]
        public var timetableList: Array = new Array();

        public function getList(): Array{
            return timetableList;
        }

}

}
