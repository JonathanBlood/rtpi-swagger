package io.swagger.client.model {


    [XmlRootNode(name="Operator")]
    public class Operator {
                [XmlElement(name="operatorreference")]
        public var operatorreference: String = null;
                [XmlElement(name="operatorname")]
        public var operatorname: String = null;
                [XmlElement(name="operatordescription")]
        public var operatordescription: String = null;

    public function toString(): String {
        var str: String = "Operator: ";
        str += " (operatorreference: " + operatorreference + ")";
        str += " (operatorname: " + operatorname + ")";
        str += " (operatordescription: " + operatordescription + ")";
        return str;
    }

}

}
