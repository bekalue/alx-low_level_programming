# 0x13. C - More singly linked lists

## Learning Objectives

How to use linked lists

Start to look for the right source of information without too much help.


## Compilation

` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 `

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