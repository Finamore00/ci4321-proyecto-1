add_library(geometry STATIC geometry.cpp mesh.cpp)
target_include_directories(geometry PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(geometry PUBLIC glad textures shader)