For compile with BUFFER_SIZE="32" and test-main-file "main.c" (single FD)

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c

----------------------

For compile with BUFFER_SIZE="32" and test-main-file "main_bonus.c" (multi FD)

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line_bonus.c get_next_line_utils_bonus.c main_bonus.c
