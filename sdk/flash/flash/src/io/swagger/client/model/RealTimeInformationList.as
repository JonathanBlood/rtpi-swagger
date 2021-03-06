package io.swagger.client.model {

import io.swagger.client.model.RealTimeInformation;

    [XmlRootNode(name="RealTimeInformationList")]
    public class RealTimeInformationList {
                [XmlElement(name="errorcode")]
        public var errorcode: String = null;
                [XmlElement(name="errormessage")]
        public var errormessage: String = null;
                [XmlElement(name="numberofresults")]
        public var numberofresults: Number = 0;
                [XmlElement(name="stopid")]
        public var stopid: String = null;
                [XmlElement(name="timestamp")]
        public var timestamp: String = null;
                // This declaration below of _results_obj_class is to force flash compiler to include this class
        private var _results_obj_class: Array = null;
        [XmlElementWrapper(name="results")]
        [XmlElements(name="results", type="Array")]
                public var results: Array = new Array();

    public function toString(): String {
        var str: String = "RealTimeInformationList: ";
        str += " (errorcode: " + errorcode + ")";
        str += " (errormessage: " + errormessage + ")";
        str += " (numberofresults: " + numberofresults + ")";
        str += " (stopid: " + stopid + ")";
        str += " (timestamp: " + timestamp + ")";
        str += " (results: " + results + ")";
        return str;
    }

}

}
