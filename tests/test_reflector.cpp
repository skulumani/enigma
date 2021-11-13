#include "reflector.hpp"

#include "gtest/gtest.h"

TEST(TestReflector, Create_default) {
    ReflectorType type(Default); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}

TEST(TestReflector, Create_B) {
    ReflectorType type(B); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {24, 17, 20, 7, 16, 18, 11, 3, 15, 23, 13, 6, 14, 10, 12, 8, 4, 1, 5, 25, 2, 22, 21, 9, 0, 19};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}

TEST(TestReflector, Create_C) {
    ReflectorType type(C); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {5, 21, 15, 9, 8, 0, 14, 24, 4, 3, 17, 25, 23, 22, 6, 2, 19, 10, 20, 16, 18, 1, 13, 12, 7, 11};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}


TEST(TestReflector, Create_ThinB) {
    ReflectorType type(ThinB); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {4, 13, 10, 16, 0, 20, 24, 22, 9, 8, 2, 14, 15, 1, 11, 12, 3, 23, 25, 21, 5, 19, 7, 17, 6, 18};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}

TEST(TestReflector, Create_ThinC) {
    ReflectorType type(ThinC); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {17, 3, 14, 1, 9, 13, 19, 10, 21, 4, 7, 12, 11, 5, 2, 22, 25, 0, 23, 6, 24, 8, 15, 18, 20, 16};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}
