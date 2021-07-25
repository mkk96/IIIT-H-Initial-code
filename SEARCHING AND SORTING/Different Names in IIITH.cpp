#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,count=1,k=-1,flag=0,j;
    scanf("%d",&n);
    char name[n+1][100],first[n+1][100];
    for(i=0;i<=n;i++)
    {
        gets(name[i]);
    }
    for(k=0;k<=n;k++)
    {
    	for(i=0;i<=(strlen(name[k]));i++)
	    {
	        j=0;
	        if(name[k][i]==' '||name[k][i]=='\0')
	        {
	        	first[k][i]='\0';
				break;
	        }
	        else
	        {
	            first[k][i]=name[k][i];
	        }
	    }
	}
    for(i=1;i<=n;i++)
    {
    	count=0;
        for(j=i+1;j<=n;j++)
        {
        	printf("%s %s\n",first[i],first[j]);
            if(!strcmp(first[i],first[j]))
            {
            	//printf("%s %s\n",first[i],first[j]);
                flag=1;
                count++;
                first[j][0]='\0';
            }
        }
        if(count>1)
        {
            //printf("%s %d\n",first[i],count);
        }
    }
    if(!flag)
    {
        printf("-1");
    }
    return 0;
}

