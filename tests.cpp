#include "swap.cpp"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class Sensor.
class SensorTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  SensorTest() {
     // You can do set-up work for each test here.
  }

  ~SensorTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Objects declared here can be used by all tests in the test suite for Foo.
};

// Tests that the sensor is recognised to be at 0 by default
TEST_F(SensorTest, IsAtTargetTemperatureIsTrueWhenDefault) {
  Sensor f;
  EXPECT_TRUE(f.isAtTargetTemperature(0)) << "Sensor is not at 0";
}
//
// Tests that the sensor is not recognised to be at other numbers.
TEST_F(SensorTest, IsAtTargetTemperatureIsFalseWhenDefault) {
  Sensor f;
  EXPECT_FALSE(f.isAtTargetTemperature(10)) << "Sensor should be at 0";
}

// Tests that the sensor is still at the target temperature after it's changed.
TEST_F(SensorTest, IsAtTargetTemperatureIsTrueWhenChanged) {
  Sensor f;
  f.setTargetTemperature(69);
  EXPECT_TRUE(f.isAtTargetTemperature(69)) << "Sensor target change not recognised";
}

// Tests that the sensor is not at the old target temperature after it's changed.
TEST_F(SensorTest, IsAtTargetTemperatureIsFalseWhenChanged) {
  Sensor f;
  f.setTargetTemperature(69);
  EXPECT_FALSE(f.isAtTargetTemperature(0)) << "Sensor target change not recognised";
}

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
