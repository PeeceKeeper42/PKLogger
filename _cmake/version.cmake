# Variables for generating the version. Used in the application (config.h file)
#
# BUILD_DATE - date in format 'yyyy-mm-dd'
# BUILD_NUM - number of build in format 'mmdd'
# PROJECT_VERSION_PATCH - in format 'yy'
#
# Application version format: 'MAJOR.MINOR.yy.mmdd'

string(TIMESTAMP BUILD_DATE "%Y-%m-%d")

string(SUBSTRING ${BUILD_DATE} 0 4 YEAR_STR)

string(SUBSTRING ${BUILD_DATE} 2 2 Y_STR)

string(SUBSTRING ${BUILD_DATE} 5 2 M_STR)

string(SUBSTRING ${BUILD_DATE} 8 2 D_STR)

string(CONCAT BUILD_NUM ${M_STR} ${D_STR})

set(PROJECT_VERSION_PATCH ${Y_STR})

set(ORIGINAL_FILE_NAME ${RUNTIME_OUTPUT_NAME})
