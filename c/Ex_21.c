#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p1, p2, average;
    
    printf("Enter the P1 score: ");
    scanf("%f", &p1);

    p2 = (15 - p1) / 2;

    printf("You will need to reach the %.2f score at P2 to be approved", p2);
    return 0;
}
