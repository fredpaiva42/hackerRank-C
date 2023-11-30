#include <stdio.h>

int SumOfDigitsFiveDigitNumber(){
    int n, unidade, dezena, centena, milhar, dezenaMilhar, soma = 0;

    scanf("%d", &n);

    dezenaMilhar = (n / 1000) / 10;
    milhar = (n/ 1000) % 10;
    n = n % 1000;
    centena = n /100;
    n = n % 100;
    dezena = n / 10;
    n = n % 10;
    unidade = n;



    printf("%d", (dezenaMilhar + milhar + centena + dezena + unidade));

    return 0;
}

// Uma maneira melhor de fazer
//    while (n > 0){
//        int digito = n % 10;
//        soma += digito;
//        n = n / 10;
//    }