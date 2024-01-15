NAME			= Unnecessary_violence

CXX				= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp\
						./Class/HumanA/HumanA.cpp\
						./Class/HumanB/HumanB.cpp\
						./Class/Weapon/Weapon.cpp\

OBJS			= $(SRCS:.cpp=.o)

all				: $(NAME)

$(NAME)		: $(OBJS)
						$(CXX)	$(CXXFLAGS)	$(OBJS) -o $(NAME)

clean			:
						rm -rf $(OBJS)

fclean		: clean
						rm -rf $(NAME)

re				: fclean all

.PHONY		: all clean fclean re
