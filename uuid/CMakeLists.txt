cmake_minimum_required(VERSION 2.8)
project(uuid)
set(sources main.cpp
	UuidProducer.cpp)
add_executable(${PROJECT_NAME} ${sources})
