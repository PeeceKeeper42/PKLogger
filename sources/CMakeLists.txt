# PK Logger library

cmake_minimum_required(VERSION 3.16)

project(_PK_Logger
    VERSION 1.0
    DESCRIPTION "PK Logger library"
    LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include(${CMAKE_CURRENT_SOURCE_DIR}/../_cmake/common.cmake)

find_package(QT NAMES Qt5 REQUIRED COMPONENTS Core Widgets)

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)

include(${ROOT_PROJECT_DIR}/_cmake/lib_settings.cmake)

set(PROJECT_SOURCES
    lib_PkLogger.h
    PkLogger.h
    private/PkLogger.cpp
    private/PrivatePkLogger.h
    private/PrivatePkLogger.cpp

    AbstractLogger.h
    ConsoleLogger.h
    private/ConsoleLogger.cpp
)

add_library(${PROJECT_NAME} SHARED
    ${PROJECT_SOURCES}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE ${COMMON_SOURCES_DIR}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/private
)

target_link_directories(${PROJECT_NAME}
    PRIVATE ${LIB_DIRECTORY}
    PRIVATE ${MOD_DIRECTORY}
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE Qt${QT_VERSION_MAJOR}::Core
    PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
)

target_compile_definitions(${PROJECT_NAME} PRIVATE LIB_PKLOGGER_LIBRARY)
