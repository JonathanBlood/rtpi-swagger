package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.Stop;

    public class BusStopListList implements ListWrapper {
        // This declaration below of _BusStopList_obj_class is to force flash compiler to include this class
        private var _busStopList_obj_class: io.swagger.client.model.BusStopList = null;
        [XmlElements(name="busStopList", type="io.swagger.client.model.BusStopList")]
        public var busStopList: Array = new Array();

        public function getList(): Array{
            return busStopList;
        }

}

}
