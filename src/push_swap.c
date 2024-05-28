/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:18:42 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/28 13:49:43 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parse_argument(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**str;

	i = 0;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		while (str && str[i])
			new_stack(&stack_a, ft_atoi(str[i++]));
	}
	if (argc > 2)
	{
		while (argv[i])
			new_stack(&stack_a, ft_atoi(argv[i++]));
	}
	push_select(&stack_a, &stack_b, 0);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*str;
	
	i = 0;
	if (argc <= 1)
		ft_printf("Error\n");
	str = argv[1];
	if (argc == 2 && ft_isdigit(str) == 0)
		ft_printf("Error\n");
	if (argc > 2)
		while (argv[i])
			if (ft_isdigit(argv[i++]) == 0)
				ft_printf("Error\n");
	parse_argument(argc, argv);
	return (0);
}
