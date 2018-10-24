/*
* p39
* input:一个长度为n的数组，元素在0~n-1的范围内
* output:任意重复数
* 答案：数组排序后数字i应在下标i上，若不，return
*/

#include <stdio.h>

int duplicate(int list[],int length){
    int value,tmp;
    for(int index = 0; index < length; index++)
    {
        value = list[index];
        while(value != index){
            if(value==list[value]){
                return value;
            }
            list[index]  = list[value];/*交换*/
            list[value ] = value;
            value = list[index];
        }
    }
    return NULL;
}

main(int argc, char const *argv[])
{
    int list[]= {2,3,1,0,2,5,3};
    printf("%d\n",duplicate(list,7));
    getchar();
    return 0;
}
