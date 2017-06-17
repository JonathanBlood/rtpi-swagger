(ns rtpi-rest-web-services-api.api.real-time-bus-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-real-time-bus-information-with-http-info
  "Endpoint to retrieve real time bus information"
  ([stopid ] (get-real-time-bus-information-with-http-info stopid nil))
  ([stopid {:keys [format operator routeid maxresults ]}]
   (call-api "/realtimebusinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format "operator" operator "stopid" stopid "routeid" routeid "maxresults" maxresults }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-real-time-bus-information
  "Endpoint to retrieve real time bus information"
  ([stopid ] (get-real-time-bus-information stopid nil))
  ([stopid optional-params]
   (:data (get-real-time-bus-information-with-http-info stopid optional-params))))

