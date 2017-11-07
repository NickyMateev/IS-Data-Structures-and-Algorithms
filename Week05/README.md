## What is a queue?

Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

![alt text][qxample]

[qxample]: https://www.tutorialspoint.com/data_structures_algorithms/images/queue_example.jpg

## Basic Operations on queue

#### Mandatory:
* enqueue() - add (store) an item to the queue.
* dequeue() - remove (access) an item from the queue.
* isempty() - checks if the queue is empty

#### Optional:
* isfull() - checks if the queue is full
* peek() - gets the element at the front of the queue without removing it

|Operation|Complexity|
|---------|----------|
|enqueue|O(1)|
|dequeue|O(1)|
|isempty|O(1)|
|isfull|O(1)|
|peek|O(1)|

### enqueue

    1. Check if the queue is full.

    2. If the queue is full, produce overflow error and exit.

    3.  If the queue is not full, increment rear pointer to point the next empty space.

    4. Add data element to the queue location, where the rear is pointing.

    5. return success.
    
![alt text][enqueue]

[enqueue]: https://www.tutorialspoint.com/data_structures_algorithms/images/queue_enqueue_diagram.jpg

### dequeue

    1. Check if the queue is empty.

    2. If the queue is empty, produce underflow error and exit.

    3.  If the queue is not empty, access the data where front is pointing.

    4. Increment front pointer to point to the next available data element.

    5. Return success.
    
    
![alt text][dequeue]

[dequeue]: https://www.tutorialspoint.com/data_structures_algorithms/images/queue_dequeue_diagram.jpg

## Links:

[Data Structure and Algorithms - Queue](https://www.tutorialspoint.com/data_structures_algorithms/dsa_queue.htm)
[Queue Data Structure](http://www.geeksforgeeks.org/queue-data-structure/)
[std::queue](http://www.cplusplus.com/reference/queue/queue/)
