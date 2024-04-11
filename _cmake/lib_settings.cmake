# Variables for libraries

include(${ROOT_PROJECT_DIR}/_cmake/outputdir.cmake)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${LIB_DIRECTORY})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB_DIRECTORY})
set(RUNTIME_OUTPUT_NAME lib${PROJECT_NAME}.so)

include(${ROOT_PROJECT_DIR}/_cmake/version.cmake)

configure_file(
    ${ROOT_PROJECT_DIR}/_cmake/config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h @ONLY
)

