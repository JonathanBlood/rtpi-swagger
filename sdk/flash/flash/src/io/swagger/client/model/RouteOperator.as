package io.swagger.client.model {


    [XmlRootNode(name="RouteOperator")]
    public class RouteOperator {
                [XmlElement(name="name")]
        public var name: String = null;
                // This declaration below of _routes_obj_class is to force flash compiler to include this class
        private var _routes_obj_class: Array = null;
        [XmlElementWrapper(name="routes")]
        [XmlElements(name="routes", type="Array")]
                public var routes: Array = new Array();

    public function toString(): String {
        var str: String = "RouteOperator: ";
        str += " (name: " + name + ")";
        str += " (routes: " + routes + ")";
        return str;
    }

}

}
