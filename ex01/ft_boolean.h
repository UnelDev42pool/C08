/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:49:10 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/13 16:17:32 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef		FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
typedef  int t_bool;
# define EVEN(nb) (nb % 2)
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

#endif