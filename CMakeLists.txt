cmake_minimum_required(VERSION 4.1.2 FATAL_ERROR)

set(PROJECT_NAME Radistach)
project(${PROJECT_NAME})

# Нужно указывать все файлы тут
set(SOURCES 
	sources/main.cpp
	sources/geometry.h
	sources/geometry.cpp
	sources/physics.h
	sources/physics.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
