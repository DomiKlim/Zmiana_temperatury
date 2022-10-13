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
/*
#include <stdio.h>
/*
I = 1.
V = 5.
X = 10.
L = 50.
C = 100.
D = 500.
M = 1 000.
 */
int main() {
    char rzym;
    printf("Podaj liczbe rzymska:");
    if( 1!= scanf("%[I,V,X,L,C,D,M]c",&rzym)){
        printf("Zle dane wejsciowe");
        return 1;
    }
    switch (rzym) {
        case 'I':
            printf("%c to 1",rzym);
            break;
        case 'V':
            printf("%c to 5",rzym);
            break;
        case 'X':
            printf("%c to 10",rzym);
            break;
        case 'L':
            printf("%c to 50",rzym);
            break;
        case 'C':
            printf("%c to 100",rzym);
            break;
        case 'D':
            printf("%c to 500",rzym);
            break;
        case 'M':
            printf("%c to 1000",rzym);
            break;
        default:
            printf('Twoja liczba rzymska nie jest poprawna');

    }
        

    return 0;
}

*/
