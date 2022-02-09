#include<stdio.h>
int main(){

int a,i,lo,high,mid,sv,index=-1,isAccending=0,steps=0;

printf("Enter Number Of Elements : ");
scanf("%d",&a);

int arr[a];

for(i=0;i<a;i++){
        printf("\nEnter the value at index[%d] : ",i);
    scanf("%d",&arr[i]);
}

printf("\nEnter Search Value : ");
scanf("%d",&sv);

lo=0;
high=(sizeof(arr)/sizeof(arr[0]))-1;
if(arr[0]<=arr[high]){
    isAccending=1;
}

while(lo<=high){
    mid=lo+((high-lo)/2);

    if(arr[mid]==sv){
        index=mid;
        steps++;
        break;
    }else if(arr[mid]<sv){
        if(isAccending){
             lo=mid+1;
        }else{
             high=mid-1;
        }


    }else{
        if(isAccending){
               high=mid-1;
        }else{
               lo=mid+1;
        }

        }
          steps++;

}

if(high==-1){
    printf("\nArray is empty.\n");
}
else if(index !=-1){
    printf("\n%d is found at index[%d].\nFinally it takes %d steps to find out the value.\n",sv,index,steps);
}else{
    printf("\n%d is not found.\n",sv);
}

return 0;
}
