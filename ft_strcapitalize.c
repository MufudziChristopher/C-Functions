/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:28:16 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 01:16:55 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	while (str[count])
		{
			if ((str[count] >= 'a' && str[count] <= 'z') && (count == 0))
			{
				str[count] -= 32;
				count++;
			}
			else if (str[count] == ' ' && str[count +1] >= 'a' && str[count + 1] <= 'z' )
			{
				str[count + 1] -= 32;
				count++;
			}
			else if (str[count] >= 'A' && str[count] <= 'Z' && str[count - 1] != ' ' && str[count -1] != '-'  && str[count-1] != '+' && (count != 0))
			{
				str[count] += 32;
				count ++;
			}
			else if (str[count] == '-' && str[count +1] >= 'a' && str[count +1] <= 'z')
			{
				str[count + 1] -= 32;
				count = count +2;
			}
			else if (str[count] == '+' && str[count + 1] >= 'a' && str[count +1] <= 'z')
			{
				str[count +1] -= 32;
				count = count + 2;
			}
			else
			{
				count++;
			}
		}
		return (str);
}

int main(void)
{
	char a[] = "Mufudzi-is+coolYo ||My name is MufudZi Christopher Nhamoinesu21 Cheers, pfikipfiki SLim-Shady";
	printf("%s\n", ft_strcapitalize(a));
	return (0);
}
