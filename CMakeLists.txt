cmake_minimum_required(VERSION 3.10)
project(Loops)

message("CMAKE_SYSTEM_NAME::${CMAKE_SYSTEM_NAME}")

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/sin.cpp app/cos.cpp app/exp.cpp app/draw_map.cpp)

add_executable(sin.exe app/sin.cpp)
add_executable(cos.exe app/cos.cpp)
add_executable(exp.exe app/exp.cpp)
add_executable(draw_sin.exe app/draw_sin.cpp)
add_executable(draw_map.exe app/draw_map.cpp)


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
    target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
endif()
