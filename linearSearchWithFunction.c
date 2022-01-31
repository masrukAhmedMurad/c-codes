#include<stdio.h>
int linearSearch(int arrName[],int arraySize,int searchValue);  //function prototype declaration***optional***


int main(){
    int arrayName[]={12,17,19,22,21,23,10,17,16,56,54,90,34,90};  //Array declaration

    int arraySize=sizeof(arrayName)/sizeof(arrayName[0]);   //calculate number of element of the array

    int searchValue,index;

    printf("Enter Your Search Value : ");
    scanf("%d",&searchValue);   // read search value from user;

    //checking the array is empty or not
    if(arraySize==0){
        printf("The array is empty.\n");//if empty then print that
    }else{
        index=linearSearch(arrayName,arraySize,searchValue);// if isn't empty then call linear function and store the value in index variable
    }


    if(index!=-1){
    printf("%d is at [%d] no index\n",searchValue,index);//if the search value exist
    }else{
    printf("\n%d doesn't exist in the array.\n",searchValue);//if the search value doesn't exist
    }



return 0;
}

//end of main function


// start linear search function
//the function has three parameters- an array, number of elements, search value;
int linearSearch(int arrayName[],int arraySize,int searchValue){

    int i;  //loop counting variable
    for(i=0;i<arraySize;i++){
        if(arrayName[i]==searchValue){
            return i;  //return i if search value is matched.
        }
    }
    //end of the loop;
    return -1;  // if the search value doesn't match then return -1;
}

//end of linear search function

