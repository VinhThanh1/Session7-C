#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int max,min;
	max =arr[0];
	min =arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("gia tri lon nhat cua mang la: %d\n",max);
    printf("gia tri nho nhat cua mang la: %d",min);
    return 0;
}
