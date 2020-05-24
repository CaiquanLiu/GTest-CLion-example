# README

TEST
GTEST_API_

直接运行二进制文件，不是cmake make test之类的
testing namespace
gtest支持mac平台吗？windows *nix？
是

git submodule 下载不了文件？？？
git clone一下
brew安装不了

https://www.cnblogs.com/helloworldcode/p/9606838.html


```shell script
====================[ Build | sample4_unittest | Debug ]========================
/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake --build /Users/ibqo/CLionProjects/GTest-CLion-example/cmake-build-debug --target sample4_unittest -- -j 8
Scanning dependencies of target sample4_unittest
[ 66%] Building CXX object test/CMakeFiles/sample4_unittest.dir/samples/sample4.cc.o
[ 66%] Building CXX object test/CMakeFiles/sample4_unittest.dir/samples/sample4_unittest.cc.o
[100%] Linking CXX executable sample4_unittest
Undefined symbols for architecture x86_64:
  "testing::AssertionSuccess()", referenced from:
      testing::AssertionResult testing::internal::CmpHelperEQ<int, int>(char const*, char const*, int const&, int const&) in sample4_unittest.cc.o
  "testing::Test::SetUp()", referenced from:
      vtable for (anonymous namespace)::Counter_Increment_Test in sample4_unittest.cc.o
  "testing::Test::TearDown()", referenced from:
      vtable for (anonymous namespace)::Counter_Increment_Test in sample4_unittest.cc.o
  "testing::Test::Test()", referenced from:
      (anonymous namespace)::Counter_Increment_Test::Counter_Increment_Test() in sample4_unittest.cc.o
  "testing::Test::~Test()", referenced from:
      (anonymous namespace)::Counter_Increment_Test::~Counter_Increment_Test() in sample4_unittest.cc.o
  "testing::Message::Message()", referenced from:
      (anonymous namespace)::Counter_Increment_Test::TestBody() in sample4_unittest.cc.o
  "testing::internal::AssertHelper::AssertHelper(testing::TestPartResult::Type, char const*, int, char const*)", referenced from:
      (anonymous namespace)::Counter_Increment_Test::TestBody() in sample4_unittest.cc.o
  "testing::internal::AssertHelper::~AssertHelper()", referenced from:
      (anonymous namespace)::Counter_Increment_Test::TestBody() in sample4_unittest.cc.o
  "testing::internal::GetTestTypeId()", referenced from:
      ___cxx_global_var_init in sample4_unittest.cc.o
  "testing::internal::MakeAndRegisterTestInfo(char const*, char const*, char const*, char const*, testing::internal::CodeLocation, void const*, void (*)(), void (*)(), testing::internal::TestFactoryBase*)", referenced from:
      ___cxx_global_var_init in sample4_unittest.cc.o
  "testing::internal::IsTrue(bool)", referenced from:
      testing::internal::scoped_ptr<std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::reset(std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) in sample4_unittest.cc.o
      testing::internal::scoped_ptr<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::reset(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) in sample4_unittest.cc.o
  "testing::internal::EqFailure(char const*, char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool)", referenced from:
      testing::AssertionResult testing::internal::CmpHelperEQFailure<int, int>(char const*, char const*, int const&, int const&) in sample4_unittest.cc.o
  "testing::internal::AssertHelper::operator=(testing::Message const&) const", referenced from:
      (anonymous namespace)::Counter_Increment_Test::TestBody() in sample4_unittest.cc.o
  "typeinfo for testing::Test", referenced from:
      typeinfo for (anonymous namespace)::Counter_Increment_Test in sample4_unittest.cc.o
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

[没有定义头文件实现](https://medium.com/@m.muizzsuddin_25037/error-ld-symbol-not-found-for-architecture-x86-64-a5e5b648ffc)

`target_link_libraries(sample1_unittest gtest gtest_main gmock)`
添加gtestmain gmock依赖

问：执行全部测试文件？
make test/make check?

```c++
#include <limits.h>
INT_MIN
```

mac是poxis c吗？
limit.h是os提供的？

```c++
#include <string.h>
strcmp
```
c要记函数名，结构体
