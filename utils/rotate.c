/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:43:50 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/21 12:43:50 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rotate_lst(t_list **stack)
{
    int     aux_content;
    t_list  *current_list;

    current_list = *stack;
    aux_content = (*stack)->content;
    while (current_list->next != NULL)
    {
        current_list->content = current_list->next->content;
        current_list = current_list->next;
    }
    current_list->content = aux_content;
}

void    rev_rotate(t_list **stack_a)
{
    t_list  *current_stack;
    int     aux_content;
    int     aux_end_content;
    
    current_stack = *stack_a;
    aux_content = (*stack_a)->content;
    while(current_stack->next != NULL)
    {
        current_stack->content = current_stack->next->content;
        current_stack = current_stack->next;
    }
    aux_end_content = current_stack->content;
    current_stack->content = aux_content;
    (*stack_a)->content = aux_end_content;
}

void    rev(t_list **stack_a, t_list **stack_b, char c)
 {
            if (c != 'r')
            {
				rotate_lst(stack_a);
            	rotate_lst(stack_b);
            	printf("rr\n");
			}
			if (c == 'r')
			{
				rev_rotate(stack_a);
            	rev_rotate(stack_b);
            	printf("rrr\n");
			}
        }

void    rotate_select(t_list **stack_a, t_list **stack_b, char c)
{
    if (stack_b == NULL )
        {
			if (c != 'r')
			{	
				rotate_lst(stack_a);
            	printf("ra\n");
			}
			if (c == 'r')
			{	
				rev_rotate(stack_a);
            	printf("rra\n");
        	}
		}
    else if (stack_a == NULL)
        {
            if (c != 'r')
            	{
					rotate_lst(stack_b);    
            		printf("rb\n");
				}
			if (c == 'r')
			{	
				rev_rotate(stack_b);    
            	printf("rrb\n");
			}
        }
    else
        rev(stack_a, stack_b, c);  
}
