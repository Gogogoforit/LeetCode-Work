//https://leetcode.com/problems/detect-capital/?tab=Description



bool detectCapitalUse(char* word)
{
    int i;
    int t = 0;
    int flag = 3;
    
    if(strlen(word)== 1)
        return true;
        
    else
    {
        
            if(word[0]>='a' && word[0] <='z')
            {
                for(i=1;i<strlen(word); i++)
                {
                    if(word[i]>='A' && word[i] <='Z')
                        flag=0;
                }
            }    
            
           
            if(word[0]>='A' && word[0] <='Z')
                for(i=1;i<(strlen(word)); i++)
                {
                    if(word[i]>='A' && word[i] <='Z')
                        t = 1;
                    if(word[i]>='a' && word[i] <='z')
                        t = 2;
                    flag = flag &t;
                }
      if(flag==1 || flag ==2 ||flag==3)
            return true;
      else
            return false;           
    }
}
