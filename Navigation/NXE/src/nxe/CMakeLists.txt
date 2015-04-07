
set( Python_ADDITIONAL_VERSIONS 2.7 )
set(Python_FIND_VERSION 2)
set(Python_FIND_VERSION_MAJOR 2)
set(API_CONSTANT_NAME kAscii_nxe_api)

# Find Python interpreter
find_package(PythonInterp REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/tec)
add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/src/nxe/generated_api.cc
                   COMMAND ${PYTHON_EXECUTABLE}
                   ARGS ${CMAKE_SOURCE_DIR}/tec/tools/generate_api.py
                        ${CMAKE_SOURCE_DIR}/js/nxe_api.js
                        ${API_CONSTANT_NAME}
                        generated_api.cc
)

# find DBus
find_package(DBus REQUIRED)
find_package(DBusCpp REQUIRED)
find_package(GPSD REQUIRED)
include_directories(${DBUS_INCLUDE_DIR} ${DBUS_ARCH_INCLUDE_DIR} ${DBUSCPP_INCLUDE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE__SOURCE_DIR}/src/)

set (dbus_library navitdbus.cc)

set(nxe_interfaces
    inavitprocess.h
    inavitipc.h
    igpsprovider.h
)

set(NXE_SRCS
    # interfaces
    ${nxe_interfaces}

    nxe_extension.cc
    nxe_instance.cc
    navitcontroller.cc
    calls.h
    log.h
    log.cc
    jsonmessage.cc
    settings.cc
    settingtags.h
    position.h

    # dbus interface implementation
    ${dbus_library}
    dbus_helpers.hpp

    # navit posix process controlling implementation
    navitprocessimpl.cc

    # gps providers
    gpsdprovider.cc

    # tizen-extension-crosswalk sources
    ../../tec/common/extension.cc

    # generated sources
    ${CMAKE_BINARY_DIR}/src/nxe/generated_api.cc
)

add_library(nxe SHARED ${NXE_SRCS})
target_link_libraries(nxe ${Boost_LIBRARIES} ${DBUS_LIBRARIES} ${DBUSCPP_LIBRARIES} -lrt fruit ${GPS_LIBRARY})

install(TARGETS nxe
        DESTINATION lib/tizen-extensions-crosswalk)