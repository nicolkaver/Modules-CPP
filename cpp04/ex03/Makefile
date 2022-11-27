NAME = Materia

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = AMateria.hpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp 

_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_END=	$'\033[0m

SRC = Cure.cpp Ice.cpp MateriaSource.cpp Character.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp ${INCLUDES} 
	${CXX} ${CXXFLAGS} -c $< -o $@

$(NAME): $(OBJ) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(_GREEN)Executable created : Materia$(_END)"

clean:
	rm -f $(OBJ)
	@echo "$(_RED)o. files removed.$(_END)"

fclean: clean
	rm -f $(NAME)
	@echo "$(_RED)Executable removed.$(_END)"

re: fclean all

.PHONY: all re clean fclean