cmake_minimum_required(VERSION 2.4)

project(sherpa_tt_remote_api CXX)
set(CMAKE_SHARED_LINKER_FLAGS "-std=c++11")
add_compile_options(-std=c++11)

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
add_subdirectory(types)
include_directories(types)

if(BUILD_CLIENT)
    add_subdirectory(client)
endif()

if(BUILD_SERVER)
    add_subdirectory(server)
endif()

set(TARGET_NAME ${PROJECT_NAME})

CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc.in ${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc @ONLY)

INSTALL(FILES ${CMAKE_SOURCE_DIR}/sherpa_tt_remote_api.pc DESTINATION lib/pkgconfig)