#include<stdio.h>
#define n 5

void push();
int pop();
void display();

int stack[n];
int top=-1;


void push(){

if(top>=n-1){
    printf("Stack is FULL.\n");
}else{
    int value;
    printf("Please enter a value: ");
    scanf("%d",&value);

    top++;
    stack[top]=value;

}

}


int  pop(){

if(top==-1){
    printf("Stack is Empty.\n");
}else{

top--;
return stack[top+1];

}

}


void display(){

int i;
if(top!=-1){
for(i=0;i<=top;i++){
    printf("%d ",stack[i]);

}
}else{
printf("There is no element in Stack.\n");

}

}




int main(){

push();
push();
push();
push();
push();
push();
push();
push();
push();
push();
display();
printf("\n%d\n",pop());
pop();
pop();
pop();
pop();
pop();
pop();
pop();
pop();
display();

return 0;

}



