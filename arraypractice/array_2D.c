#include <stdio.h>

int main()
{

    int score[3][3]={0};
    int total[3]={0};
    

    for (int i = 0; i < 3; i++)
    {
        printf("enter the %d student grades \n", i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("enter grade :");
            scanf("%d", &score[i][j]);
            
            total[i]=score[i][j]+total[i];
        }
    }

        for (int i = 0; i < 3; i++)
    {
        printf("the %d student total grades is %d\n", i+1,total[i]);

    }
    



      
    return 0;
}