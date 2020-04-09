#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct temp{
    char start[20];
    char dest[20];
    int cost;
};

int main()
{
    int n,tcost=0,m=0,flag=0;
    char newstart[10]="delhi";
    char now[10],destiny[10]="chennai";
    struct temp p[50];
    printf("Enter the no of routes");
    scanf("%d",&n);
    printf("enter the details");
    for(int i=0;i<n;i++)
    {
        scanf("%s",p[i].start);
        scanf("%s",p[i].dest);
        scanf("%d",&p[i].cost);
    }
    printf("The route\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(p[i].start,newstart)==0)
        {
            strcpy(now,p[i].dest);
            tcost=p[i].cost;
            int g=0;
            char toroute[3][10];
            while(strcmp(now,destiny)!=0)
            {
                m=0;
                for(int j=0;j<n;j++)
                {
                    if(strcmp(now,p[j].start)==0)
                    {
                        strcpy(toroute[g++],now);
                        strcpy(now,p[j].dest);
                        tcost+=p[j].cost;
                        break;
                    }
                     m++;
                }
                if(m==n)
                {
                    printf("\n Not reachable \n");
                    flag=1;
                    break;
                }

            }

            if(flag==0)
            {

                printf("\nDelhi ");
                for(int l=0;l<g;l++)
                {
                    printf("%s  ",toroute[l]);
                }
                printf("Chennai ");
                printf(" %d\n",tcost);
            }
        }
    }

    if(tcost==0)
        printf("Not reachable");

    return 0;
}
