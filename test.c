#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "progressbar.h"

void main()
{
    int n=1000;
    for(int i=0;i<=n;i++)
    {
        showProgressbar(i,n,32,10);
        usleep(1000);
    }   
}
