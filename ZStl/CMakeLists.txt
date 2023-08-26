# プロジェクト名を設定
project(ZStl CXX)

add_library(ZStl INTERFACE)

set(PUBLIC_HEADERS
	"${CMAKE_CURRENT_SOURCE_DIR}/Vector.h"
)

target_sources(ZStl 
	PUBLIC
		${PUBLIC_HEADERS}
	)