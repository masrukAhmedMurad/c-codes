#include<stdio.h>
int main(){

int arrayName[]={12,17,19,22,28,33,40,47,56,66,74,90,104,190};  //Array declaration which must be sorted

    int arraySize=sizeof(arrayName)/sizeof(arrayName[0]);   //calculate number of element of the array

    int searchValue,index=-1;

    printf("Enter Your Search Value : ");
    scanf("%d",&searchValue);   // read search value from user;

    //checking the array is empty or not
    if(arraySize==0){
        printf("The array is empty.\n");//if empty then print that

    }else{

        int leftIndex=0, rightIndex=(arraySize-1), mid;
//start while loop;
        while(leftIndex<=rightIndex){

            mid=(leftIndex+rightIndex)/2;   //or mid=leftIndex+((rightIndex-LeftIndex)/2)

            if(arrayName[mid]==searchValue){
                index=mid;//if search value is found;
                break;
            }else if(searchValue<arrayName[mid]){
                rightIndex=mid-1;
            }else{
                leftIndex=mid+1;
            }

        }
//end of while loop;

    }
//end of else block;


    if(index!=-1){
    printf("%d is at [%d] no index\n",searchValue,index);//if the search value exist
    }else{
    printf("\n%d doesn't exist in the array.\n",searchValue);//if the search value doesn't exist
    }


return 0;
}
