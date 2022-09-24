#include <stdio.h>
#include <math.h>

int main () {

    int notas[6] = {100,50,20,10,5,2}, z, c = 0, inte, qtd_moedas, qtd_notas;
    int moedas[6] = {0,50,25,10,05,01};
    float valor, y;
    scanf("%f", &valor);

    inte = valor;
    valor -=  inte;
    z = round(valor*100);;

    printf("NOTAS:\n");

    for (int i = 0; i < 6; i++) {
        qtd_notas = inte/notas[i];
        printf("%d nota(s) de R$ %d.00\n", qtd_notas, notas[i]);
        inte -= qtd_notas * notas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 1; i < 6; i++) {
        if( inte > 0){
            printf("1 moeda(s) de R$ 1.00\n");
            inte = 0;
            c++;
            i--;
        }

        else if (inte == 0 && c == 0) {
            printf("0 moeda(s) de R$ 1.00\n");
            c++;
            i--;
        }

        else {
            qtd_moedas = z/moedas[i];
            if(i > 3){
                printf("%d moeda(s) de R$ 0.0%d\n", qtd_moedas , moedas[i]);
            }
            else {
                printf("%d moeda(s) de R$ 0.%d\n", qtd_moedas , moedas[i]);

            }
            z -= qtd_moedas * moedas[i];

        }
    }

}
