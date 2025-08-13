project(planning_main)

add_subdirectory(pnc_map)
add_subdirectory(process)

add_executable(planning_main planning_main.cpp)

target_include_directories(planning_main 
PUBLIC 
${Process_Dir}
${PNC_Map_Dir}
)

target_link_libraries(planning_main
PUBLIC
process
)