/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 02:28:58 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 03:00:41 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int count;
	int ans;
	int found;

	count = 0;
	found = 0;
	ans = 0;

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
			if ((str[count] >= 48  && str[count] <= 57))
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
