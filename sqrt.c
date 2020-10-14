/* This program computes the square root of a
positive number. */
// Usage ./a.out number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int check_input(char * s){
    if(*s=='+' || *s=='-') s++;
    while(*s != '\0')
    {
        if(!(*s>='0' && *s<='9'))
            return 0;
        s++;
    }
    return 1;
}

//start main
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}
	if(check_input(argv[1]))
	{
		int input = atoi(argv[1]);
		if(input<0)
			printf("DEBUG: Sqrt of %d is %fi\n",input,sqrt((input*-1)));
		else
			printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
		printf("DEBUG: End of program. Exiting.");
	}
	else
	{
		printf("DEBUG: Invalid Input!\n\n");
	}
	return(0);

} // end main
