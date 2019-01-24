/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:24:46 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/23 23:53:45 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int count;

	count = 0;
	while(s1[count] && s2[count] && (count < n))
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
