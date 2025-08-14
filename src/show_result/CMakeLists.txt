project(show_result)

add_library(show_result
SHARED
show_result.cpp
)

target_include_directories(show_result 
PUBLIC 
${Process_Dir}
)

target_link_libraries(show_result
PUBLIC
process
)

target_link_libraries(show_result
PUBLIC
easyx
)