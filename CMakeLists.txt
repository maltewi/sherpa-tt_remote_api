cmake_minimum_required(VERSION 3.0)

set(SHERPA_DIR $ENV{SHERPA_HOME})

project(SherpaTTTeleClient CXX)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_SHARED_LINKER_FLAGS "-std=c++1y")
include_directories(${SHERPA_DIR}/include)

add_compile_options(-std=c++1y -O0 -g3 -fmessage-length=0 -frecord-gcc-switches)

add_library(SherpaTTTeleClient SHARED ${SHERPA_DIR}/src/SherpaTTTeleClient.cpp 
                                      ${SHERPA_DIR}/src/DGPS.cpp
                                      ${SHERPA_DIR}/src/Image.cpp
                                      ${SHERPA_DIR}/src/IMU.cpp
                                      ${SHERPA_DIR}/src/Joints.cpp
                                      ${SHERPA_DIR}/src/JointState.cpp
                                      ${SHERPA_DIR}/src/Motion2D.cpp
                                      ${SHERPA_DIR}/src/Pose.cpp
                                      ${SHERPA_DIR}/src/Quaternion.cpp
                                      ${SHERPA_DIR}/src/DEM.cpp 
                                      ${SHERPA_DIR}/src/Vector3.cpp)



