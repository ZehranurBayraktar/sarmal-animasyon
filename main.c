#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

char harf;
int main()
{
    printf("Bir harf giriniz: ");
    scanf("%c",&harf);

    int i ;
    int j;

    while(1){

        for(i=1;i<=30;i++){
            for(j=0;j<i;j++){

               printf(" ");

            }

             printf("%c\n",harf);
             Sleep(70);



        }


        for(i=30;i>0;i--){
            for(j=0;j<i;j++){

               printf(" ");

            }

             printf("%c\n",harf);
             Sleep(70);



        }




    }


    return 0;
}
