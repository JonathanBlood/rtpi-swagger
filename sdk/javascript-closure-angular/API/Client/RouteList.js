goog.provide('API.Client.RouteList');

/**
 * @record
 */
API.Client.RouteList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.RouteList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.RouteList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.Route>}
 * @export
 */
API.Client.RouteList.prototype.results;

