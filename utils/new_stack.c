/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:27:57 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/28 13:32:11 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	new_stack(t_list **stack_a, int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof (t_list));
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	if (stack_a == NULL)
		*stack_a = new_node;
	else
	{
		new_node->next = *stack_a;
		*stack_a = new_node;
	}
}