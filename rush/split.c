int    ft_strlen(char *str);

int ft_space_remove(char *str)
{
    int init_size = ft_strlen(str);
    char num[16];
    char space = ' ';

    int i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != space)
        {
            num[j]=str[i];
            j++;
        }
        i++;
    }
    return 0;
}