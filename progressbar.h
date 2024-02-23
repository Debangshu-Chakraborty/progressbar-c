#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void printColorText(char *text, int color) 
{
    printf("\033[38;5;%dm%s\033[0m", color, text);
}

void showProgressbar(int currentIteration, int totalIterations,int bg, int fg) 
{
    int progress = (currentIteration * 100.0 / totalIterations)+0.5;
    printf("\r");
    printColorText("", bg);
    for (int j = 0; j < 50; j++) 
    {
        if (j < progress / 2) 
        {
            printColorText("█", fg);
        } else {
            printColorText("█", bg);
        }
    }
    printColorText(" ", bg);
    printf("%d%%", progress);
    fflush(stdout);
}

//call the function from first line of the loop body