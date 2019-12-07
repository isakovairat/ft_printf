/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycameron <ycameron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:45:59 by ycameron          #+#    #+#             */
/*   Updated: 2019/12/07 20:38:09 by ycameron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

//
//void foo(char *fmt, ...)
//{
//	va_list ap;
//	int d;
//	char c, *s;
//
//	va_start(ap, fmt);
////	va_copy(ap2, ap);
//	while (*fmt)
//		switch(*fmt++) {
//			case 's':                       /* string */
//				s = va_arg(ap, char *);
//				printf("string %s\n", s);
//				break;
//			case 'd':                       /* int */
//				d = va_arg(ap, int);
//				printf("int %d\n", d);
//				break;
//			case 'c':                       /* char */
//				/* Note: char is promoted to int. */
//				c = va_arg(ap, int);
//				printf("char %c\n", c);
//				break;
//		}
//	va_end(ap);
//	/* use ap2 to iterate over the arguments again */
////	va_end(ap2);
//}
//
//
//int main()
//{
//	foo("%s%d", "STROKA", 24);
//	return(0);
//}
int sumnum(int num, ...)
{
	int sum = 0;
	va_list argptr;
	int count = 0;

	va_start(argptr, num);

	while (count < num)
	{
		sum += va_arg(argptr, int);
		count++;
	}

	va_end(argptr);
	return sum;
}

void printstr(int num, ...)
{
	int count = 0;
	char *ptr;
	va_list argptr;

	va_start(argptr, num);
	while (count < num)
	{
		ptr = va_arg(argptr, char*);
		printf("ptr = %s", ptr);
		count++;
	}
	va_end(argptr);
}



int main()
{
	int total;

	total = sumnum(5, 3, 5, 7, 6, "d");
	printf("total = %d\n", total);
	return 0;
}
