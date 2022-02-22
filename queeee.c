#include<stdio.h>
#include<stdlib.h>
int main(){

int maxSize,choice,rear=0,front=-1,i;
creatq :printf("Enter the Maximum number of elements your QUEE can store :");
scanf("%d",&maxSize);

if(maxSize<=0){
        system("cls");
printf("Quee is not created.\n\n");
goto  creatq;

}else{
    system("cls");
printf("A Quee has been created which can contain %d elements.\n\n",maxSize);
}
 int que[maxSize];
while(1){
printf("Which operation do you want to perform?\n\n");
printf("1-for Enquee.(Insert data)\n2-for Dequee.(Remove data)\n3-for the rear value(Last value)\n4-for the front value(first value)\n5-for Display.(Display all the elements of that Quee.\n6-for Exit.\n\n");
printf("Enter your choice (1/2/3/4/5/6) : ");
scanf("%d",&choice);


switch(choice){

case 1:
    system("cls");
    if(rear==maxSize){
        printf("The Quee is Full.\n\n");
    }else{
        int value;
        printf("Enter a value you want to insert : ");
        scanf("%d",&value);
        que[rear++]=value;
        system("cls");
        printf("%d has been inserted successfully.\n\n",value);
          if(front=-1){
            front++;
        }

    }
    break;

case 2:
     system("cls");
    if(rear==0){
            system("cls");
        printf("The QUEE is Empty\n\n");

    }else{
        system("cls");
    printf("%d has been deleted successfully. from the QUEE\n\n",que[front++]);
    if(front==rear){
        front=-1;
        rear=0;
    }

    }
    break;

case 3:
    system("cls");
    if(front!=-1){
        printf("Front value is : %d\n\n",que[front]);
    }




case 4:
    system("cls");
    if(rear!=0){
        printf("Rear value is : %d\n\n",que[rear-1]);
    }else{
    printf("The QUEE is empty.\n\n");
    }

break;

case 5:
    system("cls");
    if(rear!=0){
            printf("Elements of the QUEE are as follows : \n\n");
        for(i=front;i<rear;i++){
            printf("%d ",que[i]);
        }

    printf("\n\n");
    }else{
    printf("The QUEE is empty.\n\n");
    }

break;


case 6:
    system("cls");
    printf("The program has stopped.\n\n");
    return 0;
    break;

default:
    system("cls");
    printf("Wrong Input.Please Try again.\n\n");

}
}

return 0;

}
