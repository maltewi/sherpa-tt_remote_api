cmake_minimum_required(VERSION 2.6)

project(sherpa_tt_remote_api CXX)
set(CMAKE_SHARED_LINKER_FLAGS "-std=c++11")
add_compile_options(-std=c++11)
add_compile_options(-fPIC)

#################
# Build Options #
#################
set(default_build_type "RelWithDebInfo")
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to '${default_build_type}' as none was specified.")
  set(CMAKE_BUILD_TYPE "${default_build_type}" CACHE
      STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
    "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

option(BUILD_CLIENT "Compile the SherpaTTTeleClient" true)
option(BUILD_SERVER "Compile the Remote API Server. Requires Rock." false)


###########
# Targets #
###########

#########
# Types #
#########
set(TYPES_SOURCES  types/DGPS.cpp
                   types/Image.cpp
                   types/IMU.cpp
                   types/Joints.cpp
                   types/JointState.cpp
                   types/Motion2D.cpp
                   types/Pose.cpp
                   types/Quaternion.cpp
                   types/DEM.cpp
                   types/Vector3.cpp)
set(TYPES_HEADERS  types/DGPS.h
                   types/Image.h
                   types/IMU.h
                   types/Joints.h
                   types/JointState.h
                   types/Motion2D.h
                   types/Pose.h
                   types/Quaternion.h
                   types/DEM.h
                   types/Vector3.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/types)
add_library(${PROJECT_NAME}_types SHARED ${TYPES_HEADERS} ${TYPES_SOURCES})
INSTALL(FILES ${TYPES_HEADERS} DESTINATION include/${PROJECT_NAME})
INSTALL(TARGETS ${PROJECT_NAME}_types DESTINATION lib)

##########
# Client #
##########
# Not using target_link_libraries and create the library here  takes care that all 
# type symbols are available in Rock.
if(BUILD_CLIENT)
    include_directories(${CMAKE_CURRENT_SOURCE_DIR}/client)
    set(CLIENT_SOURCES client/SherpaTTTeleClient.cpp)
    set(CLIENT_HEADERS client/SherpaTTTeleClient.h)
    add_library(${PROJECT_NAME} SHARED ${CLIENT_HEADERS} ${TYPES_HEADERS} ${CLIENT_SOURCES} ${TYPES_SOURCES})
    INSTALL(FILES ${CLIENT_HEADERS} DESTINATION include/${PROJECT_NAME})
    INSTALL(TARGETS ${PROJECT_NAME} DESTINATION lib)
endif()

##########
# Server #
##########
if(BUILD_SERVER)
endif()

###################
# pkg config file #
###################
set(TARGET_NAME ${PROJECT_NAME})
CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc.in ${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc @ONLY)
INSTALL(FILES ${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc DESTINATION lib/pkgconfig)