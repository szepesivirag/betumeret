#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=1;
    do{
        int meret=0;
        char ur;
        printf("Kerem adja meg a méretet: ");
        if ( ( (scanf("%d",&meret))==1) && (meret%2==1) && (meret>0) ){
            for(int i=0;i<meret;i++){
                if (meret!=3){
                    if ( (i==0) | (i==meret/2) | (i==meret-1) ){
                        for(int j=0;j<(meret);j++){
                            printf("*");
                        }
                    }else {
                        printf("*");
                    }
                }
                else {
                    printf("A 3-as szammal nem lehet E karaktert kiírni.");
                    break;
                }
                printf("\n");
            }
            a=0;
        }else{
            printf("\nValami hiba van a megadott adattal!\n");
            while(ur=getchar() != '\n'){}
        }




    } while(a);

    return 0;
}
