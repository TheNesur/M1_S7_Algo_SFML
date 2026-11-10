cmake_minimum_required(VERSION 3.28)
project(M1_S7_Algo_SFML LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SFML_DIR "C:/SFML-3.1.0/lib/cmake/SFML")
find_package(SFML 3 COMPONENTS Graphics REQUIRED)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES}
        src/form/simple/Cercle.cpp
        src/form/simple/Cercle.h)
target_include_directories(${PROJECT_NAME} PRIVATE src)
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${SFML_DIR}/../../../bin" $<TARGET_FILE_DIR:${PROJECT_NAME}>)