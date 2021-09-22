#include <stdio.h>
int main(){
    int n ;
    int t = 1 ;
    printf("number of people : " );
    scanf("%d",&n);
    for (int i = 0; i < 2; i++)
    {
       n = n - i ;
       t = t * n ;
    }
    printf("There was a total of %d handshakes.\n",t/2);
    return 0 ;
}
//ใช้สูตร  [n(n-1)]/2