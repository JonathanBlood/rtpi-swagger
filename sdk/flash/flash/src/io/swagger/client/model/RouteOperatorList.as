package io.swagger.client.model {

import io.swagger.common.ListWrapper;

    public class RouteOperatorList implements ListWrapper {
        // This declaration below of _RouteOperator_obj_class is to force flash compiler to include this class
        private var _routeOperator_obj_class: io.swagger.client.model.RouteOperator = null;
        [XmlElements(name="routeOperator", type="io.swagger.client.model.RouteOperator")]
        public var routeOperator: Array = new Array();

        public function getList(): Array{
            return routeOperator;
        }

}

}
