/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

/*
Queue data structure is widely used in operating systems for priority scheduling and much more.
Queue data structure provides inserting and deletion operations in constant time that's why it is 
preferred.
Queue has two references called as the front and rear end of the queue.
Insertion takes place through the rear end while the deletion take place through the front end.

There are various operations supported by the queue but major of them are:
1. Enqueue(element)
2. Dequeue()
3. IsEmpty()
4. Front()
*/

#ifndef _QUEUE_H
#define _QUEUE_H

// Built-in files
#include<stdio.h>
#include<stdlib.h>

// Custom files
#include"node.h"
#include"enqueue_list.h"
#include"dequeue_list.h"
#include"front_list.h"
#include"isempty_list.h"
#include"print_list.h"

#endif