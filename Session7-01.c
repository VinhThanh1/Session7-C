#include <stdio.h>
int main(){
    int n[5]={1,2,3,4,5};
    for(int i=0;i<(sizeof(n)/sizeof(n[0]));i++){
        printf("n[%d]=%d\n",i,n[i]);
    }
    printf("do dai cua mang la: %d",sizeof(n)/sizeof(n[0]));
    return 0;
}
