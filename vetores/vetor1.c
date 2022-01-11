#include <stdio.h>

int main(void){
int v1[5], v2[5], v3[5];
int i=0;
while (i < 5){
v1[i] = 5 - i;
v2[i] = 2*i - 5;
i = i+1;
}
printf("%d,", v1[1]);
printf("%d,", v1[2]);
printf("%d,", v1[3]);
printf("%d,", v1[4]);
printf("%d,", v1[5]);
printf("\n");

printf("%d,", v2[1]);
printf("%d,", v2[2]);
printf("%d,", v2[3]);
printf("%d,", v2[4]);
printf("%d,", v2[5]);
printf("\n");
i=0;
while (i<5){
v3[i] = 2*v1[i] + v2[i] - 3;
i++;
}

printf("%d,", v3[1]);
printf("%d,", v3[2]);
printf("%d,", v3[3]);
printf("%d,", v3[4]);
printf("%d,", v3[5]);
printf("\n");
}