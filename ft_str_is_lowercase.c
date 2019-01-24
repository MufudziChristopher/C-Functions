/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 03:01:14 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 03:11:08 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	if (count == 0)
	{
		return (1);
	}
	else
	{
		count = 0;
		while (str[count])
		{
			if (str[count] >= 97 && str[count] <= 122)
			{
				count++;
			}
			else 
			{
			return (0);
			}
		}
		return (1);
	}
}
