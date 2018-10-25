#include <stdio.h>
#include <string.h>


char* replace(char *str){
    int i              =  0;
    int originalLength =  0;
    int numberOfBlank  =  0;
    // int length = strlen(str);
    char *p1,*p2;
    while(str[i]!='\0'){
        ++originalLength;
        if (str[i]==' ')
            ++numberOfBlank;
        ++i;
    }
    int newLength = originalLength+numberOfBlank*2;
    if (newLength<originalLength)
    {
        return str;
    }
    int indexOfOriginal = originalLength;
    int indexOfNew      = newLength;
    while(indexOfNew >= 0 && indexOfOriginal >= 0){
        if (str[indexOfOriginal]!=' ') {
            str[indexOfNew--]=str[indexOfOriginal];
        }
        else {
            str[indexOfNew--]='0';
            str[indexOfNew--]='2';
            str[indexOfNew--]='%';
        }
        indexOfOriginal--;
    }
    return str;
}

main(int argc, char const *argv[])
{
    char str[] = "We are happy.";
    puts(replace(str));

    getchar();
    return 0;
}