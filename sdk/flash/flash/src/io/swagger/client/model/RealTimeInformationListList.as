package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.RealTimeInformation;

    public class RealTimeInformationListList implements ListWrapper {
        // This declaration below of _RealTimeInformationList_obj_class is to force flash compiler to include this class
        private var _realTimeInformationList_obj_class: io.swagger.client.model.RealTimeInformationList = null;
        [XmlElements(name="realTimeInformationList", type="io.swagger.client.model.RealTimeInformationList")]
        public var realTimeInformationList: Array = new Array();

        public function getList(): Array{
            return realTimeInformationList;
        }

}

}
