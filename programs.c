/*#include <stdio.h>



int main() {
    int n,tn,rem,j=0;
    printf("enter the value of an n:");
    scanf("%d",&n);
    tn=n;
    while(n!=0)
        {
            for(int i=1;i<=n;i++)
            {
                rem=n%10;
                j+=rem*rem*rem;
                n/=10;
            }

        }
if(tn==j)
{
    printf("the given number %d is armstrong",tn);
}
else
{
    printf("the given number %d is not armstrong",tn);
}
        return 0;
}

#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("enter to get a factorial number:");
    scanf("%d",&n);
    for(int i=1;i<=1;i++)
    {
        fact*=i;
    }
    printf("\n the number of %d factorial is %d",n,fact);
return 0;
}

#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}*/
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++)
        {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is Not a Perfect Number\n", num);

    return 0;
}
