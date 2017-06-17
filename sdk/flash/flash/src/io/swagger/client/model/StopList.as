package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.RouteOperator;

    public class StopList implements ListWrapper {
        // This declaration below of _Stop_obj_class is to force flash compiler to include this class
        private var _stop_obj_class: io.swagger.client.model.Stop = null;
        [XmlElements(name="stop", type="io.swagger.client.model.Stop")]
        public var stop: Array = new Array();

        public function getList(): Array{
            return stop;
        }

}

}
