#include <stdio.h>

int main(){
	double N;
	scanf("%lf",&N);
	int F,C;
	if(N == (int)N){
		printf("%d %d\n",(int)N,(int)N);
	}else if(N > 0){
		printf("%d %d\n",(int)N,(int)N+1);
	}else{
		printf("%d %d\n",(int)N-1,(int)N);
	}
	
}