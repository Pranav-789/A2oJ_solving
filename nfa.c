#include<stdio.h>
#include<string.h>

int stringAcceptor(int arr[][][], int start, int final, int index, char str[]){
    if(index == strlen(str)){
        return 1;
    }

    
}

int main(){
    int N;
    printf("Enter the number of nodes: ");

    scanf("%d", &N);

    int arr[N][N][2];

    printf("For links enter the following inputs\n");
    printf("1 for link\n");
    printf("-1 for no link\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d to %d via 1: ", i, j);
            scanf("%d", &arr[i][j][1]);
            printf("%d to %d via 0: ", i, j);
            scanf("%d", &arr[i][j][0]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(arr[i][j][0] == 1){
                printf("state%d to state%d on input of 0\n", i, j);
            }
            if(arr[i][j][1] == 1){
                printf("state%d to state%d on input of 1\n", i, j);
            }
        }
    }
}