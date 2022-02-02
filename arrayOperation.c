//deletion of an element from an array


#include<stdio.h>
int main(){

int arrayOne[]={12,22,34,23,56,76,34,23,45,34};
int deleteIndex;
int n=10;  //number of elements in array
int i;


scanf("%d",&deleteIndex);//get input delete index which index element you want to delete;

//deletion start

if(deleteIndex>=n || deleteIndex<0){
    printf("Deletion is not possible\n");
}else{

for(i=deleteIndex;i<n-1;i++){
    arrayOne[i]=arrayOne[i+1];
}

n--;

}


//deletion end


//print the array

for(i=0;i<n;i++){
    printf("%d  ",arrayOne[i]);
}

//stop

return 0;
}

