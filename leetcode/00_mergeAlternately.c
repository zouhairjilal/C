#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

	len = 0;
    while (str[len])
        len++;
    return (len);
}

char* mergeAlternately(char* word1, char* word2) {
    int		i, len;
	i = 0;

    len = ft_strlen(word1) + ft_strlen(word2);
    char *str = malloc(len + 1);

	while (word1[i] != '\0') 
	{
		str[i] = word1[i];
		str[i] = word2[i];
	}

	//str[0] = 'H';

	str[i] = '\0';
    return str;
}

int main()
{
    char *str = mergeAlternately("word1", "aloha");
    printf("str = %s\n", str);
    free(str); // free the malloc'd memory
    return 0;
}
