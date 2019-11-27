/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:08:23 by crfernan          #+#    #+#             */
/*   Updated: 2019/07/03 19:33:31 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
***		PUSH TO
*/

int		push_to(t_env *env)
{
	while (!(check_order_stack(env) == 0 && env->a_nb == env->argnb))
	{
		if (env->a_nb)
		{
			env->pibon_a = pibon_a(env);
			a_to_b(env);
			while (env->sz_pib_b > 0 && env->pibons_b[0] >= env->a[env->top_a])
				remove_pibon(env);
		}
		push_back(env);
	}
	return (0);
}
