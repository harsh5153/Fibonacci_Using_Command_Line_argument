#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //to call atoi() function
main(int argc, char const *argv[])
{
	int n, third, first = 0 , second = 1;
	n = atoi(argv[1]);  //takes the command line argument
	if(argc!=2){
		printf("Wrong number of Inputs\n");   // If argument is more than 1, then throws this message. argc is initialised with value = 1
		return 0;
	}	
	if(n == 0){
		printf("wrong Input\n");
		return 0;
	}
	if (n == 1)
		printf("0\n");
	else if(n == 2)
		printf("0  1\n");
	else{
			printf("0  1  ");
		for (int i = 3; i <= n; ++i){
			third = first + second;
			printf("%d  ", third );
			first = second;
			second = third;	
		}
	}
	printf("\n\n%dth term Fibbonacci Number is %d\n",n , third);
	getch();
}