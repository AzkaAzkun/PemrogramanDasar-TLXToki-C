#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g,h,i;
	scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    printf("%d %d %d\n",a,d,g);
    printf("%d %d %d\n",b,e,h);
    printf("%d %d %d\n",c,f,i);

    /*
    kalian bisa langsung mengeprint di satu baris (ingat \n adalah enter)
	printf("%d %d %d\n%d %d %d\n%d %d %d\n",a,d,g,b,e,h,c,f,i);
    */
   
   return 0;
}
