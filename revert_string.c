#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGHT 256

main()
{
	char phrase[LENGHT];
	char reverse[LENGHT];
	int i;
	
	gets(phrase);
	
	for(i = 0; i < strlen(phrase); i++)
	{
		reverse[i] = phrase[ se) - 1 - i];
	}
	
	puts(reverse);
	
	system("pause");
}

void reverse_char_array(char src[], char dest[])
{
	
}
