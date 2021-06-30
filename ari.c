#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include <string.h>
#include <assert.h>
string ari(string s){int t=0;
int p=0;
int k=0;
for(int i=0; s[i]!='\0' ; i++)
{if(isalnum(s[i]))
{t++;
}
else if(s[i]==' ')
{p++;
}
else if(s[i]=='.' || s[i]=='!' || s[i]=='?')
{k++;
}}
float r=((4.71*((float)t/p)) + (0.5*((float)p/k)) -21.43);
 int q;
 q=(int)r+1;
assert(0<q<15);
const string b[]={"Kindergarten", "First/Second Grade", "Third Grade","Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth Grade","College Student","Professor"};
return(b[q-1]);
}
