cmake_minimum_required (VERSION 3.14)

set(
	FOLDER
	${CMAKE_CURRENT_SOURCE_DIR}/../cipher/include
)

add_library(${PRJ_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_include_directories(${PRJ_NAME} PUBLIC ${FOLDER})