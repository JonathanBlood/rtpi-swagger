goog.provide('API.Client.TimetableList');

/**
 * @record
 */
API.Client.TimetableList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.TimetableList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.TimetableList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.TimetableList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.TimetableList.prototype.route;

/**
 * @type {!string}
 * @export
 */
API.Client.TimetableList.prototype.stopid;

/**
 * @type {!string}
 * @export
 */
API.Client.TimetableList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.Timetable>}
 * @export
 */
API.Client.TimetableList.prototype.results;

