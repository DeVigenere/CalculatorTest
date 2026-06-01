cmake_minimum_required(VERSION 3.20)
project(tests, VERSION 1.0)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip)
FetchContent_MakeAvailable(googletest)

add_library(calculator_lib STATIC
	Calculator.cpp
	Calculator.h
)

add_executable(calculator_tests
	test_calculator.cpp
)

target_link_libraries(calculator_tests
	calculator_lib
	gtest_main
	gtest
)

include(GoogleTest)
gtest_discover_tests(calculator_tests)