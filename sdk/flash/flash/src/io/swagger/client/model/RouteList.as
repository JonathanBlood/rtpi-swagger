package io.swagger.client.model {

import io.swagger.client.model.Route;

    [XmlRootNode(name="RouteList")]
    public class RouteList {
                [XmlElement(name="errorcode")]
        public var errorcode: String = null;
                [XmlElement(name="errormessage")]
        public var errormessage: String = null;
                [XmlElement(name="numberofresults")]
        public var numberofresults: Number = 0;
                [XmlElement(name="timestamp")]
        public var timestamp: String = null;
                // This declaration below of _results_obj_class is to force flash compiler to include this class
        private var _results_obj_class: Array = null;
        [XmlElementWrapper(name="results")]
        [XmlElements(name="results", type="Array")]
                public var results: Array = new Array();

    public function toString(): String {
        var str: String = "RouteList: ";
        str += " (errorcode: " + errorcode + ")";
        str += " (errormessage: " + errormessage + ")";
        str += " (numberofresults: " + numberofresults + ")";
        str += " (timestamp: " + timestamp + ")";
        str += " (results: " + results + ")";
        return str;
    }

}

}
