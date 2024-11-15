## Data Structures and Algorithm

## Array
-> Array is a linear data structure that is a collection of similar data types. 
-> Arrays are stored in contiguous memory locations.
-> It is a static data structure with a fixed size and combines data of similar types.
-> Each partitions have two neighbours except first and last one.
-> Being adjacent each partition is indexed and can be determined by its position.
-> Index starts at 0(zero) and for (1D Array) ends at lenght -1.

   dataType <arrayName>[size];

   eg :- int age[5];

## Adding elements in Array

int age[5];
age[0] = 5;
age[1] = 15;
age[2] = 52;
age[3] = 43;
age[4] = 20;

output - [5, 15, 52, 43, 20]

## Updating elements 
elements can be updated using index value.

age[3] = 21;

output - [5, 15, 52, 21, 20]