/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:45:17 by cagarci2          #+#    #+#             */
/*   Updated: 2024/05/28 13:50:43 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/uio.h>
# include <sys/types.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}				t_list;

int		ft_strlen(const char *c);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	new_stack(t_list **stack_a, int content);
void    push_it(t_list **stack_out, t_list **stack_in);
void    push_select(t_list **stack_a, t_list **stack_b, int push);
void    rotate_lst(t_list **stack);
void    rev_rotate(t_list **stack_a);
void    rev(t_list **stack_a, t_list **stack_b, char c);
void    rotate_select(t_list **stack_a, t_list **stack_b, char c);
void	swap_it(t_list **stack);
void    select_swap(t_list **stack_a, t_list **stack_b);
char	**ft_split(char *str, char c);
int		ft_isdigit(char *c);
int		ft_atoi(char *str);
void	parse_argument(int argc, char **argv);
int		ft_printf(const char *format, ...);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif