add_library(system SHARED system.c)
target_include_directories(system PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_library(sample SHARED sample.c sample_sub.c)
target_include_directories(sample PUBLIC ${PROJECT_SOURCE_DIR}/include)