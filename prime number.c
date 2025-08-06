/*#include<stdio.h>
int main()
{
int n,flag=0;

printf("enter n;");
scanf("%d",&n);

if(n==1||n==0)
 {
 printf("not a prime number:%d",n);
 }
 else
   {
   for(int i=2;i<=n/2;i++)
    if(n%i==0)
      flag=1;
   }
if(flag==1)
 printf("not a prime number;%d",n);
else
  printf("\n prime no:%d",n);
  return 0;
}
/*
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    if(n==1||n==0)
    {
        printf("not a prime :%d",n);
    }
    else
    {


    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not a prime
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n,tn,rev;
    char vh;
    do
    {
        rev=0;
        printf("enter the value of n:");
        scanf("%d",&n);
        tn=n;
        while(n>0)
        {
            int rem=n%10;
            rev*=10+rem;
            n/=10;
        }
        if(tn==rev)
            printf("\n palindrome:%d",tn);
        else
            printf("not a palindrome:%d",tn);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;
    char ch;
   do

   {
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    printf("enter your Y or y");
    scanf("%c",ch);
   }while(ch=='Y'||ch=='y');
    return 0;
}*/

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    // Input original array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    printf("Enter the position to insert : ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // Shift elements to the right
    for(i = n; i > pos; i--) {

        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos] = val;
    n++;  // Increase array size

    // Display new array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int a[] = {7, 12, 0, 15, 0, 8, 0, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int r[n]; // Temporary array
    int k = 0;

    // Copy non-zero elements to result
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            r[k++] = a[i];
        }
    }

    // Fill remaining positions with 0
    while (k < n) {
        r[k++] = 0;
    }

    // Print the modified array
    printf("altered array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }

    return 0;
}*/
