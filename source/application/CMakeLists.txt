add_executable(application src/main.cpp)
target_link_libraries(application PRIVATE se560::fibonacci)
target_compile_features(application PRIVATE cxx_std_23)