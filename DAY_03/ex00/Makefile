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

NAME			= labagarre
INCLUDE			= ClapTrap.hpp
SRCS			= ClapTrap.cpp \
					main.cpp
OBJS			= ${SRCS:%.cpp=$(DIR_OBJS)/%.o}
DIR_OBJS		= objs
COMPIL			= clang++
CPP_FLAGS		= -Wall -Wextra -Werror -std=c++98 #-pedantic
RM				= rm -rf
MKDIR			= mkdir -p

all				: $(NAME)

$(DIR_OBJS)		:
				$(MKDIR) $@

$(NAME)			: $(DIR_OBJS) $(OBJS)
				$(COMPIL) $(CPP_FLAGS) $(OBJS) -o $(NAME)
				echo "$(BOLD)${GREEN}$(ERASE)--> labagarre generated <--${END}"

$(DIR_OBJS)/%.o	: %.cpp 
				@$(MKDIR) $(dir $@)
				@$(COMPIL) $(CPP_FLAGS) -o $@ -c $< 

clean:
				${RM} $(OBJS)

fclean:			clean
				${RM} $(NAME) $(DIR_OBJS) ./*.replace
				echo "${RED}XXXX CLEAN XNXX${END}"

re:				fclean all

.PHONY: 		clean fclean all re 
.SILENT:		clean fclean all re $(NAME) $(DIR_OBJS)