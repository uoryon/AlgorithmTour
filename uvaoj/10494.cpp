#include <cstdio>  
#include <cstring>  
const int maxsize=10000000;  
char s[maxsize],ans[maxsize];  
int main()  
{  
    char c;  
    long long b,a;  
    memset(s,0,maxsize);  
    while(scanf("%s %c %lld",s,&c,&b)!=EOF)  
    {  
        memset(ans,0,maxsize);  
        int i;  
        a=0;  
        int j=0;  
        int len=strlen(s);  
        for(i=0;i<len;++i)  
        {  
            a=a*10+s[i]-'0';  
            ans[j++]=a/b+'0';  
            a=a%b;  
        }  
        if(c=='%')  
            printf("%lld\n",a);  
        else 
        {  
            i=0;  
            while(ans[i]=='0')++i;  
            if(ans[i]==0)--i;  
            for(;i<=j-1;++i)  
                printf("%c",ans[i]);  
            printf("\n");  
        }  
    }  
    return 0;  
} 