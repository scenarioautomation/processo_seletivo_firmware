cmake_minimum_required(VERSION 3.5)

project(teste_firmware LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(teste_firmware main.cpp
    Input.h
    Output.h
    Device.h
    Gpio.h Gpio.cpp)

include(GNUInstallDirs)
install(TARGETS teste_firmware
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
