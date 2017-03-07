int findComplement(int num) {
    int size = 0;
    int y = 1;
    int temp = num;
    while(temp)
    {
        temp = temp>>1;  //101,num=2.5=2=010,size=1;num=2,nume==001,size=2; num =1,num=0,size=3;
        size++;
    }
    
    while(size)
    {
        
        y =y<<1;         // y=2=0010,size=2;y=0100=4,size=1;y=1000,size=0;        
        size--;
    }
    
    y = y-1;
    num = num^y;  
     
    return num;
}
