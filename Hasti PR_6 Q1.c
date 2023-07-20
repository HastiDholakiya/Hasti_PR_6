#include <stdio.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;

 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");

 	 
}

/*Enter  the string : NAYAN
string is palindrome
Enter  the string : HELLO
string is not palindrome
*/
