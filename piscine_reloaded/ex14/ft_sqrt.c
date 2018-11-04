int     ft_sqrt(int nb)
{
    int res;
    int i;

    i = 1;
    res = 0;
    if (nb == 0)
    {
        return (0);
    }
    else if (nb == 1)
    {
        return (1);
    }
    else if (nb > 1)
    {
        while(res <= nb)
        {
            res = i * i;
            if (res == nb)
            {
                return (i);
            }
            else if (res > nb)
            {
                return (0);
            }
            i++;
        }
    }
}