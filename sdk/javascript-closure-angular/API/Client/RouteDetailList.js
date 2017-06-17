goog.provide('API.Client.RouteDetailList');

/**
 * @record
 */
API.Client.RouteDetailList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetailList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetailList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.RouteDetailList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetailList.prototype.route;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetailList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.RouteDetail>}
 * @export
 */
API.Client.RouteDetailList.prototype.results;

