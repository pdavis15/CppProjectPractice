cmake_minimum_required(VERSION 3.0.0)

# Show where to find the google test directory
include_directories(..build/googletest-src/googletest/include)
include_directories(..build/googletest-src/googlemock/include)

set(This ExampleTests)
set(Sources 
    ExampleTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    gmock_main
    CppProjectPractice
)

add_test(
    NAME ${This}
    COMMAND ${This}
)