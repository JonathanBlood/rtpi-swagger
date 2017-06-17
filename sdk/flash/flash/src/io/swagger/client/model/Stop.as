package io.swagger.client.model {

import io.swagger.client.model.RouteOperator;

    [XmlRootNode(name="Stop")]
    public class Stop {
                [XmlElement(name="stopid")]
        public var stopid: String = null;
                [XmlElement(name="displaystopid")]
        public var displaystopid: String = null;
                [XmlElement(name="shortname")]
        public var shortname: String = null;
                [XmlElement(name="shortnamelocalized")]
        public var shortnamelocalized: String = null;
                [XmlElement(name="fullname")]
        public var fullname: String = null;
                [XmlElement(name="fullnamelocalized")]
        public var fullnamelocalized: String = null;
                [XmlElement(name="latitude")]
        public var latitude: String = null;
                [XmlElement(name="longitude")]
        public var longitude: String = null;
                // This declaration below of _operators_obj_class is to force flash compiler to include this class
        private var _operators_obj_class: Array = null;
        [XmlElementWrapper(name="operators")]
        [XmlElements(name="operators", type="Array")]
                public var operators: Array = new Array();

    public function toString(): String {
        var str: String = "Stop: ";
        str += " (stopid: " + stopid + ")";
        str += " (displaystopid: " + displaystopid + ")";
        str += " (shortname: " + shortname + ")";
        str += " (shortnamelocalized: " + shortnamelocalized + ")";
        str += " (fullname: " + fullname + ")";
        str += " (fullnamelocalized: " + fullnamelocalized + ")";
        str += " (latitude: " + latitude + ")";
        str += " (longitude: " + longitude + ")";
        str += " (operators: " + operators + ")";
        return str;
    }

}

}
