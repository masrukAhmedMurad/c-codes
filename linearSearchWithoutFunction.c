#include<stdio.h>
int main(){

int arrayName[]={12,17,19,22,21,23,10,17,16,56,54,90,34,90};  //Array declaration

int arraySize=sizeof(arrayName)/sizeof(arrayName[0]);   //calculate number of element of the array

int i,searchValue,index=-1;

printf("Enter Your Search Value : ");
scanf("%d",&searchValue);   // read search value from user;

if(arraySize==0){

    printf("The Array is Empty.\n");

}else{

    for(i=0;i<arraySize;i++){
        if(arrayName[i]==searchValue){
            index=i;
            break;
        }
    }
}
//end of the looping


if(index!=-1){
    printf("%d is at [%d] no index\n",searchValue,index);//if the search value exist
}else{
    printf("\n%d doesn't exist in the array.\n",searchValue);//if the search value doesn't exist
}


return 0;
}
