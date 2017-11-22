cmake_minimum_required(VERSION 3.0)

set(SHERPA_SOURCES src/SherpaTTTeleClient.cpp
                   src/DGPS.cpp
                   src/Image.cpp
                   src/IMU.cpp
                   src/Joints.cpp
                   src/JointState.cpp
                   src/Motion2D.cpp
                   src/Pose.cpp
                   src/Quaternion.cpp
                   src/DEM.cpp
                   src/Vector3.cpp)
set(SHERPA_HEADERS include/SherpaTTTeleClient.h
                   include/DGPS.h
                   include/Image.h
                   include/IMU.h
                   include/Joints.h
                   include/JointState.h
                   include/Motion2D.h
                   include/Pose.h
                   include/Quaternion.h
                   include/DEM.h
                   include/Vector3.h)

project(SherpaTTTeleClient CXX)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_SHARED_LINKER_FLAGS "-std=c++1y")
include_directories(include)

add_compile_options(-std=c++1y -O0 -g3 -fmessage-length=0 -frecord-gcc-switches)

add_library(SherpaTTTeleClient SHARED ${SHERPA_HEADERS} ${SHERPA_SOURCES})



