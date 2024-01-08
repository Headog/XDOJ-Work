#include<stdio.h>
#include<math.h>
int main(){
	int n,num,x = 0;
	scanf("%d",&n);
	num = n;
	for(;;num /= 10){
		x++;
		if(num / 10 == 0){
			break;
		}
	}
//	printf("%d\n",x);
//	printf("%d\n",n * n - n);
//	printf("%lf\n",pow(10,x));
	if((n * n - n) % (int)(pow(10,x)) == 0){
		printf("%d 1\n",n);
		return 0;
	}
	printf("%d 0\n",n);
	return 0;
}