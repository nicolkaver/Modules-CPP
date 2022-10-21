NAME = PhoneBook
SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = PhoneBook.hpp Contact.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

all: ${NAME} 

%.o: %.cpp ${INCLUDES} 
	c++ ${FLAGS} -c $< -o $@

${NAME}: ${OBJ} ${INCLUDES}
	c++ ${FLAGS} ${OBJ} -o ${NAME}
	@echo "$(_GREEN)Executable created : PhoneBook$(_END)"

clean:
	@rm -f ${OBJ}
	@echo "$(_RED)o. files removed.$(_END)"

fclean: clean
	@rm -f ${NAME}
	@echo "$(_RED)Executable removed.$(_END)"

re: fclean 
		@make ${NAME}

.PHONY: all clean fclean re
