#include<stdio.h>
#include<stdlib.h>
int main(){

int maxSize,i;
system("cls");
create: printf("Enter MAX SIZE of ELEMENTS of your STACK : ");//declaring stack Size
scanf("%d",&maxSize);
  if(maxSize<=0){
            printf("\nSTACK is not created.\n\n");
            goto create;
        }else{
        printf("\nYou have successfully created a stack that can contain %d elements.\n",maxSize);
        }

int myStack[maxSize];//creating stack
int top=-1;//top index


while(1){

    int choice;

    choice: printf("\n\nWhich operation do you want to perform?\n\n1-for push\n2-for pop\n3-for peak(display top value)\n4-for display all values\n0-for EXIT\n");
    printf("\nEnter your Choice (1/2/3/4/0) : ");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        system("cls");//clear screen
        //inserting code start
      if(top+1==maxSize){
            printf("Your Stack is FULL.\n");
        }else{
            int value;
            printf("Enter a value you want to insert : ");
            scanf("%d",&value);//get input the value
            top++;
            myStack[top]=value;//assigning the value
            printf("\n%d has been INSERTED successfully into the STACK\n",value);//notification
        }
            break;
        //inserting code end

    case 2:
        system("cls");//clear screen
        //deletion code start

        if(top==-1){
            printf("STACK is EMPTY.\n");
        }else{
            printf("%d has been deleted Successfully.\n",myStack[top]);
            top--;
        }
        break;

        //deletion code end
    case 3:
        system("cls");
        //finding peak code start
           if(top!=-1){
            printf("Peak Value of this Stack is %d .\n",myStack[top]);

        }else{
            printf("Stack is EMPTY.\n");
        }
        //peak code end
        break;

    case 4:
        system("cls");
        //display code start
        if(top!=-1){
                 printf("Values of the Stack are as follows : \n\n");
            for(i=0;i<=top;i++){
               printf("%d ",myStack[i]);
            }
        }else{
            printf("Stack is EMPTY.\n");
        }
        //display code end
        break;

    case 0:

        system("cls");
        printf("Program TERMINATED successfully.\n");
       return;//program terminated

    default:
        system("cls");
        printf("Invalid Input.Please try again.\n");
        goto choice;//enter max size

    }
    //ending of switch case


}
//ending of whiule loop

}

//@aurthor M.A.Murad
//CIS.DIU
