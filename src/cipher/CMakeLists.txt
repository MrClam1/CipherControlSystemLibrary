cmake_minimum_required (VERSION 3.14)

set(
	HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/include/ccsl_cipher.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/aes.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/blowfish.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/des.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/kuznechik.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/magma.h
	${CMAKE_CURRENT_SOURCE_DIR}/include/rsa.h
)

set(
	SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/ccsl_cipher.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/aes.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/blowfish.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/des.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/kuznechik.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/magma.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/rsa.cpp
)

target_include_directories(${PRJ_NAME} PRIVATE include)

target_sources(${PRJ_NAME} PUBLIC ${SOURCES} ${HEADERS})