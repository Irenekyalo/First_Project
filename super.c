#include <stdio.h>
int main()
{
    int serial,qty;
    float amt,price,cash,change,tm;
    char response,name=serial;
    printf("\t UNIQUE STAGE MATT(K)LTD\n");
    printf("\t      RONGAI    \n");
    printf("P.O.BOX 8181-00300,MASAI MALL,RONGAI.\n");
    printf("LIC KRA/EFP/09052006/00444D,PIN:P052037342V\n");

    printf("          MOBILE: +254714220320\n\n");
        printf("BILL No: WL3065          DATE:16/11/23\n");
        printf("TILL No: TILL1           TIME:11:39AM\n");
        do
        {
       // printf("\n Enter serial\t:");
        scanf("%d ",&serial);

        printf("ITEM:");

        scanf("%d",&qty);


        switch(serial){
        case 12345: price=350;
        printf("rice");
            break;
            case 23456: price=150;
            printf("sugar");
            break;
            case 34567: price=250;
            printf("salt");
            break;
            case 45678: price=300;
            printf("flour");
            break;}
            amt=qty*price;
            tm=tm+amt;

            printf("\n");

            printf("QUANTITY:%d\tPRICE:%f\n",qty,price);
            puts(name);

            printf(" TOTAL:\n %f   \n",amt);
            printf("another good(y/n)");
            response=getch();
        }while(response =='y' || response=='y');
        do
        {
            printf("\n cash given\n");
            scanf("%f",&cash);
        }while(cash<tm);
            change=cash-tm;
   printf("\n change: %f\n",change);
      printf("\n served by:irene kyalo\n");
         printf("\n THANKYOU! COME AGAIN!\n");
          return 0;

    }
