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


#include "SWGRealTimeInformationList.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRealTimeInformationList::SWGRealTimeInformationList(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRealTimeInformationList::SWGRealTimeInformationList() {
    init();
}

SWGRealTimeInformationList::~SWGRealTimeInformationList() {
    this->cleanup();
}

void
SWGRealTimeInformationList::init() {
    errorcode = new QString("");
errormessage = new QString("");
numberofresults = 0;
stopid = new QString("");
timestamp = new QString("");
results = new QList<SWGRealTimeInformation*>();
}

void
SWGRealTimeInformationList::cleanup() {
    if(errorcode != NULL) {
        delete errorcode;
    }
if(errormessage != NULL) {
        delete errormessage;
    }

if(stopid != NULL) {
        delete stopid;
    }
if(timestamp != NULL) {
        delete timestamp;
    }
if(results != NULL) {
        QList<SWGRealTimeInformation*>* arr = results;
        foreach(SWGRealTimeInformation* o, *arr) {
            delete o;
        }
        delete results;
    }
}

SWGRealTimeInformationList*
SWGRealTimeInformationList::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRealTimeInformationList::fromJsonObject(QJsonObject &pJson) {
    setValue(&errorcode, pJson["errorcode"], "QString", "QString");
setValue(&errormessage, pJson["errormessage"], "QString", "QString");
setValue(&numberofresults, pJson["numberofresults"], "qint32", "");
setValue(&stopid, pJson["stopid"], "QString", "QString");
setValue(&timestamp, pJson["timestamp"], "QString", "QString");
setValue(&results, pJson["results"], "QList", "SWGRealTimeInformation");
}

QString
SWGRealTimeInformationList::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRealTimeInformationList::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    toJsonValue(QString("errorcode"), errorcode, obj, QString("QString"));
    
        

    
    toJsonValue(QString("errormessage"), errormessage, obj, QString("QString"));
    
        
obj->insert("numberofresults", QJsonValue(numberofresults));

    
    toJsonValue(QString("stopid"), stopid, obj, QString("QString"));
    
        

    
    toJsonValue(QString("timestamp"), timestamp, obj, QString("QString"));
    
        

    
    QList<SWGRealTimeInformation*>* resultsList = results;
    QJsonArray resultsJsonArray;
    toJsonArray((QList<void*>*)results, &resultsJsonArray, "results", "SWGRealTimeInformation");

    obj->insert("results", resultsJsonArray);
    

    return obj;
}

QString*
SWGRealTimeInformationList::getErrorcode() {
    return errorcode;
}
void
SWGRealTimeInformationList::setErrorcode(QString* errorcode) {
    this->errorcode = errorcode;
}

QString*
SWGRealTimeInformationList::getErrormessage() {
    return errormessage;
}
void
SWGRealTimeInformationList::setErrormessage(QString* errormessage) {
    this->errormessage = errormessage;
}

qint32
SWGRealTimeInformationList::getNumberofresults() {
    return numberofresults;
}
void
SWGRealTimeInformationList::setNumberofresults(qint32 numberofresults) {
    this->numberofresults = numberofresults;
}

QString*
SWGRealTimeInformationList::getStopid() {
    return stopid;
}
void
SWGRealTimeInformationList::setStopid(QString* stopid) {
    this->stopid = stopid;
}

QString*
SWGRealTimeInformationList::getTimestamp() {
    return timestamp;
}
void
SWGRealTimeInformationList::setTimestamp(QString* timestamp) {
    this->timestamp = timestamp;
}

QList<SWGRealTimeInformation*>*
SWGRealTimeInformationList::getResults() {
    return results;
}
void
SWGRealTimeInformationList::setResults(QList<SWGRealTimeInformation*>* results) {
    this->results = results;
}



} /* namespace Swagger */
