# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Audio_visualiser_autogen"
  "CMakeFiles\\Audio_visualiser_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Audio_visualiser_autogen.dir\\ParseCache.txt"
  )
endif()
