/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:52:37 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/10 19:02:47 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

#define BUF_SIZE 4096

void	ft_display_file(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File not exist\n");
	}
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		if (ret == 0)
			ft_putstr("File is empty\n");
		else
			ft_putstr(buf);
	}
}
