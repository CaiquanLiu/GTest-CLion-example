# gtest个人笔记


gtest gtest_main gmock三个可执行文件
main函数在gtest_main

一种是引入
```c++
GTEST_API_ int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```
代码

一种是引入gtest_main


TEST(test_case_name, test_name){
}
测试方法 c函数风格
EXPECT_FALSE

EXPECT_GE(val1, val2)
EXPECT_LE(val1, val2)
EXPECT_STREQ
相当于断言

class QueueTestSmpl3 : public testing::Test

c++继承风格的测试
  virtual void SetUp();
  virtual void TearDown();

### cppunit

测试的程序是可执行文件

`Running main() from /Users/ibqo/CLionProjects/GTest-CLion-example/googletest/googletest/googletest/src/gtest_main.cc`

cmake是否可以运行所有可执行文件？

CMake的CTest方法
https://blog.csdn.net/huyanjie0327/article/details/46652313

cmake + googletest 之一 入门
https://blog.csdn.net/joelcat/article/details/90766192?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-4.nonecase&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-4.nonecase

cmake生成的问价在cmake命令运行的目录下