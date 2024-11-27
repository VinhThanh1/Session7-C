#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao do dai mang: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
		while(arr[i]%2==0){
		printf("Gia tri nhap vao khong hop le. Vui long nhap lai: ");
		scanf("%d",&arr[i]);
	   }
	} 
	return 0;
}
