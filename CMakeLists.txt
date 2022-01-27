cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)
 
project(demo)
 
find_package(GTEST REQUIRED)

include_directories(./leetcode/include) 

AUX_SOURCE_DIRECTORY(./leetcode/src SRC_LIST)
AUX_SOURCE_DIRECTORY(./testcase/src MAIN)

add_executable(${PROJECT_NAME} ${SRC_LIST} ${MAIN})
 
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES})
