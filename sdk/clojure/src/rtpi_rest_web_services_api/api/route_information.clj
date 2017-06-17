(ns rtpi-rest-web-services-api.api.route-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-routes-with-http-info
  "Endpoint to retrieve list of routes"
  ([] (get-routes-with-http-info nil))
  ([{:keys [format operator ]}]
   (call-api "/routelistinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format "operator" operator }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-routes
  "Endpoint to retrieve list of routes"
  ([] (get-routes nil))
  ([optional-params]
   (:data (get-routes-with-http-info optional-params))))

