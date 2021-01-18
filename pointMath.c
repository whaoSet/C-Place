#include<stdio.h>

int main()
{
    char ar[] ={1,2,3,4,5,6,7,8,9};
    char* p =ar;
    printf("p=\t%p\n",p);
    printf("p+1=\t%p\n",p+1);

    int a[] ={1,2,3,4,5,6,7,8,9};
    int *q =a;
    printf("q=\t%p\n",q);
    printf("q+1=\t%p\n",q+1);
    return 0;
}
