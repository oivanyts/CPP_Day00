NAME 		    = Event

SRC             += main.cpp
SRC             += Zombie.cpp
SRC             += ZombieHorde.cpp

CC              := clang++

INCLUDES 	    := $(SRC:.cpp=.hpp))

HEADER_FLAGS    := -I .

FLAGS		    := -Wall -Wextra -Werror -std=c++98

OBJ 		    := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo compiling $@;
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	@echo "\033[01;48;05;22m DONE \033[m [$(NAME)]"

%.o: %.cpp
	@echo compiling $@;
	@ $(CC) -c $< -o $@ $(FLAGS);

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "\033[01;48;05;160m fclean succsed \033[m [$(NAME)]"

re: fclean all

vpath %.c $(SRC_DIR)

.PHONY: all clean fclean re
