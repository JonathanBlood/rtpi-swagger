=begin comment

RTPI REST Web Services API

<p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 

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

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::TimetableInformationApi;

require 5.6.0;
use strict;
use warnings;
use utf8; 
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::SwaggerClient::ApiClient;
use WWW::SwaggerClient::Configuration;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class   = shift;
    my (%self) = (
        'api_client' => WWW::SwaggerClient::ApiClient->instance,
        @_
    );

    #my $self = {
    #    #api_client => $options->{api_client}
    #    api_client => $default_api_client
    #}; 

    bless \%self, $class;

}


#
# get_time_table
#
# Endpoint to retrieve timetable information
# 
# @param string $type value: week; Time table information is retrieved for the whole week (required)
# @param string $stopid The bus stop id, if not provided all bus stops are returned (required)
# @param string $routeid The route identifier (required)
# @param string $format If not provided JSON format will be used by default (optional)
{
    my $params = {
    'type' => {
        data_type => 'string',
        description => 'value: week; Time table information is retrieved for the whole week',
        required => '1',
    },
    'stopid' => {
        data_type => 'string',
        description => 'The bus stop id, if not provided all bus stops are returned',
        required => '1',
    },
    'routeid' => {
        data_type => 'string',
        description => 'The route identifier',
        required => '1',
    },
    'format' => {
        data_type => 'string',
        description => 'If not provided JSON format will be used by default',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'get_time_table' } = { 
    	summary => 'Endpoint to retrieve timetable information',
        params => $params,
        returns => 'TimetableList',
        };
}
# @return TimetableList
#
sub get_time_table {
    my ($self, %args) = @_;

    # verify the required parameter 'type' is set
    unless (exists $args{'type'}) {
      croak("Missing the required parameter 'type' when calling get_time_table");
    }

    # verify the required parameter 'stopid' is set
    unless (exists $args{'stopid'}) {
      croak("Missing the required parameter 'stopid' when calling get_time_table");
    }

    # verify the required parameter 'routeid' is set
    unless (exists $args{'routeid'}) {
      croak("Missing the required parameter 'routeid' when calling get_time_table");
    }

    # parse inputs
    my $_resource_path = '/timetableinformation';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept('application/json', 'application/xml');
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type('application/json', 'application/xml');

    # query params
    if ( exists $args{'format'}) {
        $query_params->{'format'} = $self->{api_client}->to_query_value($args{'format'});
    }

    # query params
    if ( exists $args{'type'}) {
        $query_params->{'type'} = $self->{api_client}->to_query_value($args{'type'});
    }

    # query params
    if ( exists $args{'stopid'}) {
        $query_params->{'stopid'} = $self->{api_client}->to_query_value($args{'stopid'});
    }

    # query params
    if ( exists $args{'routeid'}) {
        $query_params->{'routeid'} = $self->{api_client}->to_query_value($args{'routeid'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw()];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('TimetableList', $response);
    return $_response_object;
}

1;
