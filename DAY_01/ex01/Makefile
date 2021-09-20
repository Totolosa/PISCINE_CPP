RED     = \033[31m
GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[34m
PINK    = \033[35m
CYAN    = \033[36m
WHITE   = \033[37m
END     = \033[0m
BOLD    = \033[1m
UNDER   = \033[4m
SUR     = \033[7m

NAME			= BraiiiiiiinnnzzzZ
INCLUDE			= Zombie.hpp
SRCS			= Zombie.cpp \
					ZombieHorde.cpp \
					main.cpp
OBJS			= ${SRCS:%.cpp=$(DIR_OBJS)/%.o}
DIR_OBJS		= objs
COMPIL			= clang++
CPP_FLAGS		= -Wall -Wextra -Werror
RM				= rm -rf
MKDIR			= mkdir -p

all				: $(NAME)

$(DIR_OBJS)		:
				$(MKDIR) $@

$(NAME)			: $(DIR_OBJS) $(OBJS)
				$(COMPIL) $(CPP_FLAGS) $(OBJS) -o $(NAME)
				echo "$(BOLD)${GREEN}$(ERASE)--> BraiiiiiiinnnzzzZ generated <--${END}"

$(DIR_OBJS)/%.o	: %.cpp 
				@$(MKDIR) $(dir $@)
				@$(COMPIL) $(CPP_FLAGS) -o $@ -c $< 

clean:
				${RM} $(OBJS)

fclean:			clean
				${RM} $(NAME) $(DIR_OBJS)
				echo "${RED}XXXXX CLEAN XXXXX${END}"

re:				fclean all

.PHONY: 		clean fclean all re 
.SILENT:		clean fclean all re $(NAME) $(DIR_OBJS)