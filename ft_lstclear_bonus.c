/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarda <hbarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:15:53 by hbarda            #+#    #+#             */
/*   Updated: 2023/12/13 18:16:51 by hbarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
