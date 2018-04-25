#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum1=0, sum2=0;
    int i=0;
    char str1[100], str2[100];
    scanf("%s", &str1);
    scanf("%s", &str2);
    for(i=0; i<100; i++)
    {
        if(str1[i]>64 && str1[i]<91)
            str1[i]=str1[i]+32;
        if(str2[i]>64 && str2[i]<91)
            str2[i]=str2[i]+32;

    }
    for(i=0; i<100; i++)
    {
        if(str1[i]=='\0')
            break;
        //sum1=sum1+str1[i];
        if(str1[i]>str2[i])
            {printf("1");
            return 0;}
        if(str1[i]<str2[i])
            {printf("-1");
            return 0;}
    }
    //for(i=0; i<100; i++)
    //{
      //  if(str2[i]=='\0')
        //    break;
       // sum2=sum2+str2[i];}
    //if(sum1>sum2)
      //  printf("1");
    //if(sum2>sum1)
        //printf("-1");
    //if(sum1==sum2)
      //  printf("0");

      printf("0");
    return 0;
}
