# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/ret2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ret2_autogen.dir/ParseCache.txt"
  "ret2_autogen"
  )
endif()
