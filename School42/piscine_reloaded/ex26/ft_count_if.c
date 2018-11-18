/*
Create a function ft_count_if which will return the number of elements of the
array that return 1, passed to the function f.

The array will be delimited by 0.
*/

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}