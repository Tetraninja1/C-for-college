#include<stdio.h>
int main(){
	int a[5] = {45,43,65,34,22};
//	scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for(int i=0;i<=4;i++){
		printf("%d ,",a[i]+1 );
	}
	return 0;
}
