if(EXISTS "/home/Daniel/Documents/Projects/database-builder-cli/cmake-build-debug/NekoDBMSTest[1]_tests.cmake")
  include("/home/Daniel/Documents/Projects/database-builder-cli/cmake-build-debug/NekoDBMSTest[1]_tests.cmake")
else()
  add_test(NekoDBMSTest_NOT_BUILT NekoDBMSTest_NOT_BUILT)
endif()
