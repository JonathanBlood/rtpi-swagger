//
// Operator.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Operator: JSONEncodable {
    public var operatorreference: String?
    public var operatorname: String?
    public var operatordescription: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["operatorreference"] = self.operatorreference
        nillableDictionary["operatorname"] = self.operatorname
        nillableDictionary["operatordescription"] = self.operatordescription
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
