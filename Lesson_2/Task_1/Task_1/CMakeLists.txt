cmake_minimum_required(VERSION 3.14)

project(Task_1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Sql Network)

add_executable(Task_1
  main.cpp
)
target_link_libraries(Task_1 Qt${QT_VERSION_MAJOR}::Core
                             Qt${QT_VERSION_MAJOR}::Sql
                             Qt${QT_VERSION_MAJOR}::Network)

install(TARGETS Task_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
