#include<stdio.h>
int main()
{
    int array[14],j,loc,num=6;
    printf ("Enter elements\n");
    for(j=0;j<6;j++){
        scanf("%d",&array[j]);
    }
    printf ("Enter location to be deleted\n");
    scanf("%d",&loc);
    while(loc < 6){
            array[loc-1]=array[loc];
            loc++;

    }

 num--;
       for(j=0;j<6;j++){
                printf("%d",array[j]);
    }
   return 0;
}
