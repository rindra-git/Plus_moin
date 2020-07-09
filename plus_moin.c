#include <stdio.h>
#include <math.h>
#include <time.h>
#include "stdlib.h"
int easy_level()
{
    int choix, note;
    int hazar=rand() % 25+1;
    int x;
    note=0;
    printf("Mode: \n");
    printf("Put your choice betwing 1 - 25: \n");
    for( x=1; x<=5; x++)
    {
        printf("your choice: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("win !!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("number down !\n");
            printf("rest %d try \n",5-x);
        }
        else if(choix<hazar)
        {
            printf("number up !\n");
            printf("rest %d try\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("lose ! number  %d ",hazar);
        }
    }
    return note;
}
int medium_level ( )
{
    int choix, note;
    int hazar=rand() % 50+1;
    int x;
    note=0;
    printf("Mode : \n");
    printf("Put your choice betwing 1- 50: \n");
    for( x=1; x<=5; x++)
    {
        printf("your choice: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("win!!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("number down !\n");
            printf("rest %d try\n",5-x);
        }
        else if(choix<hazar)
        {
            printf("number up !\n");
            printf("rest %d try\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("lose ! number %d ",hazar);
        }
    }
    return note;
}
int hard_level ( )
{
    int choix, note;
    int hazar=rand() % 100+1;
    int x;
    note=0;
    printf("Mode: \n");
    printf("put your choice betwing 1 - 100: \n");
    for( x=1; x<=5; x++)
    {
        printf("your choice: ");
        scanf("%d",&choix);
        if(choix==hazar)
        {
            printf("win !!\n");
            x=6;
            note=note+1;
        }
        else if(choix>hazar)
        {
            printf("number down !\n");
            printf("rest %d try\n",5-x);
        }
        else if(choix<hazar)
        {
            printf("number up!\n");
            printf("rest %d try\n",5-x);
        }
        if(x==5 && choix!=hazar)
        {
            printf("lose ! number %d ",hazar);
        }
    }
    return note;
}
int main()
{
    int note,y;
    int partie;
    srand ( time(NULL) );
    note=0;
    printf("Mode choice: \n");
    printf("1- Easy  (1 - 25)\n");
    printf("2- Medium (1 - 50)\n");
    printf("3- Difficult (1 - 100)\n");
    scanf("%d",&partie);
    for(y=1; y<=10; y++)
    {
        switch(partie)
        {
            case 1 :
                note+=easy_level();
                printf("  point %d / %d\n",note,y);
                break;
            case 2 :
                note+=medium_level();
                printf("  point %d / %d\n",note,y);
                break;
            case 3 :
                note+=hard_level();
                printf("  point %d / %d\n",note,y);
                break;
            default :
                printf("Choice invalid\n");
        }
    }
}