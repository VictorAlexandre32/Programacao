#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p1, p2, average;

    printf("Enter the P1 score: ");
    scanf("%f", &p1);
    printf("Enter the P2 score: ");
    scanf("%f", &p2);

    average = (p1 + p2 * 2) / 3;

    if(average >= 5)
    {
        printf("Approved!");
    }
    else
    {
        printf("Disapproved");
    }
    return 0;
}
