#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i, average;
	int sum;
	int grade[SIZE];
	
	printf("input %i scores\n",SIZE);
	
	sum=0;
	
	for(i=0;i<SIZE;i++){
		scanf("%d",&grade[i]);
		sum += grade[i];
		
}
		
	for(i=0;i<SIZE;i++)
		printf("grade[%d] = %d\n",i,grade[i]); //print
		
	average = sum/SIZE;
	printf("average : %i\n", average);

	return 0;
}
