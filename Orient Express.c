#include<stdio.h>
void function(x)
{
    int num,i,j,un,count=0;
    for( ; ; )
    {
        printf("Enter Room Number: ");
        scanf("%d",&num);
        printf("\n");
        if(num!=0)
        {
            if(num<=100)
            {
                for(i=2; i<=10000; i++)
                {
                    if(count!=num)
                    {
                        for(j=2; j<=i; j++)
                        {
                            if(i==j)
                            {
                                count=count+1;
                                un=i;
                            }
                            else if(i%j==0)
                            {
                                break;
                            }
                        }
                    }
                }
                count=0;
                printf("Unlock with: %d",un);
                printf("\t\t\tLock with: %d\n",num+un);
                printf("\n");
            }
            else
            {
                printf("Room does not exist.\n");
                printf("\n");
            }
        }
        else
            break ;

    }
}


int main()
{
    int input;
    printf("\t\t\tMURDER ON THE ORIENT EXPRESS\n");
    printf("----------------------------------------------------------------------\n");
    function(input);
return 0;
}
