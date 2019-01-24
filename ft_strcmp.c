/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:58:52 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/23 23:24:36 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int count;
	
	count = 0;
	while (s1[count] && s2[count])
	{
		if (s1[count] == s2[count])
		{ 
			count++;
		}
		else 
		{
			return (s1[count] - s2[count]);
		}
	}
	return (0);
}
