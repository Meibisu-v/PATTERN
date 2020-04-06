cmake_minimum_required(VERSION 3.10)

project(proj)
find_package(GTest REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

include_directories(${GTEST_INCLUDE_DIRS})
set(INCLUDE
        ${PROJECT_SOURCE_DIR}/include/ArmyUnit.h
    )

set(SOURCE
        ${PROJECT_SOURCE_DIR}/src/ArmyUnit.cpp
        ${PROJECT_SOURCE_DIR}/run.cpp
    )
include_directories(${PROJECT_SOURCE_DIR})
add_executable(proj ${SOURCE} ${INCLUDE})

add_executable(test_ 
	${PROJECT_SOURCE_DIR}/test.cpp
	${INCLUDE}
	${PROJECT_SOURCE_DIR}/src/ArmyUnit.cpp
	)

target_link_libraries(proj ${INCLUDE})
target_link_libraries(test_ ${GTEST_LIBRARIES} pthread)
target_link_libraries(test_ ${INCLUDE})

enable_testing()