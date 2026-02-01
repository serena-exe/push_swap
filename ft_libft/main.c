
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>

//FT_ATOI
/* int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int result = ft_atoi(argv[1]);
		printf("Converted integer: %d\n", result);
	}
	return 0;
}*/

//FT_IS...
/*int	main(int ac, char **av)
{
	int i = 1;
	if (ac == 2)
	{
		while(i < ac)
		{
			printf("isalpha: %d", ft_isalpha(av[i][0]));
			printf("\nisdigit: %d", ft_isdigit(av[i][0]));
			printf("\nisalnum: %d", ft_isalnum(av[i][0]));
			printf("\nisascii: %d", ft_isascii(av[i][0]));
			printf("\nisprint: %d", ft_isprint(av[i][0]));
			printf("\nstrlen: %zu", ft_strlen(av[i]));
			printf("\nla vraie memset: %s", (char *)memset(av[i], '*', 3 * sizeof(char)));
			ft_memset(av[i], '*', 3 * sizeof(char));
			printf("\nmemset: %s", av[i]);
			i++;
		}
	}
	return (0);
}*/

// FT_ITOA
/*int main(void)
{
	int n = -2147483648;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}*/

// FT_MEMCHR
/*int main(int ac, char **av)
{
	printf("la vraie memchr:%s\n", memchr(av[1], 'C', 3));
	printf("la fausse memchr:%s\n", ft_memchr(av[1], 'C', 3));
}*/

// FT_MEMCMP
/*int main(int ac, char **av)
{
	printf("la vrai memcmp: %d\n", memcmp(av[1], av[2], atoi(av[3])));
	printf("la fausse memcmp: %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
}*/

// FT_MEMMOVE 
/*int main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("la vrai memmove: %s\n", (char *)memmove(av[1], av[2], atoi(av[3])));
		printf("la fausse memmove: %s\n", (char *)ft_memmove(av[1], av[2], atoi(av[3])));
	}
}*/

// FT_SPLIT
/*int main(void)
{
	char **result;
	char *str = "Hello,,world,this,is,42";
	char sep = ',';
	int i = 0;

	result = ft_split(str, sep);
	while (result[i])
	{
		printf("mot= %s\n", result[i]);
		i++;
	}
	return (0);
}*/

// FT_STRCHR and FT_STRRCHR
/*int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("la vraie strchr:%s\n", strchr(av[1], 'C'));
		printf("la fausse strchr:%s\n", ft_strchr(av[1], 'C'));
		printf("la vraie strrchr:%s\n", strrchr(av[1], 'C'));
		printf("la fausse strrchr:%s\n", ft_strrchr(av[1], 'C'));
	}
}*/

// FT_STRDUP
/*int main(void)
{
	char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);

	printf("Duplicate: %s\n", duplicate);
	free(duplicate);
	return (0);
}*/

// FT_STRITERI FT_STRMAPI
/*char	test(unsigned int i, char nwaaaaar)
{
	(void)i;
	return (nwaaaaar + 1);
}

int main(int argc, char *argv[])
{
	//if (argc != 2) return (1);
	char *str = ft_strmapi(argv[1], NULL);
	if (!str)
	{
		printf("NULL\n");
		return (0);
	}
	printf("%s\n", str);
}*/

// FT_STRJOIN
/*int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
	return (0);
}*/

// FT_STRLCPY and FT_STRLCAT
/*int	main(int ac, char **av)
{
	if (ac == 3)
	{	
		printf("\nstrlcpy: %zu", ft_strlcpy(av[1], av[2], ft_strlen(av[1])));
		printf("\nstrlcpyog: %zu", strlcpy(av[1], av[2], strlen(av[1])));
		printf("\nstrlcat: %zu", ft_strlcat(av[1], av[2], ft_strlen(av[1])));
		printf("\nstrlcatog: %zu", strlcat(av[1], av[2], strlen(av[1])));
	}
	return (0);
}*/

// FT_STRNCMP and FT_STRNSTR
/*int main(int ac, char **av)
{
	if(ac == 4)
	{
		printf("la vrai: %d\n", strncmp(av[1], av[2], atoi(av[3])));
		printf("la fausse: %d", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("la vraie strnstr: %s\n", strnstr(av[1],av[2], atoi(av[3])));
		printf("la fausse strnstr: %s", ft_strnstr(av[1], av[2], atoi(av[3])));
	}
}*/

//FT_STRRCHR
/*int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("la vraie strchr:%s\n", strchr(av[1], 'C'));
		printf("la fausse strchr:%s\n", ft_strchr(av[1], 'C'));
		printf("la vraie strrchr:%s\n", strrchr(av[1], 'C'));
		printf("la fausse strrchr:%s\n", ft_strrchr(av[1], 'C'));
	}
}*/

// FT_STRTRIM
/*int main(void)
{
	char *s1 = "   Hello, World!   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("Original: '%s'\n", s1);
	printf("Trimmed: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}*/

// FT_SUBSTR
/*int main(void)
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;
	char *str = ft_substr(s, start, len);
	printf("%s\n", str);
}*/

// FT_TOUPPER and FT_TOLOWER
/*int	main(int ac, char **av)
{
	int i = 1;
	
	if (ac == 2)
	{
		while(i < ac)
		{
			printf("toupper: %c",ft_toupper(av[i][0]));
			printf("\ntolower: %c",ft_tolower(av[i][0]));
			i++;
		}
	}
}*/

//FT_LSTNEW
/*int main() {
	t_list *l = ft_lstnew(ft_strdup("Hello, World!"));
	if (l && l->content && !ft_strncmp(l->content, "Hello, World!", 14) && l->next == NULL) {
		free(l->content);
		free(l);
		return 1;
	}
	if (l) {
		free(l->content);
		free(l);
	}
	return 0;
}*/

// FT_LSTADD_BACK
/*int main() {
	t_list *l = ((void*)0);
	t_list *n = ft_lstnew(ft_strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l == n && !ft_strncmp(l->content, "OK", 3))
	{
		free(l->next);
		free(l);
		return (1);
	}
	free(l->next);
	free(l);
	return (0);
}*/
