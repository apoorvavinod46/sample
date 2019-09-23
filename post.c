#include<stdio.h>
#include<ctype.h>
#define size 50
struct stack
{ int top;
float items[size];
};
void main()
{
 char expr[size];
 float res;
 printf("enter the expression: \n");
 scanf("%s",expr);
 while(getchar!='\n');
 res=eval(expr);
 printf("%f",&res);
}
float eval(char expr[size])
{ 
 int pos;
 char symb;
 struct stack opndstk;
 float opnd1,opnd2,result;
 while((symb=expr[pos]!='\0'))
{ 
 if(isdigit(symb))
 push(&opndstk,float(symb-'0'));
 else
 {
  opnd2=pop(&opndstk);
  opnd1=pop(&opndstk);
  result=oper(opnd1,opnd2,symb);
  push(opndstk,result);
 }
 pos++;
}
return(pop(&opndstk);
float oper(float opnd1,float opnd2,char symb);
{ 
 switch(symb)
{
 case '+':return(opnd1+opnd2);
 break; 
 case '-':return(opnd1-opnd2);
 break; 
 case '*':return(opnd1*opnd2);
 break; 
 case '/':return(opnd1/opnd2);
 break; 
 case '$':return(opnd1+$opnd2);
 break; 
 default: printf("invalid\n");
 exit(0);
}
}
