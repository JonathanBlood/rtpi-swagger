package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.Route;

    public class RouteListList implements ListWrapper {
        // This declaration below of _RouteList_obj_class is to force flash compiler to include this class
        private var _routeList_obj_class: io.swagger.client.model.RouteList = null;
        [XmlElements(name="routeList", type="io.swagger.client.model.RouteList")]
        public var routeList: Array = new Array();

        public function getList(): Array{
            return routeList;
        }

}

}
