# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    starter.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/03 17:08:41 by lsauvage          #+#    #+#              #
#    Updated: 2018/05/03 17:22:33 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
# fichier qui permet de compiler GNL comme la moulinette.

make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
