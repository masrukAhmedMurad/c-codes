#include<stdio.h>
int main(){

int arrayOne[100]={12,22,34,23,56,76,34,23,45,34};
int updateIndex,updateValue;
int i;
int n=10;//number of elements in array

printf("Enter index number where you want to update :");
scanf("%d",&updateIndex);//get input update index where you want to insert an element;

printf("Enter value you want to update :");
scanf("%d",&updateValue);//get input update value what you want to insert;


if(updateIndex>=n || updateIndex<0){
    printf("Update is not possible\n");

}else{

arrayOne[updateIndex]=updateValue;

}

//print the array

for(i=0;i<n;i++){
    printf("%d  ",arrayOne[i]);
}
//stop

return 0;
}
