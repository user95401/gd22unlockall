cmake_minimum_required(VERSION 3.10.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /MANIFEST:NO")
cmake_policy(SET CMP0057 NEW)

project ("gd22unlockall")
set(developer "user95401")
set(version "v1.0.0")
set(description "by absolute")
set(repository "https://github.com/user95401/gd22unlockall")
set(issues_url "https://discord.gg/89VGJH6QQg")
set(issues_info "U can write about it on <cb>user666's discord...</c>")
set(LIBRARY_OUTPUT_PATH "D:\\Games\\user666\\Geometry Dash 2.2 [modloader, unlock mod, steam crack]\\_the mods\\") # dll output

#curly-eureka
include("C:\\Users\\Lenovo\\source\\curly-eureka\\CURLY-EUREKA-INCL.cmake")# "\" must be escaped by \\

#mod
file(GLOB_RECURSE SRC
src/*
)
add_library(${PROJECT_NAME} SHARED ${SRC} ${CURLY_EUREKA_SRC})
