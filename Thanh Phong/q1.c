#include <stdio.h> 
int main()  
{ int num1, num2; char op; 
int result; 
printf ( "Enter an expression (+ - * /): "); 
scanf("%d%c%d",&num1 , &op, &num2); 
switch (op) { case'+':result=num1 + num2;     
printf ("Result:%d",result);   
break;   
case'-':result=num1 - num2;      
printf ("Result:%d",result);     
break;     
case'*':result=num1 * num2;         
printf ("Result:%d",result);       
break;       case'/':if(num2==0)           
printf ("Result: Invalid!\n");         
else         { result=num1/num2;                 
printf ("Result:%d",result);         
} 
}
}
