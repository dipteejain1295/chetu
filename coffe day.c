#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int price, gst = 0 , total = 0 ;
    printf("\n BILLING SOFTWARE FOR CAFE COFFE DAY - CCD \n" ) ;
    printf(" \n =============================================\n") ;
    printf("\n ENTER THE NAME OF THE ITEM : \n");
  
    scanf("%s" , &a) ;
    printf("\n ENTER THE price OF THE ITEM : \n") ;
    scanf("%d" , &price) ;
    gst = (( price/100)*18);
    total = price + gst;
    printf(" \n CAFE COFFEE DAY \n");
    printf(" \n ====================\n") ;
    printf(" \n  ITEM price  Gst total \n") ;
    printf(" \n  %s %d %d \n" , a , price , gst , total  ) ;
    printf(" \n =============================================\n") ;
    printf(" \n THANK YOU TO VISIT AGAIN \n") ;
    


}
