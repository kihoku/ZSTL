# プロジェクト名を設定
project(ZStlTest CXX)

add_executable(ZStlTest)

set(PRIVATE_SOURCES
	"${CMAKE_CURRENT_SOURCE_DIR}/VectorTest.cpp"
)

target_sources(ZStlTest 
	PRIVATE 
		${PRIVATE_SOURCES}
	)

target_include_directories(ZStlTest 
	PUBLIC
		${ZSTL_ROOT_PATH}
	)

target_link_libraries(ZStlTest 
   PRIVATE
       ZStl
	   GTest::gtest
	   GTest::gtest_main
)
