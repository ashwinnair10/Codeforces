#include<stdio.h>
#include<string.h>
int vowel(char a){
    if(a>=65&&a<=90)
    a+=32;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y')
    return 1;;
    return 0;
}
int main(){
    char s[103];
    char op[206]={'\0'};
    gets(s);
    int j=0;
    for(int i=0;i<strlen(s);i++){
        if(vowel(s[i]))
        continue;
        else{
            op[j++]='.';
            if(s[i]>=65&&s[i]<=90)
            op[j++]=s[i]+32;
            else
            op[j++]=s[i];
        }
    }
    puts(op);
    return 0;
}