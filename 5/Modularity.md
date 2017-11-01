## Modularity ##

### Example ###
In the example, the Map function takes one function as an argument, and applies it to all the elements in a vector of doubles.
Because it allows a function as an argument, it allows any argument (that returns a double and takes two doubles as arguments) to be
used.  This is a modular design because any function can be used, it isn't hardcoded to only apply one operation.

### Non-Example ###
The non example is hardcoded so that there would need to be a separate function for every operation you wanted to apply to the elements of the vector.



###### Image Source ######
https://www.webmasterserve.com/threads/modular-programming.39374/