int     ft_iterative_factorial(int nb)
{
    int i;
    int facres;

    i = 1;
    facres = 1;
    if ((nb == 0) || (nb == 1))
    {
        return (facres);
    }
    else if ((1 < nb) && (nb < 12))
    {
        while (i <= nb)
        {
            facres = facres * i;
            i++;
        }
        return (facres);
    }
    else if ((nb < 0) || (nb > 12))
    {
        return (0);
    }
}