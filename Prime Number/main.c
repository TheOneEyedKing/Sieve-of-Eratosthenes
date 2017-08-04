#include <stdio.h>
//implementing sieve of Eratosthenes for finding primes.
int main()
{
    int num[1000],limit,i,j;
    scanf("%d",&limit);
    //putting numbers to array starting from 2 to limit val.
    for(i=0;i<limit;i++)
        num[i]=i;
    //Sieve of Eratosthenes. Eliminating all composite number one by one
    for(i=2;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(num[i])
            {
                if(num[j]%num[i]==0)
                    num[j]=0;//Very important.
            }
        }
    }
    //Display
    for(i=2;i<limit;i++)
    {
        if(num[i])
            printf("%d ",num[i]);
    }
    return 0;
}
