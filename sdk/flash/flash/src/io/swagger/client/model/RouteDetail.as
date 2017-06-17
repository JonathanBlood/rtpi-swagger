package io.swagger.client.model {

import io.swagger.client.model.Stop;

    [XmlRootNode(name="RouteDetail")]
    public class RouteDetail {
                [XmlElement(name="operator")]
        public var operator: String = null;
                [XmlElement(name="origin")]
        public var origin: String = null;
                [XmlElement(name="originlocalized")]
        public var originlocalized: String = null;
                [XmlElement(name="destination")]
        public var destination: String = null;
                [XmlElement(name="destinationlocalized")]
        public var destinationlocalized: String = null;
                [XmlElement(name="lastupdated")]
        public var lastupdated: String = null;
                // This declaration below of _stops_obj_class is to force flash compiler to include this class
        private var _stops_obj_class: Array = null;
        [XmlElementWrapper(name="stops")]
        [XmlElements(name="stops", type="Array")]
                public var stops: Array = new Array();

    public function toString(): String {
        var str: String = "RouteDetail: ";
        str += " (operator: " + operator + ")";
        str += " (origin: " + origin + ")";
        str += " (originlocalized: " + originlocalized + ")";
        str += " (destination: " + destination + ")";
        str += " (destinationlocalized: " + destinationlocalized + ")";
        str += " (lastupdated: " + lastupdated + ")";
        str += " (stops: " + stops + ")";
        return str;
    }

}

}
