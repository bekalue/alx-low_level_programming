# 0x15. C - File I/O

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)

## Learning Objectives

[File Descriptor](https://en.wikipedia.org/wiki/File_descriptor)
* What are file descriptors
* What are the 3 standard file descriptors, purpose, and `POSIX`names
* What is a system call
* What is the the difference between a function and a system call

[open() read() write()](https://www.youtube.com/watch?v=dP3N8g7h8gY)
* How to create, open, close, read and write files
* How to use I/O system calls `open`, `close`, `read` and `write`
* What are and how to use flags `O_RDONLY` `O_WRONLY` `O_RDWR`
* What are file permissions, and how to set them when creating a new file with the `open` system call

## Tasks Completed

+ [x] 0\. Tread lightly, she is near<br/>_**[0-read_textfile.c](0-read_textfile.c)**_ contains a function that reads a text file and prints it to the `POSIX` standard output.
+ [x] 1\. Under the snow<br/>_**[1-create_file.c](1-create_file.c)**_ contains a function that creates a file.
+ [x] 2\. Speak gently, she can hear<br/>_**[2-append_text_to_file.c](2-append_text_to_file.c)**_ contains a function that appends text at the end of a file.
+ [x] 3\. cp<br/>_**[3-cp.c](3-cp.c)**_ contains a program that copies the content of a file to another file.
+ [x] 4\. elf<br/>_**[100-elf_header.c](100-elf_header.c)**_ contains a program that displays the information contained in the `ELF` header at the start of an `ELF` file.
Format: the same as readelf -h (version 2.26.1)
