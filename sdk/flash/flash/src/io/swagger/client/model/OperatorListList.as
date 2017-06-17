package io.swagger.client.model {

import io.swagger.common.ListWrapper;
import io.swagger.client.model.Operator;

    public class OperatorListList implements ListWrapper {
        // This declaration below of _OperatorList_obj_class is to force flash compiler to include this class
        private var _operatorList_obj_class: io.swagger.client.model.OperatorList = null;
        [XmlElements(name="operatorList", type="io.swagger.client.model.OperatorList")]
        public var operatorList: Array = new Array();

        public function getList(): Array{
            return operatorList;
        }

}

}
