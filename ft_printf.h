/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycameron <ycameron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:27:25 by ycameron          #+#    #+#             */
/*   Updated: 2019/12/07 21:35:46 by ycameron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define		FT_PRINTF_H

# include 	<stdarg.h>
# include 	<unistd.h>

/*
** Return the number of characters printed
** (not including the trailing '\0' used to end output to strings)
** or a negative value if an output error occurs
*/
int			printf(const char * format, ...);

#endif //FT_PRINTF_H
