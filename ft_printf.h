/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:52:55 by ngualtie          #+#    #+#             */
/*   Updated: 2025/07/07 11:53:02 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const	char	*str, ...);
size_t	ft_putadress(void *adress);
size_t	ft_putchar(const char c);
size_t	ft_puthexa_lower(const unsigned int n);
size_t	ft_puthexa_upper(const unsigned int n);
size_t	ft_putnbr(const int n);
size_t	ft_putstr(const char *str);
size_t	ft_putunbr(const unsigned int n);
size_t	ft_strlen(const char *str);

#endif
