/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yavi <yavi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:24:38 by yavi              #+#    #+#             */
/*   Updated: 2024/07/26 20:29:33 by yavi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libraries/libraries.h"
int ft_strcmp(const char *s1, const char *s2)
{
    int index = 0;

    while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
    {
        index++;
    }
    return (s1[index] - s2[index]);
}
