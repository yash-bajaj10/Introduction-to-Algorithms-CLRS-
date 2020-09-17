# Insertion Sort:

All the sorting algorithms are type of a puzzle with different solving conditions. We all know the final answer of that puzzle i.e. either to arrange all the elements in ascending or descending order.The main fight is how to reach that answer. we are given the conditions and applying those conditions we have to solve that puzzle.

Let's solve our first puzzle : "Insertion sort".

Puzzle: [5,1,3,6,2]

Condition:

1. You can only select one element at a time that you need to sort.
2. You can have access to the number you have selected and the numbers before the selected number.
								OR
   You can have access to the number you have selected and the numbers before the selected number.

Solution:

I will show you how to solve this for elements  [5,1,3,6,2]. You have to complete this puzzle by sorting the last element.

Step-1:

We select "1", because selecting "5" makes no sense as we don't have numbers before it to compare (condition 2).
According to condition 2 we have access 5 and 1. We will solve these two elements. Since "1" is smaller than "5", we will interchange thier places.
So our final result at the end of first step is [1,5,3,6,2]. We have solved a small part of our puzzle.

Step-2:

We select "3". According to the array we got at the end of first step, "3" will be compared with "1","5". First we will compare "3" with "5" as it is the predecessor of "3". Between "3" and "5", "3" is smaller than "5", so they will interchange their places. So the new array will be [1,3,5,6,2].

Now we select "1". Between "1" and "3" , "3" is not smaller than "1", so there will be no changes in the array.
So our final result at the end of second step is [1,3,5,6,2].

Step-3:

We select "6". We will compare "6" with "1","3","5". But as we can see 6 is greater than all these elements. No changes will be made in the current array. At the end of this step the array will be [1,3,5,6,2].

Now you have to solve the last part of the puzzle to know wheather you can solve it or not.

This is the way we solve the insrtion sort. It is less efficient sorting method compared to others. We will see how it is less efficient in further sorting method.


