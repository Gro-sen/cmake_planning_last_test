project(process)

add_library(process 
SHARED
process.cpp
)

target_include_directories(process 
PUBLIC 
${PNC_Map_Dir}
)

target_link_libraries(process
PUBLIC
pnc_map
)

target_link_libraries(process
PUBLIC
Eigen3::Eigen
)