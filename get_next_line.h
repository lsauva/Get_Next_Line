/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:41:00 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/05 16:44:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"
# define BUFF_SIZE 50
# define EOL '\n'
# define EOF '\0'

typedef struct s_gnl_list
{
	char	*mem;
	int		index_fd;
	struct	s_gnl_list *prev;
	struct	s_gnl_list *next;
}				t_gnl_list;

int     get_next_line(const int fd, char **line);

#endif
