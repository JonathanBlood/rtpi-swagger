(ns rtpi-rest-web-services-api.api.bus-stop-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-bus-stops-with-http-info
  "Endpoint to retrieve bus stop information"
  ([] (get-bus-stops-with-http-info nil))
  ([{:keys [format operator stopid stopname ]}]
   (call-api "/busstopinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format "operator" operator "stopid" stopid "stopname" stopname }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-bus-stops
  "Endpoint to retrieve bus stop information"
  ([] (get-bus-stops nil))
  ([optional-params]
   (:data (get-bus-stops-with-http-info optional-params))))

