package io.swagger.client.model {


    [XmlRootNode(name="RealTimeInformation")]
    public class RealTimeInformation {
                [XmlElement(name="arrivaldatetime")]
        public var arrivaldatetime: String = null;
                [XmlElement(name="duetime")]
        public var duetime: String = null;
                [XmlElement(name="departuredatetime")]
        public var departuredatetime: String = null;
                [XmlElement(name="departureduetime")]
        public var departureduetime: String = null;
                [XmlElement(name="scheduledarrivaldatetime")]
        public var scheduledarrivaldatetime: String = null;
                [XmlElement(name="scheduleddeparturedatetime")]
        public var scheduleddeparturedatetime: String = null;
                [XmlElement(name="destination")]
        public var destination: String = null;
                [XmlElement(name="destinationlocalized")]
        public var destinationlocalized: String = null;
                [XmlElement(name="origin")]
        public var origin: String = null;
                [XmlElement(name="originlocalized")]
        public var originlocalized: String = null;
                [XmlElement(name="direction")]
        public var direction: String = null;
                [XmlElement(name="operator")]
        public var operator: String = null;
                [XmlElement(name="additionalinformation")]
        public var additionalinformation: String = null;
                [XmlElement(name="lowfloorstatus")]
        public var lowfloorstatus: String = null;
                [XmlElement(name="route")]
        public var route: String = null;
                [XmlElement(name="sourcetimestamp")]
        public var sourcetimestamp: String = null;
                [XmlElement(name="monitored")]
        public var monitored: String = null;

    public function toString(): String {
        var str: String = "RealTimeInformation: ";
        str += " (arrivaldatetime: " + arrivaldatetime + ")";
        str += " (duetime: " + duetime + ")";
        str += " (departuredatetime: " + departuredatetime + ")";
        str += " (departureduetime: " + departureduetime + ")";
        str += " (scheduledarrivaldatetime: " + scheduledarrivaldatetime + ")";
        str += " (scheduleddeparturedatetime: " + scheduleddeparturedatetime + ")";
        str += " (destination: " + destination + ")";
        str += " (destinationlocalized: " + destinationlocalized + ")";
        str += " (origin: " + origin + ")";
        str += " (originlocalized: " + originlocalized + ")";
        str += " (direction: " + direction + ")";
        str += " (operator: " + operator + ")";
        str += " (additionalinformation: " + additionalinformation + ")";
        str += " (lowfloorstatus: " + lowfloorstatus + ")";
        str += " (route: " + route + ")";
        str += " (sourcetimestamp: " + sourcetimestamp + ")";
        str += " (monitored: " + monitored + ")";
        return str;
    }

}

}
