#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b){
	return *((int*)a) - *((int*)b);
}
int main(){
	int n,nums[3] = {0};
	scanf("%d",&n);
	for(int i = n;i <= n * n;i++){
		if(i % 2 == 1) nums[0]++;
		if(i % 2 == 0) nums[1]++;
		if(i % 4 == 0 && i % 3 != 0) nums[2]++;
	}
	printf("%d %d %d\n",nums[0],nums[1],nums[2]);
	qsort(nums,3,sizeof(int),compare);
	printf("%d\n",nums[1] + nums[2]);
	return 0;
}