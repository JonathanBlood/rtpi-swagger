package io.swagger.client.model {


    [XmlRootNode(name="Timetable")]
    public class Timetable {
                [XmlElement(name="startdayofweek")]
        public var startdayofweek: String = null;
                [XmlElement(name="enddayofweek")]
        public var enddayofweek: String = null;
                [XmlElement(name="destination")]
        public var destination: String = null;
                [XmlElement(name="destinationlocalized")]
        public var destinationlocalized: String = null;
                [XmlElement(name="lastupdated")]
        public var lastupdated: String = null;
                // This declaration below of _departures_obj_class is to force flash compiler to include this class
        private var _departures_obj_class: Array = null;
        [XmlElementWrapper(name="departures")]
        [XmlElements(name="departures", type="Array")]
                public var departures: Array = new Array();

    public function toString(): String {
        var str: String = "Timetable: ";
        str += " (startdayofweek: " + startdayofweek + ")";
        str += " (enddayofweek: " + enddayofweek + ")";
        str += " (destination: " + destination + ")";
        str += " (destinationlocalized: " + destinationlocalized + ")";
        str += " (lastupdated: " + lastupdated + ")";
        str += " (departures: " + departures + ")";
        return str;
    }

}

}
