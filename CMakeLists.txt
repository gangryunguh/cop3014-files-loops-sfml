cmake_minimum_required(VERSION 3.10)
project(FilesLoopsSFML)

message("CMAKE_SYSTEM_NAME::${CMAKE_SYSTEM_NAME}")

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/Pr5-15.cpp app/Pr5-16.cpp app/Pr5-17.cpp
        app/Pr5-18.cpp app/Pr5-19.cpp app/Pr5-20.cpp
        app/Pr5-21.cpp app/Pr5-22.cpp app/Pr5-23.cpp
        app/Pr5-24.cpp
        app/sin.cpp app/cos.cpp app/exp.cpp app/draw_map.cpp)

add_executable(Pr5-15.exe app/Pr5-15.cpp)
add_executable(Pr5-16.exe app/Pr5-16.cpp)
add_executable(Pr5-17.exe app/Pr5-17.cpp)
add_executable(Pr5-18.exe app/Pr5-18.cpp)
add_executable(Pr5-19.exe app/Pr5-19.cpp)
add_executable(Pr5-20.exe app/Pr5-20.cpp)
add_executable(Pr5-21.exe app/Pr5-21.cpp)
add_executable(Pr5-22.exe app/Pr5-22.cpp)
add_executable(Pr5-23.exe app/Pr5-23.cpp)
add_executable(Pr5-24.exe app/Pr5-24.cpp)
add_executable(sin.exe app/sin.cpp)
add_executable(cos.exe app/cos.cpp)
add_executable(exp.exe app/exp.cpp)
add_executable(draw_sin.exe app/draw_sin.cpp)
add_executable(draw_map.exe app/draw_map.cpp)

if (WIN32)
set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    if (WIN32)
        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
    else()
        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
    endif()
endif()

