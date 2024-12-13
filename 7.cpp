#include <stdio.h>

int main7()
{
    int N;
    printf("请输入总人数：\n");
    scanf_s("%d", &N);
    int length[100]; 
    for (int i = 0; i < N; i++) 
    {
        length[i] = i + 1; 
    }

    int size = N; 
    for (int i = 1; i < 3 * N - 2; i++) {
        if (i % 3 == 0) {
            for (int j = 0; j < size - 1; j++) 
            {
                length[j] = length[j + 1];
            }
            size--; 
        }
        else {
            int temp = length[0];
            for (int j = 0; j < size - 1; j++) {
                length[j] = length[j + 1];
            }
            length[size - 1] = temp;
        }
    }

    printf("%d\n", length[0]);
    return 0;
}