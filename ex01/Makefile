# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#              #
#    Updated: 2025/03/06 13:38:07 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = horde

SRCS =  main.cpp\
		Zombie.cpp\
		zombiehorde.cpp\

OBJS = $(addprefix objs/,$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

objs/%.o: %.cpp
	@mkdir -p objs/
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf objs/

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY:				all clean fclean re