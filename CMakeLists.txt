cmake_minimum_required(VERSION 3.0.0)
project(32_1_json VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(32_1_json main.cpp)

target_link_libraries(32_1_json PRIVATE nlohmann_json::nlohmann_json)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
