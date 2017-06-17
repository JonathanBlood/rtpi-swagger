(ns rtpi-rest-web-services-api.api.operator-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-operators-with-http-info
  "Endpoint to retrieve information about route operators in the system"
  ([] (get-operators-with-http-info nil))
  ([{:keys [format ]}]
   (call-api "/operatorinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-operators
  "Endpoint to retrieve information about route operators in the system"
  ([] (get-operators nil))
  ([optional-params]
   (:data (get-operators-with-http-info optional-params))))

