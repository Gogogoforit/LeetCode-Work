//https://leetcode.com/problems/roman-to-integer/?tab=Description
int Bit(char a)
{
    switch (a) 
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
    return 0;
}


int romanToInt(char* s) {
    int sum = 0;
    char max = 'I';
    for (int i = strlen(s)-1; i >= 0; --i) 
    {
        if (Bit(s[i]) >= Bit(max)) // 从右往左读，每读一次，以此数为基础进行判断。
        {
            max = s[i];  
            sum += Bit(s[i]);
        } 
        else 
            sum -= Bit(s[i]);
        
    }
    return sum;
}
