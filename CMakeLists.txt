
---

# ⚙️ `CMakeLists.txt`  
**(Qt + C++ Build System)**

This is a **correct, modern, Qt-6 compatible CMake file**.

```cmake
cmake_minimum_required(VERSION 3.16)

project(TicTacToeAI LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt auto features
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find Qt6
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Source files
file(GLOB_RECURSE PROJECT_SOURCES
    src/*.cpp
    src/*.h
)

# Create executable
add_executable(TicTacToeAI
    ${PROJECT_SOURCES}
)

# Include directories
target_include_directories(TicTacToeAI PRIVATE
    src
)

# Link Qt libraries
target_link_libraries(TicTacToeAI PRIVATE
    Qt6::Widgets
)

# Platform-specific settings
if (WIN32)
    set_target_properties(TicTacToeAI PROPERTIES
        WIN32_EXECUTABLE TRUE
    )
endif()

