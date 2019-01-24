/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:18:25 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 00:27:15 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
			count++;
		}
		else
		{
			count++;
		}
	}
	return (str);
}
