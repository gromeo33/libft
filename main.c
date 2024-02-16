#include "libft.h"
#include <stdio.h>

int main()
{            
	char dest[1];
	char str[] = "cicciobello";
	printf("La lunghezza della stringa è: %zu", ft_strlcpy(dest, str, 7));
	printf("\nLa stringa di destinazione è: %s",dest);
	return 0;
}
