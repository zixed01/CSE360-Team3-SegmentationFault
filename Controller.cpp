#include "Controller.h"

Controller::Controller() {
    current = new Login();
}

Controller::~Controller() {
}

Controller::runProgram() {
    while (current != NULL){
        tempData = current.view(tempData);
        user = tempData.user;
        patient = tempData.patient;

        switch (tempData.nextView){
            case 0:
                current == NULL;
                break;
            case 1:
                current = new Login();
                break;
            case 2:
                current = new User();
                break;
            case 3:
                current = new Patient();
                break;
            case 4:
                current = new Appointments();
                break;
            case 5:
                current = new Stats();
                break;
            case 6:
                current = new Prescriptions();
                break;
            case 7:
                current = new Comments();
                break;
            case 8:
                current = new Admin();
                break;
            default:
                current = new Login();
        }
    }
    return 0;
}

