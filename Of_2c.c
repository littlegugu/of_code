/*
* p39
* input:一个长度为n的数组，元素在0~n-1的范围内
* output:任意重复数
* 要求不能改input数组
* 答案：二分
*/

#include <stdio.h>

int countRange(const int* numbers,int length,int start,int end){
    if(numbers==NULL)
        return 0;
    
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i]>=start && numbers[i]<=end)
            ++count;
        
    }
    // printf("%d,%d,%d\n",count,start,end);
    return count;
}

int duplicate(const int* numbers,int length,int *dup){

    if(length<=0 || numbers==NULL){
        return -1;
    }
    for(int i = 0; i < length; i++)
    {
        if (numbers[i]<0 || numbers[i]>length-1)
        {
            return -1;
        }
    }
    int start = 1;
    int end = length-1;
    while (end>=start)
    {
        int mid   = ((end-start)>>1)+start;
        int count = countRange(numbers,length,start,mid);
        if (end==start)
        {
            
            if (count>1) {
                return start;
            }
            else {
                break;
            }
            
        }
        if(count>(mid-start+1)){
            end   = mid;
        }else{
            start = mid+1;
        }
    }
    return -1;
}


main(int argc, char const *argv[])
{
    const int list[] = {2,3,5,4,3,2,6,7};
    int *dup   = NULL;
    duplicate(list,sizeof(list)/sizeof(list[0]),dup);
    printf("%d\n",duplicate(list,sizeof(list)/sizeof(list[0]),dup));
    getchar();
    return 0;
}
