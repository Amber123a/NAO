#include <stdio.h>
 
int checkPrime(int n);
int main()
{
    int n, i, flag = 0;
 
    printf("����������: ");
    scanf("%d", &n);
 
    for(i = 2; i <= n/2; ++i)
    {
        // ����ж�
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
                break;
            }
 
        }
    }
 
    if (flag == 0){
	
	printf("%d = ",n);
	
	while(n/2>1){
		
		n=n-2;
		printf("2 + ");
	}
	
	printf("%d",n);
	
	} 
        
 
    return 0;
}
 
// �ж�����
int checkPrime(int n)
{
    int i, isPrime = 1;
 
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }  
    }
 
    return isPrime;
}


