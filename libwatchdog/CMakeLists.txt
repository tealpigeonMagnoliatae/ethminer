set(SOURCES
    watchdog.h watchdog.cpp
)

add_library(watchdog ${SOURCES})
#target_link_libraries(watchdog PRIVATE ethcore devcore ethminer-buildinfo)
target_include_directories(watchdog PRIVATE ..)
