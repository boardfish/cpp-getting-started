#ifndef SWAP_H_

// Copyright 2019 Simon Fish

class Sensor {
  int targetTemperature = 0;
  // Everything's private by default in a class declaration. Until you
  // specify...
 public:
  void setTargetTemperature(const int& newTargetTemperature);
  bool isAtTargetTemperature(const int& currentTemperature) const;
  void print() const;
  Sensor();
};
#endif
