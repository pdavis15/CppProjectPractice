cmake_minimum_required(VERSION 3.0.0)

# Show where to find the google test directory
include_directories(../googletest-src/googletest/include)

set(This ExampleTests)
set(Sources 
    ExampleTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    CppProjectPractice
)

add_test(
    NAME ${This}
    COMMAND ${This}
)