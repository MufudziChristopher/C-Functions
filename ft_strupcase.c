/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:55:12 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/24 00:17:48 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int count;

	count = 0;

	while ( str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
			count++;
		}
		else 
		{
			count++;
		}
	}
	return (str);
}
