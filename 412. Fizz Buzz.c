//https://leetcode.com/problems/fizz-buzz/?tab=Solutions
/*
Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
char** fizzBuzz(int n, int* returnSize) {
    char **temp;
    int i=0,m=9;
    temp=(char **)malloc( n*sizeof(char *) ); //分配n行，每一行可能输出字符串，也可能输出数字
    for(i=0;i<n;i++ )
    {
        temp[i]=(char *)malloc( m*sizeof(char) ); //为每行分配m个数据空间，m取各个可能性中最大的
    }

    
     for(i=0;i<n;i++ )
     {
        if((i+1)%15==0)
        *(temp+i)="FizzBuzz";
        else if((i+1)%3==0)
        *(temp+i)="Fizz";
        else if((i+1)%5==0)
        *(temp+i)="Buzz";
        else
        sprintf(*(temp+i), "%d", i+1);
    }
    
    *returnSize=n;
    return temp;
    free(temp);
}
