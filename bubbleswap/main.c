#include<stdio.h>
#include<stdlib.h>

int main(){
	int array [500];
	int n, i, j, temp;

	printf("Enter number of elements\n");
	scanf("%d", &n);

	printf("Enter %d integers\n", n);

	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < (n -1); i++){
		for (j = 0; j < (n - i - 1); j++){
			if (array[j+1] < array[j]){
				temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}

	//printing out the array

	printf("\nNumbers are sorted in ascending order:\n");

	for(i = 0; i < n; i++)
		printf("%d ", array[i]);

	printf("\nBubble Swap Completed\n");
	return 0;
}