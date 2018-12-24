
#include <stdio.h>
int partition(int arr[],int l, int h);
void swap(int*,int*);
void quickSort(int arr[],int l,int h);

void PRINT(int arr[]){
        for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
        printf("%d ",arr[i]);
        printf("\n");
}

void quickSort(int arr[],int l,int h){
    PRINT(arr);
    if(l<h){
        int part = partition(arr,l,h);
        quickSort(arr,l,part);
        quickSort(arr,part+1,h);
    }
}

int partition(int arr[],int l, int h){
    int pivot=arr[l];
    int j=h,i=l;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[i]>=pivot);
        if(i<j)
        swap(&arr[i],&arr[j]);
    }
    return j;
}

void swap(int *p1,int*p2){
    int temp;
    temp =*p1;
    *p1=*p2;
    *p2 = temp;
}

int main()
{
    int arr[]={10,16,2,1,55,6,7,3,98,45,9};
    
    PRINT(arr);
    
    quickSort(arr,0,(sizeof(arr)/sizeof(int))-1);
    
    PRINT(arr);

    return 0;
}
