#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n, i;
    
    scanf("%d",&n);
    
    if(n%2 != 0)
        
        printf("-1\n");
    
    else{
        
        for(i=1;i<=n/2;i++)
            
            printf("%d %d ",2*i, 2*i - 1);
        
        printf("\n");
        
    }
}
