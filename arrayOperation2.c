#include<stdio.h>
int main(){

int arrayOne[]={12,13,14,33,34,23,45,55,34,22,12,11,34,56,55,44,34};
int insertIndex,insertValue;
int i;
int arraySize=sizeof(arrayOne)/sizeof(arrayOne[0]);//number of elements in array

printf("Enter index number where you want to insert :");
scanf("%d",&insertIndex);//get input insert index where you want to insert an element;

printf("Enter value you want to insert :");
scanf("%d",&insertValue);//get input insert value what you want to insert;



if(arraySize==0){

    arrayOne[0]=insertValue;
    arraySize++;

}else if(insertIndex<0){

        printf("Insertion position is invalid.\n");

}else if(insertIndex>=arraySize){

    arrayOne[arraySize]=insertValue;
    arraySize++;

}else if(insertIndex>=0 && insertIndex<=arraySize){

 for(i=arraySize-1;i>insertIndex;i--){
    arrayOne[i]=arrayOne[i-1];

 }
 arrayOne[i]=insertValue;
 arraySize++;

}

//print the array

for(i=0;i<arraySize;i++){
    printf("%d  ",arrayOne[i]);
}

//stop



return 0;
}
