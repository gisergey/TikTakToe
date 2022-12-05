# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TikTalToe_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TikTalToe_autogen.dir\\ParseCache.txt"
  "TikTalToe_autogen"
  )
endif()
