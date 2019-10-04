// Copyright 2019 Simon Fish

#include "./swap.h"
#include <iostream>
using std::cout;
using std::endl;

Sensor::Sensor() { }

void Sensor::setTargetTemperature(const int& newTargetTemperature) {
  targetTemperature = newTargetTemperature;
}

bool Sensor::isAtTargetTemperature(const int& currentTemperature) const {
  return (targetTemperature == currentTemperature);
}
