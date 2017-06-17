(defproject rtpi-rest-web-services-api "1.0.0"
  :description "<p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus
information, timetables and bus stops.
</p>
<p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>

<h2>Error Codes</h2>
<table>
<tr><th>Error Code</th><th>Description</th></tr>
<tr><td>0</td><td>Success</td></tr>
<tr><td>1</td><td>No Results</td></tr>
<tr><td>2</td><td>Missing Parameter</td></tr>
<tr><td>3</td><td>Invalid Parameter</td></tr>
<tr><td>4</td><td>Sceduled Downtime</td></tr>
<tr><td>5</td><td>Unexpected System Error</td></tr>
</table>
<p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p>"
  :dependencies [[org.clojure/clojure "1.7.0"]
                 [clj-http "2.0.0"]
                 [cheshire "5.5.0"]])
