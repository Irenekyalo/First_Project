//c program to read gender
#include <stdio.h>
int main()
{
    int gender;
    printf("Enter your gender\n");
    scanf("%c",&gender);
    switch(gender){
        case 'M':
        case 'm':
    printf("MALE");
    break;
    case'F':
    case 'f':
    printf("FEMALE");
    break;
    case 'U':
    case 'u':
    printf("UNISEX");
    break;
    default:
        printf("INVALID GENDER");

    }
    return 0;

}
