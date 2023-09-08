#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cstring>

struct TRIE
{
    struct trie{
    bool isT=false;
    trie * arr[26];};

    trie * root = (trie *) malloc(sizeof(trie));  

    void add(char s[])
    {
        trie * cur =root;
        int size=strlen(s);
        for(int i=0; i<size; i++)
        {
            if(cur->arr[s[i]-'a']==NULL)
            {
                cur->arr[s[i]-'a'] = (trie*) malloc(sizeof(trie));
            }
            cur= cur->arr[s[i]-'a'];
        }
        cur->isT=true;
    }  

    bool check(char s[])
    {
        trie * cur =root;
        int size=strlen(s);
        for(int i=0; i<size; i++)
        {
            if(cur->arr[s[i]-'a']==NULL)
            {
                return false;
            }
            cur= cur->arr[s[i]-'a'];
        }
        return cur->isT;
    }

};

int main()
{
    TRIE t;
    char str[]="";
}

