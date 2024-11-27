#include<stdio.h>
int main(){
	// khai bao mang so nguyen co 5 phan tu
	int arr[5];
	// yeu cau nguoi dung nhap tung phan tu
	printf("moi ban nhap lan luot 5 phan tu vao mang: \n");
	for(int i=0;i<5;i++){
		printf("moi ban nhap phan tu thu %d:  ",i+1);
		scanf("%d",&arr[i]);
	}
	// in ra cac phan tu trong mang
	printf("mang da duoc nhap la: \n");
	for(int i=0;i<5;i++){
		printf("arr[%d]=%d \n",i,arr[i]);
	}
	return 0;
}
