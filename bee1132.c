/*
Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.

Input
The input file contains 2 integer numbers X and Y without any order.

Output
Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.
*/


#include<stdio.h>

int mul(int x , int y)
{
    int sum = 0 ;
    if(y > x )
    {
        for(int i =x ; i < y+1 ; i++ ){
        if (i % 13 != 0 ){
            sum += i;
        }
    }
    return sum;
    }
    else if( x > y)
    {
        for(int i = y ; i < x+1 ; i++){
            if(i %13 != 0){
                sum += i ;
            }
        }
        return sum;
    }
}

int main()
{
    int x , y;
    scanf("%d %d",&x ,&y);
    int re = mul( x, y);
    printf("%d\n", re);
}
