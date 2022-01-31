#include<stdio.h>
int binarySearch(int arrName[],int leftIndex, int rightIndex,int searchValue);  //function prototype declaration***optional***


int main(){

int arrayName[]={12,17,19,22,28,33,40,47,56,66,74,90,104,190};  //Array declaration which must be sorted

    int arraySize=sizeof(arrayName)/sizeof(arrayName[0]);   //calculate number of element of the array

    int searchValue,index;

    printf("Enter Your Search Value : ");
    scanf("%d",&searchValue);   // read search value from user;

    //checking the array is empty or not
    if(arraySize==0){
        printf("The array is empty.\n");//if empty then print that

    }else{
        index=binarySearch(arrayName,0,arraySize-1,searchValue);
    }


    if(index!=-1){
    printf("%d is at [%d] no index\n",searchValue,index);//if the search value exist
    }else{
    printf("\n%d doesn't exist in the array.\n",searchValue);//if the search value doesn't exist
    }


    return 0;
}
//end of main function


//binarySearch
//the function has four parameters- an array, lower bound,upper bound, search value;
int binarySearch(int arrayName[],int leftIndex,int rightIndex, int searchValue){

        if(leftIndex>rightIndex){
            return -1;    // if the search value doesn't match then return -1;
        }

           int mid=(leftIndex+rightIndex)/2;   //or mid=leftIndex+((rightIndex-LeftIndex)/2)

            if(arrayName[mid]==searchValue){
                return mid;//if search value is found;

            }else if(searchValue<arrayName[mid]){
               binarySearch(arrayName,0,mid-1,searchValue);   //recursive call
            }else{
               binarySearch(arrayName, mid+1, rightIndex, searchValue);   //recursive call
            }


}

//end of linear search function

