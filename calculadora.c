#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float n1,n2;
char op;
printf("\nCalculadora\n\nUtilize +,-,*,/,^\n\n");
printf("\nDigite a expressao numero sinal numero: ");
scanf("%f %c %f",&n1,&op,&n2);
switch(op)
  {
  	case '+': printf("\nResultad: %.2f\n\n",n1+n2);
              break;
    case '-': printf("\nResultad: %.2f\n\n",n1-n2);
              break;          
	case '*': printf("\nResultad: %.2f\n\n",n1*n2);
              break;  		   	
  	case '/': if(n2!=0) 
	          printf("\nResultad: %.2f\n\n",n1/n2);
              else
              printf("\nNao existe divisao por zero\n\n");
              break;
    case '^': printf("\nResultado: %.2f\n\n",pow(n1,n2)); //math.h
	default:  printf("\nOperador invalido\n\n");       	
	}//Switch
system("pause");
return 0;				
}//main
