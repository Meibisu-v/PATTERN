cmake_minimum_required(VERSION 3.10)

project(proj)
find_package(GTest REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

include_directories(${GTEST_INCLUDE_DIRS})
set(INCLUDE
        ${PROJECT_SOURCE_DIR}/include/ArmyUnit.h
        ${PROJECT_SOURCE_DIR}/include/InfantryCreature.h
		${PROJECT_SOURCE_DIR}/include/Archer.h
		${PROJECT_SOURCE_DIR}/include/WargRider.h
		${PROJECT_SOURCE_DIR}/include/Catapult.h
		${PROJECT_SOURCE_DIR}/include/UrugHai.h
		${PROJECT_SOURCE_DIR}/include/Mechanisme.h
		${PROJECT_SOURCE_DIR}/include/GiantWorm.h
		${PROJECT_SOURCE_DIR}/include/Nazgul.h
		${PROJECT_SOURCE_DIR}/include/Krebain.h
		${PROJECT_SOURCE_DIR}/include/Eagle.h
		${PROJECT_SOURCE_DIR}/include/DeadSoul.h
		${PROJECT_SOURCE_DIR}/include/Mechanisme.h
		${PROJECT_SOURCE_DIR}/include/ManKing.h
    )

set(SOURCE
        ${PROJECT_SOURCE_DIR}/src/ArmyUnit.cpp
        ${PROJECT_SOURCE_DIR}/src/InfantryCreature.cpp
		${PROJECT_SOURCE_DIR}/src/Archer.cpp
		${PROJECT_SOURCE_DIR}/src/WargRider.cpp
		${PROJECT_SOURCE_DIR}/src/Catapult.cpp
		${PROJECT_SOURCE_DIR}/src/UrugHai.cpp
		${PROJECT_SOURCE_DIR}/src/Mechanisme.cpp
		${PROJECT_SOURCE_DIR}/src/GiantWorm.cpp
		${PROJECT_SOURCE_DIR}/src/Nazgul.cpp
		${PROJECT_SOURCE_DIR}/src/Krebain.cpp
		${PROJECT_SOURCE_DIR}/src/Eagle.cpp
		${PROJECT_SOURCE_DIR}/src/DeadSoul.cpp
		${PROJECT_SOURCE_DIR}/src/Mechanisme.cpp
		${PROJECT_SOURCE_DIR}/src/ManKing.cpp
        ${PROJECT_SOURCE_DIR}/run.cpp
    )
include_directories(${PROJECT_SOURCE_DIR})
add_executable(proj ${SOURCE} ${INCLUDE})

add_executable(test_ 
	${PROJECT_SOURCE_DIR}/test.cpp
	${INCLUDE}
	${PROJECT_SOURCE_DIR}/src/ArmyUnit.cpp
	${PROJECT_SOURCE_DIR}/src/InfantryCreature.cpp
	${PROJECT_SOURCE_DIR}/src/Archer.cpp
	${PROJECT_SOURCE_DIR}/src/WargRider.cpp
	${PROJECT_SOURCE_DIR}/src/Catapult.cpp
	${PROJECT_SOURCE_DIR}/src/UrugHai.cpp
	${PROJECT_SOURCE_DIR}/src/Mechanisme.cpp
	${PROJECT_SOURCE_DIR}/src/GiantWorm.cpp
	${PROJECT_SOURCE_DIR}/src/Nazgul.cpp
	${PROJECT_SOURCE_DIR}/src/Krebain.cpp
	${PROJECT_SOURCE_DIR}/src/Eagle.cpp
	${PROJECT_SOURCE_DIR}/src/DeadSoul.cpp
	${PROJECT_SOURCE_DIR}/src/Mechanisme.cpp
	${PROJECT_SOURCE_DIR}/src/ManKing.cpp
	)

target_link_libraries(proj ${INCLUDE})
target_link_libraries(test_ ${GTEST_LIBRARIES} pthread)
target_link_libraries(test_ ${INCLUDE})

enable_testing()