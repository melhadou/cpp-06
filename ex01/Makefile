NAME = serialize
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFILES = main.cpp Data.cpp
CXXOBJ = $(CXXFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

clean:
	rm -f $(CXXOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
