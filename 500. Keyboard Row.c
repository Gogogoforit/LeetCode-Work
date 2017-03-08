//https://leetcode.com/problems/keyboard-row/?tab=Description
  /**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
    char a[20]={ 'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P' };
    char b[18]={ 'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
    char c[14]={ 'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
    int i, pos, flag, Count;
    char ** result = (char **)malloc(sizeof(char *) * (wordsSize));
    flag = Count = 0;

    for(i = 0; i < wordsSize; i++)
    {
        
        if(strchr(a, words[i][0]) != NULL)
            flag = 1;
        else if(strchr(b, words[i][0]) != NULL)
            flag = 2;
        else if(strchr(c, words[i][0]) != NULL)
            flag = 3;

        for(pos = 0; words[i][pos] && flag; pos ++)
        {
            switch(flag)
            {
                case 1:
                    if(strchr(a, words[i][pos]) == NULL) flag = 0;
                break;
                case 2:
                    if(strchr(b, words[i][pos]) == NULL) flag = 0;
                break;
                case 3:
                    if(strchr(c, words[i][pos]) == NULL) flag = 0;
                break;
            }
        }

        if(flag)
        {
            result[Count] = (char *)malloc(sizeof(char) * (2 + strlen(words[i])));
            strcpy(result[Count], words[i]);
            Count ++;
        }
    }

    * returnSize = Count;
    return result;
}
