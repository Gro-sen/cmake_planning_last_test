project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)

add_executable(planning_main planning_main.cpp)

target_include_directories(planning_main 
PUBLIC 
${Process_Dir}
)

target_link_libraries(planning_main
PUBLIC
process
)

target_include_directories(planning_main 
PUBLIC 
${Show_Result_Dir}
)

target_link_libraries(planning_main
PUBLIC
show_result
)