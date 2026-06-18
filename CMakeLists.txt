cmake_minimum_required(VERSION 3.10)
project(RunLengthEncoding VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add header files directory
include_directories(include)

# Gather source files
set(SOURCES
    src/main.cpp
    src/compress.cpp
    src/decompress.cpp
    src/usageInstruction.cpp
)

# Create the executable
add_executable(rle ${SOURCES})

# Optionally enable compiler warnings
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(rle PRIVATE -Wall -Wextra)
endif()
