# 0x1A. C - Hash tables

## Learning objectives
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables
## Resources Used
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
* [Hash function](https://en.wikipedia.org/wiki/Hash_function)
* [Hash table](https://en.wikipedia.org/wiki/Hash_table)
* [All about hash tables](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
* [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)
* [how dictionaries are implemented in Python 2.7](http://www.laurentluce.com/posts/python-dictionary-implementation/)
* [difference between a dictionary and a hash table](https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table)

## Tasks To Complete

+ [x] 0\. >>> ht = {} <br/>_**[0-hash_table_create.c](0-hash_table_create.c)**_ contains a function that creates a hash table.
+ [x] 1\. djb2 <br/>_**[1-djb2.c](1-djb2.c)**_ contains a hash function implementing the [djb2 algorithm](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8).
+ [x] 2\. key -> index <br/>_**[2-key_index.c](2-key_index.c)**_ contains a function that gives you the index of a key.
+ [x] 3\. >>> ht['betty'] = 'cool' <br/>_**[3-hash_table_set.c](3-hash_table_set.c)**_ contains a function that adds an element to the hash table.
+ [x] 4\. >>> ht['betty'] <br/>_**[4-hash_table_get.c](4-hash_table_get.c)**_ contains a function that retrieves a value associated with a key.
+ [x] 5\. >>> print(ht) <br/>_**[5-hash_table_print.c](5-hash_table_print.c)**_ contains a function that prints a hash table.
+ [x] 6\. >>> del ht <br/>_**[6-hash_table_delete.c](6-hash_table_delete.c)**_ contains a function that deletes a hash table.
+ [x] 7\. $ht['Betty'] = 'Cool' <br/>_**[100-sorted_hash_table.c](100-sorted_hash_table.c)**_ contains rewrites of the previous functions that create a sorted hash table.
