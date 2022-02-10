//Napisz program w C, który znajduje i wypisuje pierwszą i ostatnią cyfrę w liczbie(int).
//lab8/zad1

#include <stdio.h>

//niestety poniższa próba nie rozwiązuje problemu przeładowania buforu
int main()
{
    int num, firstNum, lastNum;
    printf("Wpisz liczbe: \n");
    scanf("%d", &num);
    if(num > -2147483647 || num < 2147483647){
        lastNum = num % 10;
        while(num >= 10){
            num = num / 10;
        }
        firstNum = num;
        printf("Pierwsza cyfra to: %llu, a ostatnia: %llu", firstNum,lastNum);
    } else {
        printf("wpisz liczbę z zakresu -2147483647 - 2147483647");
    }
    return 0;
}