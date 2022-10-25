# 0x13. C - More singly linked lists

## Learning Objectives

How to use linked lists

Start to look for the right source of information without too much help.


## Compilation

` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 `

## Files

Main files are test files.

File 0-print_listint.c is a function that prints all the elements of a listint_t list.

File 1-listint_len.c is a function that returns the number of elements in a linked listint_t list.

File 2-add_nodeint.c is a function that adds a new node at the beginning of a listint_t list.

File 3-add_nodeint_end.c is a function that adds a new node at the end of a listint_t list.

File 4-free_listint.c is a function that frees a listint_t list.

File 5-free_listint2.c is a function that frees a listint_t list and sets the head pointer to NULL.

File 6-pop_listint.c is  a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

File 7-get_nodeint.c is a function that returns the nth node of a listint_t linked list.

File 8-sum_listint.c is a function that returns the sum of all the data (n) of a listint_t linked list.

File 9-insert_nodeint.c is a function that inserts a new node at a given position.

File 10-delete_nodeint.c is a function that deletes the node at index index of a listint_t linked list.

File 100-reverse_listint.c is a function that reverses a linked list.

File 101-print_listint_safe.c is a function that prints a listint_t linked list, safely.

File 102-free_listint_safe.c is a function that frees a listint_t list, safely.

File 103-find_loop.c is a function that finds the loop in a linked list.

File lists.h is the header file containing all these function prototypes and the data structure listint_t.

## Example

Task 0: [prints all the elements of a listint_t list](https://github.com/bekalue/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c)

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a`

`./a`

Output:
```
9
8
-> 2 elements
```

task 6: [deletes the head node of a listint_t](https://github.com/bekalue/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c)

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g`

`valgrind ./g`

Output:

```
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369== 
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369== 
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369== 
==4369== All heap blocks were freed -- no leaks are possible
==4369== 
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```