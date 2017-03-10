//https://leetcode.com/problems/add-digits/?tab=Description
int addDigits(int num) {
    int temp = num;
    num= 0;
        while(temp)
        {
            num += temp%10;
            temp /= 10;
        }
        if(temp==0 && num>=10)  //考虑到的，主要是sum大于等于10的进位问题
            num=addDigits(num);


    return num;
}
