/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:04:48 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/21 12:04:48 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    push_it(t_list **stack_out, t_list **stack_in)
{
    if (*stack_out == NULL)
        return;
    t_list  *aux;

    aux = (*stack_out)->next;
    new_stack(stack_in, (*stack_out)->content);
    free(*stack_out);
    *stack_out = aux;
}

void    push_select(t_list **stack_a, t_list **stack_b, int push)
{
    if (push == 1)
        {
            push_it(stack_b, stack_a);
            ft_printf("pa\n");
        }
    else 
        {
            push_it(stack_a, stack_b);
            ft_printf("pb\n");
        }
}