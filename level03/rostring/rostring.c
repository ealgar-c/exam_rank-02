#include <unistd.h>

int ft_isblank(char c)
{
    return (c == ' ' || c == '\t');
}

void rostring(char *s)
{
    int i = 0;
    int first_word_length = 0;

    while (s[i])
    {
        while (ft_isblank(s[i]))
            i++;
        
        if (s[i] && !ft_isblank(s[i]))
        {
            if (first_word_length == 0)
            {
                while (s[i] && !ft_isblank(s[i++]))
                    first_word_length++;
            }
            else
            {
                while (s[i] && !ft_isblank(s[i]))
				{
    				write(1, &s[i], 1);
    				i++;
				}
                write(1, " ", 1);
            }
        }
    }

    i = 0;
    while (ft_isblank(s[i]))
        i++;

    while (first_word_length--)
        write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
    if (ac > 1 && *av[1])
        rostring(av[1]);

    write(1, "\n", 1);
    return (0);
}

