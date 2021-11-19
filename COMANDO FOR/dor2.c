#include <stdio.h>
main(){
    int n=8, x=1, y=1, t=1, cont;
    for (cont=3; cont <= n; cont++){
        t=x+y;
        x=y;
        y=t;
    }
    printf("%d -  %d - %d", x , y , t);

    
}