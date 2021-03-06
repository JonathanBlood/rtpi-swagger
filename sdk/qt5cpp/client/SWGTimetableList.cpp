/**
 * RTPI REST Web Services API
 * <p>RTPI REST Web Services API (<a href=\"https://goo.gl/s6NTJe\">RRWS API</a>) provides REST interface to retrieve information on real time bus information, timetables and bus stops. </p> <p>Each method available in RRWS API will be invoked using plain HTTP Request (GET method). Depending on parameters provided, result will be returned either in XML or JSON format (if format is not provided then JSON is used by default). Response will contain requested information (see method specification for details) and error status of the request.</p>  <h2>Error Codes</h2> <table> <tr><th>Error Code</th><th>Description</th></tr> <tr><td>0</td><td>Success</td></tr> <tr><td>1</td><td>No Results</td></tr> <tr><td>2</td><td>Missing Parameter</td></tr> <tr><td>3</td><td>Invalid Parameter</td></tr> <tr><td>4</td><td>Sceduled Downtime</td></tr> <tr><td>5</td><td>Unexpected System Error</td></tr> </table> <p>Error code is included in response for each message. For some error codes additional details will be provided in free text format (Error Message field).</p> 
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGTimetableList.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTimetableList::SWGTimetableList(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTimetableList::SWGTimetableList() {
    init();
}

SWGTimetableList::~SWGTimetableList() {
    this->cleanup();
}

void
SWGTimetableList::init() {
    errorcode = new QString("");
errormessage = new QString("");
numberofresults = 0;
route = new QString("");
stopid = new QString("");
timestamp = new QString("");
results = new QList<SWGTimetable*>();
}

void
SWGTimetableList::cleanup() {
    if(errorcode != NULL) {
        delete errorcode;
    }
if(errormessage != NULL) {
        delete errormessage;
    }

if(route != NULL) {
        delete route;
    }
if(stopid != NULL) {
        delete stopid;
    }
if(timestamp != NULL) {
        delete timestamp;
    }
if(results != NULL) {
        QList<SWGTimetable*>* arr = results;
        foreach(SWGTimetable* o, *arr) {
            delete o;
        }
        delete results;
    }
}

SWGTimetableList*
SWGTimetableList::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTimetableList::fromJsonObject(QJsonObject &pJson) {
    setValue(&errorcode, pJson["errorcode"], "QString", "QString");
setValue(&errormessage, pJson["errormessage"], "QString", "QString");
setValue(&numberofresults, pJson["numberofresults"], "qint32", "");
setValue(&route, pJson["route"], "QString", "QString");
setValue(&stopid, pJson["stopid"], "QString", "QString");
setValue(&timestamp, pJson["timestamp"], "QString", "QString");
setValue(&results, pJson["results"], "QList", "SWGTimetable");
}

QString
SWGTimetableList::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTimetableList::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("errorcode"), errorcode, obj, QString("QString"));
    
        

    
    toJsonValue(QString("errormessage"), errormessage, obj, QString("QString"));
    
        
obj->insert("numberofresults", QJsonValue(numberofresults));

    
    toJsonValue(QString("route"), route, obj, QString("QString"));
    
        

    
    toJsonValue(QString("stopid"), stopid, obj, QString("QString"));
    
        

    
    toJsonValue(QString("timestamp"), timestamp, obj, QString("QString"));
    
        

    
    QList<SWGTimetable*>* resultsList = results;
    QJsonArray resultsJsonArray;
    toJsonArray((QList<void*>*)results, &resultsJsonArray, "results", "SWGTimetable");

    obj->insert("results", resultsJsonArray);
    

    return obj;
}

QString*
SWGTimetableList::getErrorcode() {
    return errorcode;
}
void
SWGTimetableList::setErrorcode(QString* errorcode) {
    this->errorcode = errorcode;
}

QString*
SWGTimetableList::getErrormessage() {
    return errormessage;
}
void
SWGTimetableList::setErrormessage(QString* errormessage) {
    this->errormessage = errormessage;
}

qint32
SWGTimetableList::getNumberofresults() {
    return numberofresults;
}
void
SWGTimetableList::setNumberofresults(qint32 numberofresults) {
    this->numberofresults = numberofresults;
}

QString*
SWGTimetableList::getRoute() {
    return route;
}
void
SWGTimetableList::setRoute(QString* route) {
    this->route = route;
}

QString*
SWGTimetableList::getStopid() {
    return stopid;
}
void
SWGTimetableList::setStopid(QString* stopid) {
    this->stopid = stopid;
}

QString*
SWGTimetableList::getTimestamp() {
    return timestamp;
}
void
SWGTimetableList::setTimestamp(QString* timestamp) {
    this->timestamp = timestamp;
}

QList<SWGTimetable*>*
SWGTimetableList::getResults() {
    return results;
}
void
SWGTimetableList::setResults(QList<SWGTimetable*>* results) {
    this->results = results;
}



} /* namespace Swagger */

