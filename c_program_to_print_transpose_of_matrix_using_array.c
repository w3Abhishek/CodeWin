#include <stdio.h>
#include <conio.h>
int main()
{
    int matt[3][3],i,j;

    printf("Enter the elements of Matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matt[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given matrix : \n");
    for(int a=0; a<3; a++)
    {
        for(int b=0; b<3; b++)
        {
            printf("%d\t", matt[b][a]);
        }
        printf("\n");
    }
    printf("Visit https://codewin.org for programming tutorials");
    getch();
}