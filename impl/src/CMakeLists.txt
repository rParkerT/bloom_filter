include_directories(${bloom_filter_SOURCE_DIR}/impl/inc)

add_library(bf bloom_filter.cpp)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.49.0)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(bloom_filter main.cpp bloom_filter.cpp)
    target_link_libraries(bloom_filter ${Boost_LIBRARIES})
endif()
