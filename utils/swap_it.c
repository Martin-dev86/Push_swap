/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:56:13 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/21 11:56:13 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void swap_it(t_list **stack)
{
    int aux;

    if (stack != NULL && (*stack)->next != NULL)
    {
        aux = (*stack)->content;
        (*stack)->content = (*stack)->next->content;
        (*stack)->next->content = aux;
    }
}

void    select_swap(t_list **stack_a, t_list **stack_b)
{
    if (stack_b == NULL)
        {
            swap_it(stack_a);
            ft_printf("sa\n");
        }
    if (stack_a == NULL)
        {
            swap_it(stack_b);
            ft_printf("sb\n");
        }
    else
        {
            swap_it(stack_a);
            swap_it(stack_b);
            ft_printf("ss\n");
        }
}

