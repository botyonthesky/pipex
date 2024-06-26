/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:45:44 by tmaillar          #+#    #+#             */
/*   Updated: 2023/05/07 15:42:10 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (big == NULL || little == NULL)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big [i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
			j++;
			}
		}
	i++;
	}
	return (NULL);
}
