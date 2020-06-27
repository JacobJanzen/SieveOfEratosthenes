#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void){
	int range;
	int p = 2;
	bool foundP = true;
	printf("What range of prime numbers do you want to find? ");
	scanf("%d", &range);

	int *nums = malloc(range * sizeof(int));
	for(int i = 0; i < range; i++){
		nums[i] = i+1;
	}

	nums[0] = -1;

	do{
		for(int i = 2; p*i <= range; i++){
			nums[p*i-1] = -1;
		}
		foundP = false;
		for(int i = p; i < range && !foundP; i++){
			if(nums[i] != -1){
				p = nums[i];
				foundP = true;
			}
		}
	}while(foundP);

	for(int i = 0; i < range; i++){
		if(nums[i] != -1){
			printf("%d, ", nums[i]);
		}
	}
	printf("\n");
	free(nums);
	return 0;
}
