# coding: utf-8

"""
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
"""

from pprint import pformat
from six import iteritems
import re


class RouteDetail(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, operator=None, origin=None, originlocalized=None, destination=None, destinationlocalized=None, lastupdated=None, stops=None):
        """
        RouteDetail - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'operator': 'str',
            'origin': 'str',
            'originlocalized': 'str',
            'destination': 'str',
            'destinationlocalized': 'str',
            'lastupdated': 'str',
            'stops': 'list[Stop]'
        }

        self.attribute_map = {
            'operator': 'operator',
            'origin': 'origin',
            'originlocalized': 'originlocalized',
            'destination': 'destination',
            'destinationlocalized': 'destinationlocalized',
            'lastupdated': 'lastupdated',
            'stops': 'stops'
        }

        self._operator = operator
        self._origin = origin
        self._originlocalized = originlocalized
        self._destination = destination
        self._destinationlocalized = destinationlocalized
        self._lastupdated = lastupdated
        self._stops = stops

    @property
    def operator(self):
        """
        Gets the operator of this RouteDetail.


        :return: The operator of this RouteDetail.
        :rtype: str
        """
        return self._operator

    @operator.setter
    def operator(self, operator):
        """
        Sets the operator of this RouteDetail.


        :param operator: The operator of this RouteDetail.
        :type: str
        """

        self._operator = operator

    @property
    def origin(self):
        """
        Gets the origin of this RouteDetail.


        :return: The origin of this RouteDetail.
        :rtype: str
        """
        return self._origin

    @origin.setter
    def origin(self, origin):
        """
        Sets the origin of this RouteDetail.


        :param origin: The origin of this RouteDetail.
        :type: str
        """

        self._origin = origin

    @property
    def originlocalized(self):
        """
        Gets the originlocalized of this RouteDetail.


        :return: The originlocalized of this RouteDetail.
        :rtype: str
        """
        return self._originlocalized

    @originlocalized.setter
    def originlocalized(self, originlocalized):
        """
        Sets the originlocalized of this RouteDetail.


        :param originlocalized: The originlocalized of this RouteDetail.
        :type: str
        """

        self._originlocalized = originlocalized

    @property
    def destination(self):
        """
        Gets the destination of this RouteDetail.


        :return: The destination of this RouteDetail.
        :rtype: str
        """
        return self._destination

    @destination.setter
    def destination(self, destination):
        """
        Sets the destination of this RouteDetail.


        :param destination: The destination of this RouteDetail.
        :type: str
        """

        self._destination = destination

    @property
    def destinationlocalized(self):
        """
        Gets the destinationlocalized of this RouteDetail.


        :return: The destinationlocalized of this RouteDetail.
        :rtype: str
        """
        return self._destinationlocalized

    @destinationlocalized.setter
    def destinationlocalized(self, destinationlocalized):
        """
        Sets the destinationlocalized of this RouteDetail.


        :param destinationlocalized: The destinationlocalized of this RouteDetail.
        :type: str
        """

        self._destinationlocalized = destinationlocalized

    @property
    def lastupdated(self):
        """
        Gets the lastupdated of this RouteDetail.


        :return: The lastupdated of this RouteDetail.
        :rtype: str
        """
        return self._lastupdated

    @lastupdated.setter
    def lastupdated(self, lastupdated):
        """
        Sets the lastupdated of this RouteDetail.


        :param lastupdated: The lastupdated of this RouteDetail.
        :type: str
        """

        self._lastupdated = lastupdated

    @property
    def stops(self):
        """
        Gets the stops of this RouteDetail.


        :return: The stops of this RouteDetail.
        :rtype: list[Stop]
        """
        return self._stops

    @stops.setter
    def stops(self, stops):
        """
        Sets the stops of this RouteDetail.


        :param stops: The stops of this RouteDetail.
        :type: list[Stop]
        """

        self._stops = stops

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other