cmake_minimum_required(VERSION 3.0)

set(TYPES_SOURCES  DGPS.cpp
                   Image.cpp
                   IMU.cpp
                   Joints.cpp
                   JointState.cpp
                   Motion2D.cpp
                   Pose.cpp
                   Quaternion.cpp
                   DEM.cpp
                   Vector3.cpp)
set(TYPES_HEADERS  DGPS.h
                   Image.h
                   IMU.h
                   Joints.h
                   JointState.h
                   Motion2D.h
                   Pose.h
                   Quaternion.h
                   DEM.h
                   Vector3.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_compile_options(-fPIC)
add_library(${PROJECT_NAME}_types STATIC ${TYPES_HEADERS} ${TYPES_SOURCES})

INSTALL(FILES ${TYPES_HEADERS} DESTINATION include/${PROJECT_NAME})





