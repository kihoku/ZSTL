#-------------------------------------------------
# CMake設定
#-------------------------------------------------
# バージョン情報
cmake_minimum_required(VERSION 3.19)

# プロジェクト名を設定
project(ZStl CXX)

set(ZSTL_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(ZStl)
add_subdirectory(ZStlTest)
add_subdirectory(googletest)