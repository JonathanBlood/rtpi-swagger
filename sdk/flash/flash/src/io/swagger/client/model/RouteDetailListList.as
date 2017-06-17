package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.RouteDetail;

    public class RouteDetailListList implements ListWrapper {
        // This declaration below of _RouteDetailList_obj_class is to force flash compiler to include this class
        private var _routeDetailList_obj_class: io.swagger.client.model.RouteDetailList = null;
        [XmlElements(name="routeDetailList", type="io.swagger.client.model.RouteDetailList")]
        public var routeDetailList: Array = new Array();

        public function getList(): Array{
            return routeDetailList;
        }

}

}
