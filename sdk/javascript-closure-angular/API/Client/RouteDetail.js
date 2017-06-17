goog.provide('API.Client.RouteDetail');

/**
 * @record
 */
API.Client.RouteDetail = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.operator;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.origin;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.originlocalized;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.destination;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.destinationlocalized;

/**
 * @type {!string}
 * @export
 */
API.Client.RouteDetail.prototype.lastupdated;

/**
 * @type {!Array<!API.Client.Stop>}
 * @export
 */
API.Client.RouteDetail.prototype.stops;

