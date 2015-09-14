#include <stdio.h> 
#define SIZE 10001
 
 
int main() {
    int a[10001];
    for(int i = 0; i<10001;i++){
        a[i]=0;
    }
    int N, M;
    scanf("%d", &N);
    int temp;
    for(int n=0; n<N; n++){
        scanf("%d", &temp);
        a[temp]+=1;
    }
    scanf("%d", &M);
    for(int m =0; m<M; m++){
        scanf("%d", &temp);
        a[temp]-=1;
    }
    for(int i =0; i<10001; i++){
        if(a[i]<0) printf("%d ", i);
    }
    return 0;
}
