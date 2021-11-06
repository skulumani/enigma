#include "gtest/gtest.h"
#include <Eigen/Dense>

TEST(TestEigen, BuildMatrix) {
    Eigen::MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    
    ASSERT_EQ(m(1, 1), 1.5);
}
