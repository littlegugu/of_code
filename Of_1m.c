/*
* p39
* input:一个长度为n的数组，元素在0~n-1的范围内
* output:任意重复数
* me:计数排序
* 答案：快排
*/

#include <stdio.h>

int FindSame(int list[],int n){
    int Same[n];
    int value;
    for(int index = 0; index < n; index++)
    {
        value = list[index];
        if(Same[value]==1){
            return value;
        }else{
            Same[value]=1;
        }
    }
    return NULL;
}

main(int argc, char const *argv[])
{
    int list[]= {2,3,1,0,2,5,3};
    printf("%d\n",FindSame(list,7));
    getchar();
    return 0;
}
