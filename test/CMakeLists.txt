# sample_test
add_executable(sample_test sample_test.cpp)
target_link_libraries(sample_test gtest_main sample)
target_include_directories(sample PUBLIC ${PROJECT_SOURCE_DIR}/src/lib)