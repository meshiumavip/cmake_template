cmake_minimum_required(VERSION 3.0)
project(cligame C CXX)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(third_party)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Google Testの不要なキャッシュ変数をオフにしておく
option(BUILD_GMOCK "Builds the googlemock subprojects" OFF)
option(INSTALL_GTEST "Enables installation of googletest" OFF)

# 親プロジェクトのコンパイラ・リンカ設定を上書きするのを防ぐ（Windowsのみ）
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)