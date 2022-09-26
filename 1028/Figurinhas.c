#include <stdio.h>

int main() {
    int n,f1,f2,i,x,y;
    scanf("%d",&n);

    while(i<n){
        scanf("%d %d",&f1,&f2);
        while(x != 0) {
            x--;
            x = f1%f2;
            if(x > 0){
                f1 = f2;
                f2 = x;

            }
            if (x == 0) {
                printf("%d\n", f2);
            }

        }
    x++;
    i++;
    }



    return 0;
}


