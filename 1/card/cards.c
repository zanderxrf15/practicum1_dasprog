#include <stdio.h>
#include <math.h>

int main(){
int CARDS, C1, C2, N1, N2;
scanf("%d %d %d", &CARDS, &C1, &C2);

N1 = CARDS/pow(10, C1-1);
N1 = N1%10;
N2 = CARDS/pow(10, C2-1);
N2 = N2%10;

if(N1 == N2)
    {
        printf("Win 100$!");
    }

    else if (N1%2==0 && N2%2!=0)
    {
        printf("Win 50$!");
    }
    else if (N1%2!=0 && N2%2==0)
    {
        printf("Win 50$!");
    }
    else if (N1%2!=0 && N2%2!=0)
    {
        printf("Lose!");
    }
    else if (N1%2==0 && N2%2==0)
    {
        printf("Lose!");
    }

return 0;
}
