#include <stdio.h>
 
int main()
{
    char s[1000];  
    int  i,j,k,count=0,n;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(j=0;s[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");

    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);

	       
	   
       }
	   
	   
 	} 
 	 
     
}

/*
Enter  the string : development
 frequency count character in string:
 'd' = 1
 'e' = 3
 'v' = 1
 'l' = 1
 'o' = 1
 'p' = 1
 'm' = 1
 'n' = 1
 't' = 1
/*
