# 0x13. C - More singly linked lists

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives
* How to use linked lists

## Compilation

` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 `

## Tasks Completed

+ [x] 0\. Print list<br/>_**[0-print_listint.c](0-print_listint.c)**_ contains a function that prints all the elements of a `listint_t` list.
+ [x] 1\. List length<br/>_**[1-listint_len.c](1-listint_len.c)**_ contains a function that returns the number of elements in a linked `listint_t` list.
+ [x] 2\. Add node<br/>_**[2-add_nodeint.c](2-add_nodeint.c)**_ contains a function that adds a new node at the beginning of a `listint_t` list.
+ [x] 3\. Add node at the end<br/>_**[3-add_nodeint_end.c](3-add_nodeint_end.c)**_ contains a function that adds a new node at the end of a `listint_t` list.
+ [x] 4\. Free list<br/>_**[4-free_listint.c](4-free_listint.c)**_ contains a function that frees a `listint_t` list.
+ [x] 5\. Free<br/>_**[5-free_listint2.c](5-free_listint2.c)**_ contains a function that frees a `listint_t` list.
+ [x] 6\. Pop<br/>_**[6-pop_listint.c](6-pop_listint.c)**_ contains a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
+ [x] 7\. Get node at index<br/>_**[7-get_nodeint.c](7-get_nodeint.c)**_ contains a function that returns the nth node of a `listint_t` linked list.
+ [x] 8\. Sum list<br/>_**[8-sum_listint.c](8-sum_listint.c)**_ contains a function that returns the sum of all the data (n) of a `listint_t` linked list.
+ [x] 9\. Insert<br/>_**[9-insert_nodeint.c](9-insert_nodeint.c)**_ contains a function that inserts a new node at a given position.
+ [x] 10\. Delete at index<br/>_**[10-delete_nodeint.c](10-delete_nodeint.c)**_ contains a function that deletes the node at index `index` of a `listint_t` linked list.
+ [x] 11\. Reverse list<br/>_**[100-reverse_listint.c](100-reverse_listint.c)**_ contains a function that reverses a `listint_t` linked list.
+ [x] 12\. Print (safe version)<br/>_**[101-print_listint_safe.c](101-print_listint_safe.c)**_ contains a function that prints a `listint_t` linked list.
+ [x] 13\. Free (safe version)<br/>_**[102-free_listint_safe.c](102-free_listint_safe.c)**_ contains a function that frees a `listint_t` list.
+ [x] 14\. Find the loop<br/>_**[103-find_loop.c](103-find_loop.c)**_ contains a function that finds the loop in a linked list.

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
