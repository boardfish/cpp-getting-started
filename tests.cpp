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

// Tests that the Foo::Bar() method does Abc.
TEST_F(SensorTest, IsAtTargetTemperatureIsTrueWhenZero) {
  Sensor f;
  EXPECT_TRUE(f.isAtTargetTemperature(0)) << "Sensor is not at 0";
}

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
