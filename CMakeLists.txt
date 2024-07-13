cmake_minimum_required(VERSION 3.28)
project(QtBar)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_library(${PROJECT_NAME} lib.cpp )
target_sources(${PROJECT_NAME} PUBLIC FILE_SET HEADERS FILES include )

target_include_directories(${PROJECT_NAME} PUBLIC
        "$<INSTALL_INTERFACE:include>"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/include"
)

target_link_libraries(${PROJECT_NAME}
        Qt5::Core
)

install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}Config
        FILE_SET HEADERS
)

install(EXPORT ${PROJECT_NAME}Config
        DESTINATION  lib/cmake/${PROJECT_NAME} )
