# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\HDMS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HDMS_autogen.dir\\ParseCache.txt"
  "HDMS_autogen"
  )
endif()
