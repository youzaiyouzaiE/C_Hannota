#include <stdio.h>
#include <stdlib.h>

void hannota(int n, char A, char B, char C);
void moving(char F ,char T);

int count;

// 百度百科上的
void Hanoi(int n, char a,char b,char c);
void Move(int n, char a, char b);

int main()
{
    int n=9;
    printf("Input you move plates's  number:\n");
    // scanf(" %d",&n);
    hannota(n, 'A', 'B', 'C');
    return 0;
}


///n 第几个盘子， A: 盘子所在的柱子， B:要借助的柱子， C：要移动到的柱子。（目标柱子）
void hannota(int n, char A, char B, char C) {
    /* 
        if (n = 1) {
            1个盘子只需从A 移动到C
        } else {
            1. 将A 柱子上的n-1 个盘子 ，借助C 移动到B
            2. 把A 上的第n个盘子移动到C  //输出
            3. 借助A 把 B 上的 n -1个盘子移动到C 
        }
     */

    if (n == 1)
    {
        moving(A,C);
    } else 
    {
        hannota(n-1,A, C, B);
        moving(A, C);
        hannota(n-1,B, A, C);
    }
}

void moving(char F ,char T) {
    count ++;
    printf ("The %d times moving ,move %c --> %c \n",count,F,T);
}


/// 百度百科上的
void Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        Move(n, a, c);
    }
    else
    {
        Hanoi(n - 1, a, c, b);
        Move(n, a, c);
        Hanoi(n - 1, b, a, c);
    }
}
void Move(int n, char a, char b)
{
    count++;
    printf("第%d次移动 Move %d: Move from %c to %c !\n",count,n,a,b);
}
