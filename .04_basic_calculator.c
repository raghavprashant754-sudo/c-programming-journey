#include <stdio.h>
int main(){
    int A,B,Sum,sub,Mul,Div,Mod;

printf("enter the 1st no : ");
scanf("%d",&A);

printf("enter the 2nd no : ");
scanf("%d",&B);

Sum = A+B;
sub = A-B;
Mul = A*B;
Div = A/B;
Mod = A%B;

printf("\n--- Results ---\n");

printf("sum = %d\n",Sum);
printf("sub = %d \n",sub);
printf("Mul = %d\n",Mul);
printf("div = %d\n",Div);
printf("mod = %d\n",Mod);

return 0;

}

