//https://leetcode.com/problems/sum-of-two-integers/?tab=Description
//这道题，我真的没有很好的思路，写了半天，我写的倒是跑出来了，但是写的那个巨麻烦。。。
//所以决定放弃之，参考了这个：http://www.bubuko.com/infodetail-1647196.html
int getSum(int a, int b) 
{
    {
    if(a == 0)
        return b;

    int x = a ^ b;
    int c = (a & b) << 1;
    return getSum(c, x);
    }
}
