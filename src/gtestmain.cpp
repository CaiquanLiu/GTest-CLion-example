#include "gtest/gtest.h"

int add(int a, int b){
    return a+b;
}

TEST(test1, c1){
    EXPECT_EQ(3, add(1,2));
}

TEST(notequal,c2){
    EXPECT_GE(1,0);
    EXPECT_LE(0,1);
}
TEST(string,eq){
    EXPECT_STREQ("12","12");
}

GTEST_API_ int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
