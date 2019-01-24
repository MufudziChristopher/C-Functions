/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnhamoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 08:57:44 by mnhamoin          #+#    #+#             */
/*   Updated: 2019/01/22 09:06:32 by mnhamoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (src[index] && index <= n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index - 1] = '\0';
	return (dest);
}
