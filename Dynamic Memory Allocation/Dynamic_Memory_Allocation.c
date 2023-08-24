//malloc()
//malloc stands for Memory Allocation
//The malloc() function reserves a block of memory of the specified number of bytes.
//And, it returns a pointer of void which can be casted into pointers of any form

//Syntax of malloc()
ptr = (castType*) malloc(size);

//Example
ptr = (float*) malloc(100 * sizeof(float));

//The above statement allocates 400 bytes of memory.
//It's because the size of float is 4 bytes.
//And, the pointer ptr holds the address of the first byte in the allocated memory.



//calloc()
//The name "calloc" stands for contiguous allocation.
//The malloc() function allocates memory and leaves the memory uninitialized,
//whereas the calloc() function allocates memory and initializes all bits to zero.

//Syntax of calloc()
ptr = (castType*)calloc(n, size);

//Example:
ptr = (float*) calloc(25, sizeof(float));

//The above statement allocates contiguous space in memory for 25 elements of type float.



//free()
//Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own.
//You must explicitly use free() to release the space.

//Syntax of free()
//free(ptr);

//This statement frees the space allocated in the memory pointed by ptr.



//realloc()
//If the dynamically allocated memory is insufficient or more than required
//you can change the size of previously allocated memory using the realloc() function.

//Syntax of realloc()
//ptr = realloc(ptr, x);

//Here, ptr is reallocated with a new size x.


//Trick to Remember:
//malloc() means multiply. ptr = (int*) malloc(n * sizeof(int))