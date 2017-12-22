cmake_minimum_required(VERSION 3.0)

set(CLIENT_SOURCES SherpaTTTeleClient.cpp)
set(CLIENT_HEADERS SherpaTTTeleClient.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(${PROJECT_NAME} SHARED ${CLIENT_HEADERS} ${CLIENT_SOURCES})
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_types)

#CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/sherpa-tt_tele_client.pc.in ${CMAKE_CURRENT_BINARY_DIR}/sherpa-tt_tele_client.pc @ONLY)

#INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/sherpa-tt_tele_client.pc DESTINATION lib/pkgconfig)
INSTALL(FILES ${CLIENT_HEADERS} DESTINATION include/${PROJECT_NAME})
INSTALL(TARGETS ${PROJECT_NAME} DESTINATION lib)




