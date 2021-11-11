#include "reflector.hpp"

#include "gtest/gtest.h"

TEST(TestReflector, Reflector_default) {
    ReflectorType type(Default); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }
}

TEST(TestReflector, Reflector_B) {
    ReflectorType type(B); 
    Reflector reflector = Reflector::create(type);
    std::vector<int> exp_wiring = {24, 17, 20, 7, 16, 18, 11, 3, 15, 23, 13, 6, 14, 10, 12, 8, 4, 1, 5, 25, 2, 22, 21, 9, 0, 19};
    for (int ii = 0; ii < 26; ii++) {
        ASSERT_EQ(reflector.forward_wiring[ii], exp_wiring[ii]);
    }

}
