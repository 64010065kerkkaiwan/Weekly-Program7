#include <stdio.h>

int handshakes(int x){
    int t = 1 ;
    for (int i = 0; i < 2; i++)
    {
       x = x - i ;
       t = t * x ;
    }
    printf("There was a total of %d handshakes.\n",t/2);
}
int main(){
    int n ;
    printf("number of people : " );
    scanf("%d",&n);
    if (n>1)
    {
        handshakes(n);
    }
    else if (n<=1)
    {
        printf("ERROR");
    }
    
    return 0 ;
}
//ใช้สูตร  [n(n-1)]/2
