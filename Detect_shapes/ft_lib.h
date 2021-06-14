/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 09:18:57 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 20:11:27 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <unistd.h>
# include <stdlib.h>

int		ft_check_rush(char *str, int x, int y);
int		ft_check_rush_part2(char *str, int x, int y, int i);
int		ft_cmp(char *str1, char *str2);
void	print_rush00(int x, int y);
void	print_rush01(int x, int y, int i);
void	print_rush02(int x, int y, int i);
void	print_rush03(int x, int y, int i);
void	print_rush04(int x, int y, int i);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		detect_reactangle(char *str);
int		if_reactangle(char *str);
int		detect_square(char *str);
int		ft_num(char *str);
int		if_square(char *str);
int		detect_corners(char *str);
int		detect_start(char *str);
int		detect_triangle(char *str);
int		ft_if_reverse(char *str);
int		ft_if_triangle(char *str);
int		ft_strlen(char *str);
void	detect_shape(char *str, int i, int x, int y);

#endif
