## Doubly linked list

### What is a Doubly Linked list?

In computer science, a doubly linked list is a linked data structure that consists of a set of sequentially linked records called nodes. Each node contains two fields, called links, that are references to the previous and to the next node in the sequence of nodes. The beginning and ending nodes' previous and next links, respectively, point to some kind of terminator, typically a sentinel node or null, to facilitate traversal of the list. If there is only one sentinel node, then the list is circularly linked via the sentinel node. It can be conceptualized as two singly linked lists formed from the same data items, but in opposite sequential orders.

The two node links allow traversal of the list in either direction. While adding or removing a node in a doubly linked list requires changing more links than the same operations on a singly linked list, the operations are simpler and potentially more efficient (for nodes other than first nodes) because there is no need to keep track of the previous node during traversal or no need to traverse the list to find the previous node, so that its link can be modified.

![alt text][logo]

[logo]: https://www.tutorialspoint.com/data_structures_algorithms/images/doubly_linked_list.jpg


#### Advantages over linked list
1) A DLL can be traversed in both forward and backward direction.
2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer.
#### Disadvantages over singly linked list
1) Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though (See this and this).
2) All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointe
### Basic Operations on Doubly Linked list?

  *  Insertion − Adds an element at the beginning of the list.

  *  Deletion − Deletes an element at the beginning of the list.

  *  Insert Last − Adds an element at the end of the list.

  *  Delete Last − Deletes an element from the end of the list.

  *  Insert After − Adds an element after an item of the list.

  *  Delete − Deletes an element from the list using the key.

  *  Display forward − Displays the complete list in a forward manner.

  *  Display backward − Displays the complete list in a backward manner.


| Operation | Complexity |
| --------- | -----------|
|Insertion| O(n)|
|Search| O(n)|
|Delete| O(n)|
|Insertion First| O(1)|
|Deletion First| O(1)|
|Insert Last| O(1)|
|Delete Last| O(1)|
|Insert After| O(1)|


#### Insert node at the front:
###### Steps:
1. allocate node
2. put in the data
3. make next of new node as head and previous as NULL
4. change prev of head node to new node
5. move the head to point to the new node
![alt text][inode]

[inode]: http://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_front1.png

#### Insert node after a given node:
###### Steps:
1. check if the given prev_node is NULL
2. allocate new node
3. put in the data 
4. make next of new node as next of prev_node
5. make the next of prev_node as new_node
6. make prev_node as previous of new_node
7. change previous of new_node's next node
![alt text][gnode]

[gnode]: http://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_middle1.png


#### Insert node  at the end:
###### Steps:
1. allocate node
2. put in the data
3. this new node is going to be the last node, so make next of it as NULL
4. if the Linked List is empty, then make the new
5. else traverse till the last node
6. change the next of last node
7. make last node as previous of new node
![alt text][enode]

[enode]: http://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_end1.png

#### Delete node  at the end:
![alt text][del]

[del]: http://pages.cs.wisc.edu/~vernon/cs367/notes/LINKED-LIST-FIGURES/removenode-dbl.gif