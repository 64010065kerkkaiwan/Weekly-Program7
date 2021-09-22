#include <stdio.h>

int total( int x){
    int t=0  ;
    for (int i = 0; i < x; i++)
    {
        t = t + i ;
    }
    printf("There was a total of %d handshakes.",t);
}
int main(){
    int n ;
    printf("number of people : " );
    scanf("%d",&n);
    total(n);
    return 0 ;
}
//ใช้สูตร  [n(n-1)]/2
