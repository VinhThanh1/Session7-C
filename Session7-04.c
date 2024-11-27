#include <stdio.h>
int main(){
    int a,n[a];
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("nhap phan tu thu %d trong mang: ",i+1);
        scanf("%d",&n[i]);
    }
}
