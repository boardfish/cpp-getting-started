// Copyright 2019 Simon Fish

#include "./swap.h"
#include <iostream>
#include <iomanip>
#include <array>
using std::cout;
using std::endl;
using std::setw;

Sensor::Sensor() {}

void Sensor::setTargetTemperature(const int &newTargetTemperature) {
    targetTemperature = newTargetTemperature;
}

bool Sensor::isAtTargetTemperature(const int &currentTemperature) const {
    return (targetTemperature == currentTemperature);
}

void Sensor::toggleLight(const int &lightIndex) {
    if (lightIndex < 0 || lightIndex >= lights.size()) return;
    lights[lightIndex] = !lights[lightIndex];
}

void Sensor::print() const {
    // output each array element's value
    cout << "Light" << setw(13) << "On" << endl;
    for (int index = 0; index < lights.size(); index++) {
        cout << setw(7) << index << setw(13) << lights[index] << endl;
    }
}