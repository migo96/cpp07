NAME = a.out

SRCS = main.cpp Convert.cpp
OBJS = main.o Convert.o

CXX = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) -o $@ $^

.cpp.o :
	$(CXX) -c -o $@ $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all