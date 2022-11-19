# 0x0A-argc_argv

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives
* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Resources Used
* [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
* [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
* [What does `int argc`, `char* argv[]` mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)

## Compilation

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

## Tasks Completed

+ [x] 0\. It ain't what they call you, it's what you answer to<br/>_**[0-whatsmyname.c](0-whatsmyname.c)**_ is a program that prints its name, followed by a new line.
+ [x] 1\. Silence is argument carried out by other means<br/>_**[1-args.c](1-args.c)**_ is a program that prints the number of arguments passed into it.
+ [x] 2\. The best argument against democracy is a five-minute conversation with the average voter<br/>_**[2-args.c](2-args.c)**_ is a program that prints all arguments it receives.
+ [x] 3\. Neither irony nor sarcasm is argument<br/>_**[3-mul.c](3-mul.c)**_ is a program that multiplies two numbers passed to it as command line arguments.
+ [x] 4\. To infinity and beyond<br/>_**[4-add.c](4-add.c)**_ is a program that adds positive numbers passed to it as command line arguments.
+ [x] 5\. Minimal Number of Coins for Change<br/>_**[100-change.c](100-change.c)**_ is a program that prints the minimum number of coins to make change for an amount of money passed as a command line argument.<br/>The coins have values 25, 10, 5, 2, and 1 cent.
