#ifndef SWAP_H_
#include <array>

// Copyright 2019 Simon Fish

class Sensor {
  int targetTemperature = 0;
  // Everything's private by default in a class declaration. Until you
  // specify...
 public:
  std::array<bool, 4> lights = {false, false, false, false};
  void setTargetTemperature(const int& newTargetTemperature);
  bool isAtTargetTemperature(const int& currentTemperature) const;
  void toggleLight(const int& lightIndex);
  void print() const;
  Sensor();
};
#endif
