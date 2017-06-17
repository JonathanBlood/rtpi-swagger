goog.provide('API.Client.OperatorList');

/**
 * @record
 */
API.Client.OperatorList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.OperatorList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.OperatorList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.OperatorList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.OperatorList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.Operator>}
 * @export
 */
API.Client.OperatorList.prototype.results;

