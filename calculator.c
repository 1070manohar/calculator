#include<stdio.h>
#include<conio.h>
int main() {

    int  a,b,sum,Multiplication,divide,subtract,remender;
   
   char operator;
     system("cls");
    printf("Enter operator => ");
    scanf("%c",&operator);

    printf("Enter two operend => ");
    scanf("%d %d",&a,&b);



    switch (operator)
    {
    case '+':
          sum = a+b;
       printf("sum is => %d\n",sum );
       printf("Thank you");
       break;
    
    case '-':
          subtract = a-b;
       printf("subtract is => %d\n",subtract );
       printf("Thank you");
       break;

    case '*':
          Multiplication = a*b;
       printf("Multiplication is => %d\n",Multiplication);
       printf("Thank you");
       break;

       case '/':
          divide = a/b;
       printf("divide is => %d\n",divide );
       printf("Thank you");
       break;

      case '%':
          remender = a%b;
       printf("remender is => %d\n",remender );
       printf("Thank you");
       break;



    default:
     printf("ENTER VALID OPERATOR\n");
     printf("Thank you");
      break;

   
     
    }

     return 0;
}