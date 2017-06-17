goog.provide('API.Client.RealTimeInformationList');

/**
 * @record
 */
API.Client.RealTimeInformationList = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.RealTimeInformationList.prototype.errorcode;

/**
 * @type {!string}
 * @export
 */
API.Client.RealTimeInformationList.prototype.errormessage;

/**
 * @type {!number}
 * @export
 */
API.Client.RealTimeInformationList.prototype.numberofresults;

/**
 * @type {!string}
 * @export
 */
API.Client.RealTimeInformationList.prototype.stopid;

/**
 * @type {!string}
 * @export
 */
API.Client.RealTimeInformationList.prototype.timestamp;

/**
 * @type {!Array<!API.Client.RealTimeInformation>}
 * @export
 */
API.Client.RealTimeInformationList.prototype.results;

