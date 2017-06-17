//
// RouteList.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class RouteList: JSONEncodable {
    public var errorcode: String?
    public var errormessage: String?
    public var numberofresults: Int32?
    public var timestamp: String?
    public var results: [Route]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["errorcode"] = self.errorcode
        nillableDictionary["errormessage"] = self.errormessage
        nillableDictionary["numberofresults"] = self.numberofresults?.encodeToJSON()
        nillableDictionary["timestamp"] = self.timestamp
        nillableDictionary["results"] = self.results?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
