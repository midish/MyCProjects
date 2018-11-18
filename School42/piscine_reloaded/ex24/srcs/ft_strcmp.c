int     ft_strcmp(char *s1, char *s2)
{
    int size1;
    int size2;
    int i;
    int diff;

    i = 0;
    size1 = 0;
    size2 = 0;
    while(s1[i] != '\0')
    {
        size1 = size1 + s1[i];
        i++;
    }
    i = 0;
    while(s2[i] != '\0')
    {
        size2 = size2 + s2[i];
        i++;
    }
    diff = size1 - size2;
    return (diff);
}