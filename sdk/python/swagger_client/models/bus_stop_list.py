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


class BusStopList(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, errorcode=None, errormessage=None, numberofresults=None, timestamp=None, results=None):
        """
        BusStopList - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'errorcode': 'str',
            'errormessage': 'str',
            'numberofresults': 'int',
            'timestamp': 'str',
            'results': 'list[Stop]'
        }

        self.attribute_map = {
            'errorcode': 'errorcode',
            'errormessage': 'errormessage',
            'numberofresults': 'numberofresults',
            'timestamp': 'timestamp',
            'results': 'results'
        }

        self._errorcode = errorcode
        self._errormessage = errormessage
        self._numberofresults = numberofresults
        self._timestamp = timestamp
        self._results = results

    @property
    def errorcode(self):
        """
        Gets the errorcode of this BusStopList.


        :return: The errorcode of this BusStopList.
        :rtype: str
        """
        return self._errorcode

    @errorcode.setter
    def errorcode(self, errorcode):
        """
        Sets the errorcode of this BusStopList.


        :param errorcode: The errorcode of this BusStopList.
        :type: str
        """

        self._errorcode = errorcode

    @property
    def errormessage(self):
        """
        Gets the errormessage of this BusStopList.


        :return: The errormessage of this BusStopList.
        :rtype: str
        """
        return self._errormessage

    @errormessage.setter
    def errormessage(self, errormessage):
        """
        Sets the errormessage of this BusStopList.


        :param errormessage: The errormessage of this BusStopList.
        :type: str
        """

        self._errormessage = errormessage

    @property
    def numberofresults(self):
        """
        Gets the numberofresults of this BusStopList.


        :return: The numberofresults of this BusStopList.
        :rtype: int
        """
        return self._numberofresults

    @numberofresults.setter
    def numberofresults(self, numberofresults):
        """
        Sets the numberofresults of this BusStopList.


        :param numberofresults: The numberofresults of this BusStopList.
        :type: int
        """

        self._numberofresults = numberofresults

    @property
    def timestamp(self):
        """
        Gets the timestamp of this BusStopList.


        :return: The timestamp of this BusStopList.
        :rtype: str
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """
        Sets the timestamp of this BusStopList.


        :param timestamp: The timestamp of this BusStopList.
        :type: str
        """

        self._timestamp = timestamp

    @property
    def results(self):
        """
        Gets the results of this BusStopList.


        :return: The results of this BusStopList.
        :rtype: list[Stop]
        """
        return self._results

    @results.setter
    def results(self, results):
        """
        Sets the results of this BusStopList.


        :param results: The results of this BusStopList.
        :type: list[Stop]
        """

        self._results = results

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
