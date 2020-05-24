cmake_minimum_required(VERSION 3.7)
project(gtestexample)

set(CMAKE_CXX_STANDARD 11)

add_executable(sample1_unittest samples/sample1_unittest.cc samples/sample1.cc)
add_executable(sample2_unittest samples/sample2_unittest.cc samples/sample2.cc)
add_executable(sample3_unittest samples/sample3_unittest.cc)
add_executable(sample4_unittest samples/sample4_unittest.cc samples/sample4.cc)
add_executable(sample5_unittest samples/sample3_unittest.cc samples/sample5_unittest.cc samples/sample1.cc)
add_executable(sample6_unittest samples/sample6_unittest.cc)
add_executable(sample7_unittest samples/sample7_unittest.cc)
add_executable(sample8_unittest samples/sample8_unittest.cc)
add_executable(sample9_unittest samples/sample9_unittest.cc)
add_executable(sample10_unittest samples/sample9_unittest.cc)

enable_testing()


target_link_libraries(sample1_unittest gtest gtest_main gmock)
target_link_libraries(sample2_unittest gtest gtest_main gmock)
target_link_libraries(sample3_unittest gtest gtest_main gmock)
target_link_libraries(sample4_unittest gtest gtest_main gmock)
target_link_libraries(sample5_unittest gtest gtest_main gmock)
target_link_libraries(sample6_unittest gtest gtest_main gmock)
target_link_libraries(sample7_unittest gtest gtest_main gmock)
target_link_libraries(sample8_unittest gtest gtest_main gmock)
target_link_libraries(sample9_unittest gtest gtest_main gmock)
target_link_libraries(sample10_unittest gtest gtest_main gmock)