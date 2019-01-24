/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 02:01:08 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 02:27:52 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int count;
	int ans;
	int found;

	ans = 0;
	found = 0;
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
			if ((str[count] >= 'a' && str[count] <= 'z') || (str[count] >= 'A' &&  str[count] <= 'Z'))
			{
				ans++;
			}
			else
			{
				found++;;
			}
			count++;
		}
	}
	
	if (found != 0)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
