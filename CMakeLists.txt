cmake_minimum_required(VERSION 3.16)

project(cinema-simulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cinema-simulator main.cpp
    Roomseat.h Roomseat.cpp
    Room.h Room.cpp


    MovieSession.h

    Movie.h  )

include(GNUInstallDirs)
install(TARGETS cinema-simulator
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
