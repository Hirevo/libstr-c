
cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra -Wunused -Wuninitialized -O3")

add_library(str STATIC
    src/internal_lstr_concat_helpers
	src/internal_lstr_match_helpers
	src/internal_lstr_split_helpers
	src/lstr_append
	src/lstr_capitalize
	src/lstr_concat
	src/lstr_ends_with
	src/lstr_epur
	src/lstr_equals
	src/lstr_includes
	src/lstr_index_of
	src/lstr_match
	src/lstr_nb_occur
	src/lstr_prepend
	src/lstr_replace
	src/lstr_reverse
	src/lstr_slice
	src/lstr_split
	src/lstr_starts_with
	src/lstr_substr
	src/lstr_test
	src/lstr_to_lower_case
	src/lstr_to_upper_case
	src/lstr_trim
)
add_dependencies(str vec)
target_include_directories(str PUBLIC src)
target_link_libraries(str vec)
