#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**                                                                                               
 * str_concat - the entry point - function to concat two strings                                  
 * @s1: the destination string                                                                    
 * @s2: the second string                                                                         
 * Return: NULL on failure                                                                        
 */

char *str_concat(char *s1, char *s2)
{
        char *str;
        int len = 0;
	int slen = 0;
        int i, j;

        if (s1 == NULL || s2 == NULL)
                return (NULL);

        while (s1[len] != '\0')
        {
                len++;
        }

	while (s2[slen] != '\0')
		slen++;

        str = (char *)malloc((len + slen + 1) * sizeof(char));

	if (str == NULL)
		return NULL;

        for (i = 0; i < len; i++)
        {
                str[i] = s1[i];
        }

        for (j = 0; s2[j] != '\0'; j++)
        {
                str[i + j] = s2[j];
        }

        str[i + j] = '\0';
        return (str);
}
