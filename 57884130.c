#include<stdio.h>
#include<math.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int queenisN;
        scanf("%d\n",&queenisN);
        
        float resultx1=pow(0.143*queenisN,queenisN);
        int resultx2=pow(0.143*queenisN,queenisN);
        
        if((resultx1-resultx2)<0.5)
        {
            printf("%d\n",resultx2);
        }
        else
        {
            printf("%d\n",resultx2+1);
        }
    }
    return 0;
}
//Code By Bhumika Nayak