/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:41:03 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/16 13:21:57 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static t_gnl_list	*file;
    t_gnl_list          line;
	size_t				len;
	int					i;

	i = 0;
	len = 0;
	line = NULL;
}
