/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniciuslopes <viniciuslopes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:06:12 by vilopes           #+#    #+#             */
/*   Updated: 2024/12/03 00:27:57 by viniciuslop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnumber(int num);
char	*ft_itoa(int n);
int		ft_strlen(const char *str);
int     ft_putpointer(unsigned long ptr);
int     ft_putunsigned(unsigned int n);
void    ft_putnbr_hex(int num, int upper);


#endif
