#include "Tesla.h"

Tesla::Tesla() {
    _model = "Model 3";
    _ext_color = "white";
    _dual_motor = false;
    _full_self_driving = false;
}
Tesla::Tesla(string model) {
    _model = model;
    _ext_color = "white";
    _dual_motor = false;
    _full_self_driving = false;
}
Tesla::Tesla(string model, bool dual_motor) {
    _model = model;
    _ext_color = "white";
    _dual_motor = dual_motor;
    _full_self_driving = false;
}
Tesla::Tesla(string model, string ext_color, bool dual_motor, bool full_self_driing) {
    _model = model;
    _ext_color = ext_color;
    _dual_motor = dual_motor;
    _full_self_driving = full_self_driing;

}

/* ===== Getters(Accessors) Setters(Mutators) ===== */      // In order to interact with the private variables! 
string Tesla::getModel() const {
    return _model;
}
void Tesla::setModel(string model) {
    _model = model;
}
string Tesla::getExteriorColor() const {
    return _ext_color;
}
void Tesla::setExteriorColor(string ext_color) {
    _ext_color = ext_color;
}
bool Tesla::getIsDualMotor() const {
    return _dual_motor;
}
void Tesla::setIsDualMotor(bool dual_motor) {
    _dual_motor = dual_motor;
}
bool Tesla::getIsFullSelfDriving() const {
    return _full_self_driving;
}
void Tesla::setIsFullSelfDriving(bool full_self_driving) {
    _full_self_driving = full_self_driving;
}
