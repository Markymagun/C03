/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparteep <jparteep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 21:46:10 by jparteep          #+#    #+#             */
/*   Updated: 2026/05/28 12:29:01 by jparteep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void)
// {
//     char dest[50] = "Man";
//     char src[] = "Women";
//     char dest1[50] = "42Bangkok";
//     char src1[] = "";
//     char dest2[50] = "";
//     char src2[] = "C is awesome";
//     char dest3[50] = "";
//     char src3[] = "";
//     char dest4[50] = "chim";
//     char src4[] = "hardware";
//     printf("%s\n", ft_strncat(dest, src, 2));
//     printf("%s\n", ft_strncat(dest1, src1, 5));
//     printf("%s\n", ft_strncat(dest2, src2, 1));
//     printf("%s\n", ft_strncat(dest3, src3, 10));
//     printf("%s\n", ft_strncat(dest4, src4, 0));
// }
