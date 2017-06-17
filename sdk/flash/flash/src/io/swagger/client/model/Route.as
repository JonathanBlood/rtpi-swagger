package io.swagger.client.model {


    [XmlRootNode(name="Route")]
    public class Route {
                [XmlElement(name="operator")]
        public var operator: String = null;
                [XmlElement(name="route")]
        public var route: String = null;

    public function toString(): String {
        var str: String = "Route: ";
        str += " (operator: " + operator + ")";
        str += " (route: " + route + ")";
        return str;
    }

}

}
