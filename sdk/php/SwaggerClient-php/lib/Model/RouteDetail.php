<?php
/**
 * RouteDetail
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * RTPI REST Web Services API
 *
 * <p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p>
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * RouteDetail Class Doc Comment
 *
 * @category    Class */
/** 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class RouteDetail implements ArrayAccess
{
    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'RouteDetail';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = array(
        'operator' => 'string',
        'origin' => 'string',
        'originlocalized' => 'string',
        'destination' => 'string',
        'destinationlocalized' => 'string',
        'lastupdated' => 'string',
        'stops' => '\Swagger\Client\Model\Stop[]'
    );

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = array(
        'operator' => 'operator',
        'origin' => 'origin',
        'originlocalized' => 'originlocalized',
        'destination' => 'destination',
        'destinationlocalized' => 'destinationlocalized',
        'lastupdated' => 'lastupdated',
        'stops' => 'stops'
    );

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = array(
        'operator' => 'setOperator',
        'origin' => 'setOrigin',
        'originlocalized' => 'setOriginlocalized',
        'destination' => 'setDestination',
        'destinationlocalized' => 'setDestinationlocalized',
        'lastupdated' => 'setLastupdated',
        'stops' => 'setStops'
    );

    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = array(
        'operator' => 'getOperator',
        'origin' => 'getOrigin',
        'originlocalized' => 'getOriginlocalized',
        'destination' => 'getDestination',
        'destinationlocalized' => 'getDestinationlocalized',
        'lastupdated' => 'getLastupdated',
        'stops' => 'getStops'
    );

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = array();

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['operator'] = isset($data['operator']) ? $data['operator'] : null;
        $this->container['origin'] = isset($data['origin']) ? $data['origin'] : null;
        $this->container['originlocalized'] = isset($data['originlocalized']) ? $data['originlocalized'] : null;
        $this->container['destination'] = isset($data['destination']) ? $data['destination'] : null;
        $this->container['destinationlocalized'] = isset($data['destinationlocalized']) ? $data['destinationlocalized'] : null;
        $this->container['lastupdated'] = isset($data['lastupdated']) ? $data['lastupdated'] : null;
        $this->container['stops'] = isset($data['stops']) ? $data['stops'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = array();
        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properteis are valid
     */
    public function valid()
    {
        return true;
    }


    /**
     * Gets operator
     * @return string
     */
    public function getOperator()
    {
        return $this->container['operator'];
    }

    /**
     * Sets operator
     * @param string $operator
     * @return $this
     */
    public function setOperator($operator)
    {
        $this->container['operator'] = $operator;

        return $this;
    }

    /**
     * Gets origin
     * @return string
     */
    public function getOrigin()
    {
        return $this->container['origin'];
    }

    /**
     * Sets origin
     * @param string $origin
     * @return $this
     */
    public function setOrigin($origin)
    {
        $this->container['origin'] = $origin;

        return $this;
    }

    /**
     * Gets originlocalized
     * @return string
     */
    public function getOriginlocalized()
    {
        return $this->container['originlocalized'];
    }

    /**
     * Sets originlocalized
     * @param string $originlocalized
     * @return $this
     */
    public function setOriginlocalized($originlocalized)
    {
        $this->container['originlocalized'] = $originlocalized;

        return $this;
    }

    /**
     * Gets destination
     * @return string
     */
    public function getDestination()
    {
        return $this->container['destination'];
    }

    /**
     * Sets destination
     * @param string $destination
     * @return $this
     */
    public function setDestination($destination)
    {
        $this->container['destination'] = $destination;

        return $this;
    }

    /**
     * Gets destinationlocalized
     * @return string
     */
    public function getDestinationlocalized()
    {
        return $this->container['destinationlocalized'];
    }

    /**
     * Sets destinationlocalized
     * @param string $destinationlocalized
     * @return $this
     */
    public function setDestinationlocalized($destinationlocalized)
    {
        $this->container['destinationlocalized'] = $destinationlocalized;

        return $this;
    }

    /**
     * Gets lastupdated
     * @return string
     */
    public function getLastupdated()
    {
        return $this->container['lastupdated'];
    }

    /**
     * Sets lastupdated
     * @param string $lastupdated
     * @return $this
     */
    public function setLastupdated($lastupdated)
    {
        $this->container['lastupdated'] = $lastupdated;

        return $this;
    }

    /**
     * Gets stops
     * @return \Swagger\Client\Model\Stop[]
     */
    public function getStops()
    {
        return $this->container['stops'];
    }

    /**
     * Sets stops
     * @param \Swagger\Client\Model\Stop[] $stops
     * @return $this
     */
    public function setStops($stops)
    {
        $this->container['stops'] = $stops;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


