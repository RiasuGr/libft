/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:47:39 by sabenet           #+#    #+#             */
/*   Updated: 2021/03/22 10:52:02 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (!((i >= 'A' && i <= 'Z')
			|| (i >= 'a' && i <= 'z')))
	{
		return (0);
	}
	return (1);
}
