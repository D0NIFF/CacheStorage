SET(SOURCE_FILES main.cpp
        Components/Database.cpp
        Components/Database.h
        Components/MultiArray.cpp
        Components/MultiArray.h)

add_executable (${PROJECT_NAME} ${SOURCE_FILES})

if (CMAKE_VERSION VERSION_GREATER 3.8)
    set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 26)
endif()