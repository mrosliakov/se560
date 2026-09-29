add_library(fibonacci src/fibonacci.cpp)
add_library(se560::fibonacci ALIAS fibonacci)

target_include_directories(fibonacci
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(fibonacci PRIVATE cxx_std_23)