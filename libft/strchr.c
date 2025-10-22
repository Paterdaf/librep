/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dloic <dloic@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:57:02 by dloic             #+#    #+#             */
/*   Updated: 2025/10/21 16:10:23 by dloic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	int		i;
	char	*text;

	while (s[i])
	{
		if (s[i] == c)
		{
			//TODO : assigner le 1e element de text a l'element actuel de s
			return (text);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	strchr("step by step", 'b');
	return (0);
}
