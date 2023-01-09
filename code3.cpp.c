#include<stdio.h> 
int main(){
	
	int i,n,j=0;
	
	printf("请输入一个正整数：");
	scanf("%d",&i);
	n=i;
	
	while(i/2!=0){
		
		if(i%2==0){
			i=i/2;
			j++;
		}else{
			i=(i-1)/2;
			j=j+2;
		}
	}
	
	printf("%d\n",j);
	
	while(n/2!=0){
		
		if(n%2==0){
			n=n/2;
			printf("^");
		}else{
			n=(n-1)/2;
			printf("-^");
		}
	}
	
	
	return 0;


}

