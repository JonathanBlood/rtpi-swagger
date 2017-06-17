goog.provide('API.Client.BusStopList');

/**
 * @record
 */
API.Client.BusStopList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.BusStopList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.BusStopList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.BusStopList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.BusStopList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.Stop>}
 * @export
 */
API.Client.BusStopList.prototype.results;

