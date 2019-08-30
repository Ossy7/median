#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* print the median of a string */
void median(char *my_string)
{
	if(strlen(my_string) %2 == 0)
	{
		//index startes at 0 
		printf("Median: %c%c\n", my_string[strlen(my_string)/2-1], my_string[strlen(my_string) / 2 ]); 
    }
    else
    {
		printf("Median: %c\n", my_string[strlen(my_string) / 2 ]);
	}
}
     /*Sort alphabetically */
void sorter(char *mystring, void (*med) (char *))
{
	int i, j;
	char smp;
	for(i=0; mystring[i]; i++)
	{
		for(j=i+1; mystring[j]; j++)
		{
			if(mystring[j] < mystring[i])
			{
				smp = mystring[j];
				mystring[j] = mystring[i];
				mystring[i] = smp;
			}
		}
	}
	printf("Sorted alphabetically: %s\n", mystring);
	med(mystring);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		fprintf(stderr, "You need 1 argument.\n");
		return 1;
	}
    sorter(argv[1], median);
    return 0;
}

