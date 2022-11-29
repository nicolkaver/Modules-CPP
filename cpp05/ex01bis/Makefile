NAME = Bureaucrat
CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = Bureaucrat.hpp

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

SRC = Bureaucrat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ${INCLUDES} 
	${CXX} ${CXXFLAGS} -c $< -o $@

$(NAME): $(OBJ) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(_GREEN)Executable created : Bureaucrat$(_END)"

clean:
	rm -f $(OBJ)
	@echo "$(_RED)o. files removed.$(_END)"

fclean: clean
	rm -f $(NAME)
	@echo "$(_RED)Executable removed.$(_END)"

re: fclean all

<<<<<<< HEAD
.PHONY: all re clean fclean%  
=======
.PHONY: all re clean fclean%  
>>>>>>> eb844c78e7b191a547131f491443804cd10f63eb
