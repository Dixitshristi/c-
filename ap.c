//display the ap - 100,97,94,....upto all terms which are positive.
#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    //100 97 94.....
    //3 gap 
    float a = 100;
    for(int i =1;i<=n;i++)
    {
        printf("%f\n",a);
        a=a-3;
    }
    return 0;
}
