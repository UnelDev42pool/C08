/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:24:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/14 14:13:03 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// } t_stock_str;

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_str_len(src) * sizeof(char));
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	int			i;

	buffer = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		buffer[i].str = av[i];
		buffer[i].size = ft_str_len(av[i]);
		buffer[i].copy = ft_strdup(av[i]);
		i++;
	}
	buffer[i].str = 0;
	buffer[i].size = 0;
	buffer[i].copy = 0;
	return (buffer);
}

// int main(int argc, char *argv[])
// {
// 	ft_strs_to_tab(argc, argv);
// }