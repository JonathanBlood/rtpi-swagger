(ns rtpi-rest-web-services-api.api.timetable-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-time-table-with-http-info
  "Endpoint to retrieve timetable information"
  ([type stopid routeid ] (get-time-table-with-http-info type stopid routeid nil))
  ([type stopid routeid {:keys [format ]}]
   (call-api "/timetableinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format "type" type "stopid" stopid "routeid" routeid }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-time-table
  "Endpoint to retrieve timetable information"
  ([type stopid routeid ] (get-time-table type stopid routeid nil))
  ([type stopid routeid optional-params]
   (:data (get-time-table-with-http-info type stopid routeid optional-params))))

