#include<stdio.h>
#include<stdlib.h>
int main(){

int maxSize,i;
system("cls");
create: printf("Enter MAX SIZE of ELEMENTS of your STACK : ");//declaring stack Size
scanf("%d",&maxSize);

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
        if(maxSize<=0){
            printf("\nSTACK is not created.\n\n");
            goto create;
        }else if(top+1==maxSize){
            printf("\nYour Stack is FULL.\n");
        }else{
            int value;
            printf("\nEnter a value you want to insert : ");
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
            printf("\nSTACK is EMPTY.\n");
        }else{
            printf("\n%d has been deleted Successfully.\n",myStack[top]);
            top--;
        }
        break;

        //deletion code end
    case 3:
        system("cls");
        //finding peak code start
           if(top!=-1){
            printf("\nPeak Value of this Stack is %d .\n",myStack[top]);

        }else{
            printf("\nStack is EMPTY.\n");
        }
        //peak code end
        break;

    case 4:
        system("cls");
        //display code start
        if(top!=-1){
                 printf("\n");
            for(i=0;i<=top;i++){
               printf("%d ",myStack[i]);
            }
        }else{
            printf("\nStack is EMPTY.\n");
        }
        //display code end
        break;

    case 0:
       return;//program terminated

    default:
        system("cls");
        printf("\nInvalid Input.Please try again.\n");
        goto choice;//enter max size

    }
    //ending of switch case


}
//ending of whiule loop

}

//@aurthor M.A.Murad
//CIS.DIU
