/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:42:41 by cagarci2          #+#    #+#             */
/*   Updated: 2023/09/22 18:42:41 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == '-' || c[i] == '+' || c[i] == ' ')
			i++;
		if (!(*c >= '0' && *c <= '9'))
			return (0);
		i++;
	}
	return (1);
}
