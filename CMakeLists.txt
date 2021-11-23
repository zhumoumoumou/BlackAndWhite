cmake_minimum_required(VERSION 3.16)
project(BlackAndWhite)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(BlackAndWhite BlackAndWhite.cpp ${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(BlackAndWhite -lGL -lglut)