/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaez <dpaez@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:16:19 by dpaez             #+#    #+#             */
/*   Updated: 2024/09/13 23:45:28 by dpaez            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *arr[], int args)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < args)
	{
		while (arr[i][j] != '\0')
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	swap(char *arr[], int i, int j)
{
	char	*temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	bubble_sort(char *arr[], int n)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (i < n)
	{
		while (j < n - i)
		{
			if (arr[j][k] > arr[j + 1][k])
				swap(arr, j, j + 1);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	bubble_sort(argv, argc);
	ft_print_params(argv, argc);
	return (0);
}
