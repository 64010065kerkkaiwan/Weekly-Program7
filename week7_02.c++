#include <stdio.h>
int main(){
    int n ;
    int t=0 ,i ;
    printf("number of people : " );
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        t = t + i ;
    }
    printf("There was a total of %d handshakes.",t);
    return 0 ;
}