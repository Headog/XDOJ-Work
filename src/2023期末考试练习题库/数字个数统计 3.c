#include<stdio.h>
int main(){
	int a,b,tmp,nums[3] = {0},n = 0;
	scanf("%d%d",&a,&b);
	if(a > b){
		tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a;i <= b;i++){
		if(i % 3 == 0) nums[0]++;
		if(i % 4 == 0) nums[1]++;
		if(i % 5 == 0 && i % 2 != 0) nums[2]++;
	}
	printf("%d %d %d\n",nums[0],nums[1],nums[2]);
	for(int i = 0;i < 3;i ++){
		for(int j = 0;j < 3;j ++){
			if(nums[i] % nums[j] > n){
				n = nums[i] % nums[j];
			}
		}
	}
	printf("%d\n",n);
	return 0;
}