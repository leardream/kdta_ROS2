cmake_minimum_required(VERSION3.0)
project(helloworld)

find_package(OpenCV REQUIRED)

add_executable(helloworld helloworld.cpp)
target_link_libraries(helloworld \{OpenCV_LIBS})
target_include_directories(helloworld \{OpenCV_LIB_DIR})