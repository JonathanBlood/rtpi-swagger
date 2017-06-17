(ns rtpi-rest-web-services-api.api.route-detail-information
  (:require [rtpi-rest-web-services-api.core :refer [call-api check-required-params with-collection-format]])
  (:import (java.io File)))

(defn get-route-detail-with-http-info
  "Endpoint to retrieve route detail information"
  ([operator routeid ] (get-route-detail-with-http-info operator routeid nil))
  ([operator routeid {:keys [format ]}]
   (call-api "/routeinformation" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"format" format "operator" operator "routeid" routeid }
              :form-params   {}
              :content-types ["application/json" "application/xml"]
              :accepts       ["application/json" "application/xml"]
              :auth-names    []})))

(defn get-route-detail
  "Endpoint to retrieve route detail information"
  ([operator routeid ] (get-route-detail operator routeid nil))
  ([operator routeid optional-params]
   (:data (get-route-detail-with-http-info operator routeid optional-params))))

