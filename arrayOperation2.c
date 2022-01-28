#include<stdio.h>
int main(){

int arrayOne[100]={12,22,34,23,56,76,34,23,45,34};
int insertIndex,insertValue;
int n=10;//number of elements in array
int i;

printf("Enter index number where you want to insert :");
scanf("%d",&insertIndex);//get input insert index where you want to insert an element;

printf("Enter value you want to insert :");
scanf("%d",&insertValue);//get input insert value what you want to insert;




if(insertIndex<0){

        printf("Insertion is not possible.");

}else if(insertIndex>=n){

    arrayOne[n]=insertValue;
    n++;

}else{

 for(i=n;i>insertIndex;i--){
    arrayOne[i]=arrayOne[i-1];

 }
 arrayOne[i]=insertValue;
 n++;

}

//print the array

for(i=0;i<n;i++){
    printf("%d  ",arrayOne[i]);
}

//stop



return 0;
}
