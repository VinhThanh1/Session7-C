#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
        arr[i]=arr[i]+3;
        printf("arr[%d]=%d\n",i,arr[i]);
        }
        else{
            arr[i]=arr[i]+2;
        printf("arr[%d]=%d\n",i,arr[i]);
        }
    }
}
