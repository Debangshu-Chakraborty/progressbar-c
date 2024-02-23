# progressbar-c
Welcome to the "Simple Progress Bar in C" project! This project provides a basic yet effective implementation of a customizable console-based progress bar in the C programming language. A progress bar is a visual indicator that displays the progression of a task, providing users with a clear representation of how much work has been completed.

*Author* Debangshu Chakraborty

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [API Reference](#api-reference)
- [Examples](#examples)
- [License](#license)

## Installation

Just copy the header file in your project folder.


## Usage

Include the header file and all the function showProgressbar to show a progressbar on screen.
Call the function from the last line of the body of the loop and send the current iteration number and total number of iterations desired foreground and background color as parameters.

```c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "progressbar.h"

void main()
{
    int n=1000;
    for(int i=0;i<n;i++)
    {
        usleep(1000);
        showProgressbar(i,n,32,10);
    }   
}


```

## API Reference


### `showProgressbar(int i, int n,int bg, int fg)`

- i - Current iteration number
- n - Total number of iterations
- bg - Background color of the progressbar (ANSI color code)
- fg - Foreground color of the progressbar (ANSI color code)

```c
showProgressbar(i,n,10,32);
```


## Examples

```c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "progressbar.h"

void main()
{
    int n=1000;
    for(int i=0;i<n;i++)
    {
        usleep(1000);
        showProgressbar(i,n,32,10);
    }   
}

```




## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
