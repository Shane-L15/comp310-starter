cmake_minimum_required(VERSION 3.5)

project(OperatingSystemsStarter)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)

# Windows workaround (don't ask) 
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(hello)
add_subdirectory(hello-lib)
add_subdirectory(lwlog-lib)
add_subdirectory(lwlog-demo)
add_subdirectory(gtest-demo)
add_subdirectory(MyWarmUp_1)
add_subdirectory(MyWarmUp_2)
add_subdirectory(MyWarmUp_3)
add_subdirectory(MyWarmUp_4)
add_subdirectory(MyWarmUp_5)
add_subdirectory(MyWarmUp_6)
add_subdirectory(MyWarmUp_7)
add_subdirectory(MyWarmUp_8)
add_subdirectory(MyWarmUp_9)
add_subdirectory(MyWarmUp_10)

# You can use add_subdirectory() to add your own work. 
# Please don't remove the existing subdirectories.



