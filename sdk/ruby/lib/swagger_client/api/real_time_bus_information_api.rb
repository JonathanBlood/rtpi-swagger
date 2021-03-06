=begin
#RTPI REST Web Services API

#<p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=end

require "uri"

module SwaggerClient
  class RealTimeBusInformationApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end

    # Endpoint to retrieve real time bus information
    # 
    # @param stopid The bus stop id
    # @param [Hash] opts the optional parameters
    # @option opts [String] :format If not provided JSON format will be used by default
    # @option opts [String] :operator If provided retrieves routes for the given operator
    # @option opts [String] :routeid The route identifier
    # @option opts [String] :maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
    # @return [RealTimeInformationList]
    def get_real_time_bus_information(stopid, opts = {})
      data, _status_code, _headers = get_real_time_bus_information_with_http_info(stopid, opts)
      return data
    end

    # Endpoint to retrieve real time bus information
    # 
    # @param stopid The bus stop id
    # @param [Hash] opts the optional parameters
    # @option opts [String] :format If not provided JSON format will be used by default
    # @option opts [String] :operator If provided retrieves routes for the given operator
    # @option opts [String] :routeid The route identifier
    # @option opts [String] :maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration
    # @return [Array<(RealTimeInformationList, Fixnum, Hash)>] RealTimeInformationList data, response status code and response headers
    def get_real_time_bus_information_with_http_info(stopid, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: RealTimeBusInformationApi.get_real_time_bus_information ..."
      end
      # verify the required parameter 'stopid' is set
      fail ArgumentError, "Missing the required parameter 'stopid' when calling RealTimeBusInformationApi.get_real_time_bus_information" if stopid.nil?
      if opts[:'format'] && !['json', 'xml'].include?(opts[:'format'])
        fail ArgumentError, 'invalid value for "format", must be one of json, xml'
      end
      if opts[:'operator'] && !['BE', 'bac', 'KB', 'LUAS', 'ir'].include?(opts[:'operator'])
        fail ArgumentError, 'invalid value for "operator", must be one of BE, bac, KB, LUAS, ir'
      end
      # resource path
      local_var_path = "/realtimebusinformation".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'stopid'] = stopid
      query_params[:'format'] = opts[:'format'] if !opts[:'format'].nil?
      query_params[:'operator'] = opts[:'operator'] if !opts[:'operator'].nil?
      query_params[:'routeid'] = opts[:'routeid'] if !opts[:'routeid'].nil?
      query_params[:'maxresults'] = opts[:'maxresults'] if !opts[:'maxresults'].nil?

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = ['application/json', 'application/xml']
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = ['application/json', 'application/xml']
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'RealTimeInformationList')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: RealTimeBusInformationApi#get_real_time_bus_information\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
