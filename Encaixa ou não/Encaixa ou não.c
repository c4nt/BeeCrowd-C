#include <stdio.h>


int len(char v[]){
    int i=0,t=0;
    while(v[i]!='\0'){
        t++;
        i++;
    }

    return t;
}

int main() {
    char vetor1[11],vetor2[11];
    int a,b,c;
    int x=0;
    scanf("%s %s", vetor1,vetor2);
    a = len(vetor1);
    b = len(vetor2);
    c = len(vetor2);

    if(a<b){
        printf("nao encaixa");
    }
    else {
        for(int i = a-1; i > -1; i--){
           if(vetor1[i] == vetor2[b-1]){
                x++;
           }
            b--;
        }
        if(x == c){
           printf("encaixa");
        }
        else if(x != c){
            printf("nao encaixa");
        }
    }

}
