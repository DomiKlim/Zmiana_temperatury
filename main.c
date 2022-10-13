#include <stdio.h>
/*
 * 0-50 - 2
 * 51-70 - 3
 * 71-90 - 4
 * 91 - 100 - 5
 * */
/*Program z dnia 13.X.2022*/
void punkty(){

}

int main(){
    int punkty;
    printf("Podaj liczbe punktow ktora zdobyles:");
    if( 1!=scanf("%d", &punkty)){
        printf("Nie podales liczby");
        return 1;
    }
    if(punkty>=0 && punkty<=50){
        printf("\nTwoja ocena to dwa.");
    }
    else if(punkty>=51 && punkty<=70){
        printf("\nTwoja ocena to trzy.");
    }
    else if(punkty>=71 && punkty<=90){
        printf("\nTwoja ocena to cztery.");
    }
    else if(punkty>=91 && punkty<=100){
        printf("\nTwoja ocena to piec.");
    }
    else{
        printf("\nZla ilosc punktow");
        return 2;
    }
    return 0;

}
