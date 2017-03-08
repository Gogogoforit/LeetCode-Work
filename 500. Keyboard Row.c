//https://leetcode.com/problems/keyboard-row/?tab=Description
//基本思想就是通过flag来标定每一排。达到判断的目的
char** findWords(char** words, int wordsSize, int* returnSize) {
    char a[20]={ 'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P' };
    char b[18]={ 'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
    char c[14]={ 'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
    int i, pos, flag, Count;
    char ** result = (char **)malloc(sizeof(char *) * (wordsSize)); //result用来最后返回这个char型的二维数组
                                                                    //目测女票这里应该不是太懂，你要是看到这里，有空再给你说
    flag = Count = 0;

    for(i = 0; i < wordsSize; i++)   //也就是对于每一行，先判断此行第一个字母的属性。
    {
        
        if(strchr(a, words[i][0]) != NULL) //#include <string.h>
                                           // char *strchr( const char *str, int ch );
                                           //The function strchr() returns a pointer to the first occurence of ch in str,
                                           //or NULL if ch is not found.
            flag = 1;
        else if(strchr(b, words[i][0]) != NULL)
            flag = 2;
        else if(strchr(c, words[i][0]) != NULL)
            flag = 3;

        for(pos = 0; words[i][pos] && flag; pos ++)  //确定第一个字母的属性后，将此行后面的字母挨个遍历之。
        {
            switch(flag)
            {
                case 1:
                    if(strchr(a, words[i][pos]) == NULL) 
                        flag = 0;
                break;
                case 2:
                    if(strchr(b, words[i][pos]) == NULL) 
                        flag = 0;
                break;
                case 3:
                    if(strchr(c, words[i][pos]) == NULL)
                        flag = 0;
                break;
            }
        }

        if(flag)  //执行到这步后，flag仍然不为0，则说明此排所有字母位于键盘同一排上，
        {
            result[Count] = (char *)malloc(sizeof(char) * (1 + strlen(words[i]))); //因为不确定到哪一排的时候，才能够有满足要求的一行，
                                                                                   //所以这里是words[i]
                                                                                   //malloc()是“动态分配内存空间”（女票你要查查这个。）      
            strcpy(result[Count], words[i]);
            Count ++;
        }
    }

    * returnSize = Count;
    return result;
}
