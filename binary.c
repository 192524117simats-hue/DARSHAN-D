/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word

    int len = strlen(str);

    // Simple bubble sort on characters
    for( i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }

    printf("String in lexicographical order: %s\n", str);

    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int a[100];
    int i,pos=-1,elem;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("enter element to delete:");
    scanf("%d",&elem);
    for(i=0;i<n;i++)
    {
        if(a[i]==elem)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        printf("element not found!\n");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;


}*/
