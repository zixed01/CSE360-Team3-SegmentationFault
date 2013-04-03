#include "Data.h"

Data::Data() {
}

Data::~Data() {
}

string Data::getScreenName(){
    return screenName;
}

PassThrough Data::logout(PassThrough tempData){
    tempData.nextView = 1;
    tempData.prevView = 1;
    tempData.user = NULL;
    tempData.patient = NULL;
    tempData.viewType = NULL;
    tempData.prevViewType = NULL;
    tempData.apptTime = NULL;
}
