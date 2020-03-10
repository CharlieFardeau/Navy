cmake_minimum_required(VERSION 3.15)
project(PSU_navy_2019 C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(lib/my)

add_executable(PSU_navy_2019
        include/my.h
        lib/my/flag1.c
        lib/my/flag2.c
        lib/my/is_int.c
        lib/my/my.h
        lib/my/my_atoi.c
        lib/my/my_printf.c
        lib/my/my_put_nbr.c
        lib/my/my_putchar.c
        lib/my/my_putstr.c
        lib/my/my_strlen.c
        lib/my/nb_word.c
        lib/my/put_unsigned.c
        lib/my/str_word_array.c
        lib/my/word_array.c
        src/connection.c
        src/error_handling.c
        src/error_map.c
        src/main.c
        src/my_help.c
        src/signal_handling.c
        src/command.c
        src/error_input.c
        src/map_enemy.c
        src/win_lose_cond.c
        src/put_in_map.c
        src/error_map2.c)
