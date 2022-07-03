#include<stdio.h>

int stack[10],choice, n,top,x,i;

void push();
void pop();
void display();
int main()
{
top=-1;
printf("Enter the size of stack:\n");
scanf("%d",&n);
printtf("STACK IMPLEMENTATION USING ARRAYS\n");
do
{
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default:
{
printf("\nINVALID CHOICE\n");
}
}
}
while(choice!=4);
return 0;
}
void push()
{

if(top >= n-1)
{
printf("\nSTACK OVERFLOW\n");
}
else
{
printf("Enter the value to be pushed:\n");
scanf("%d",&x);
top++;
stack[top]=x;
}}
void pop()
{
if(top<=-1)
{
printf("STACK UNDERFLOW\n");

}
else
{
printf("\nThe popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("%d\t",stack[i]);
}
else {
printf("\nEmpty Stack\n");
}
}
