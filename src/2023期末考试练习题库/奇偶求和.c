#include<stdio.h>
int fun(int n){
	return 3 * (n - 1) * (n - 1) + 2 * (n - 1) + 1;
}
int main(){
	int m,sum_odd = 0,sum_even = 0,n_odd = 0,n_even = 0;
	scanf("%d",&m);
	for(int i = 1;;i++){
		if(n_odd < m - 1 && fun(i) % 2 == 1 && fun(i) > 100){
			sum_odd += fun(i);
			n_odd++;
		}else if(n_even < m && fun(i) % 2 == 0 && fun(i) > 100){
			sum_even += fun(i);
			n_even++;
		}
		if(n_odd == m - 1 && n_even == m){
			printf("%d %d\n",sum_even,sum_odd);
			return 0;
		}
		
	}
}