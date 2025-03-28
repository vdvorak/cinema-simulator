cmake_minimum_required(VERSION 3.16)

project(cinema-simulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cinema-simulator main.cpp
    roomseat.h roomseat.cpp
    room.h room.cpp

    movie.h movie.cpp
    moviesession.h moviesession.cpp)

include(GNUInstallDirs)
install(TARGETS cinema-simulator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
