# Design and Analysis of Algorithms
Module wise questions.

## Module 1
1. Write a C++ program to find the greatest of three numbers.
2. Write a C++ program to find the sum of first ten numbers.
3. Write a C++ program to find the sum of the series : 1/2 + 2/3 +...+ n/n+1.
4. Write a C++ program to implement linear queue.

## Module 2
1. Write a C++ program to implement Binary Search.
2. Write a C++ program to implement MergeSort.
3. Write a C++ program to implement HeapSort.
4. Write a C++ program to implement Kruskal's Algorithm.
5. Write a C++ program to implement Prims Minimum Spanning Tree Algorithm.
6. Write a C++ program to implement Huffman Encoding.
7. Write a C++ program to implement Fractional KnapSack using Greedy algorithm.

## Module 3
1. Write a C++ program to check whether a given graph is connected or not using DFS algorithm.
2. Write a C++ program to print all the nodes reachable from the source node using BFS algorithm.
3. Write a C++ program to find the shortest path to other vertices using Dijkstra algorithm.
4. Write a C++ program to implement Travelling Salesman problem using dynamic programming.

## Module 4
1. Write a C++ program to implement Graph coloring algorithm.
2. Write a C++ program to implement Hamiltonian Cycle problem.

## Module 5
1. Write a C++ program to implement 0/1 Knapsack using Dynamic Programming.

## Advanced Question
### 1. Hackerearth problem: *Problems involving Grids*
There is an NxM grid in which there are N rows and M colums. A cell (i,j) is defined as the ith row from the top and jth column from left, You are located at (1, 1) initially and can perform the following steps any number of times: 
        1. You can move any number of steps downwards. 
        2. You can move any number of steps towards the right. 
  There are some obstacles in the path, You are initially located at (1, 1) and wants to reach (N, M) but you are interested in knowing the number of ways you can reach (N, M) from (1, 1), Since these numbers can huge, print it modulo (10^7). Two ways are considered different if they have a different number of steps or differ in some positions. Note 
        1. You can never move out of the grid.
        2. You cannot ignore the conditions. 
        3. The first cell (1, 1) and the last cell (N, M) do not contain obstacles. 
        4. A free cell is denoted by . and an obstacle is denoted by *
  #### Input format: 
  The first line contains T denoting the number of test cases. 
  The first line of each test case contains the number of rows Nand the number of columns M. 
  Each of the next N lines of each test case consist of a string of length M. 
  #### Output format 
  For each test case, print a single line denoting the number of ways to reach (N, M) from (1, 1) modulo (1077). 
  #### Constraints 
  1<=T<=10 
  1<=N, M<=1000 
  Each cell consists of either . or *
  The grid consists of (2, 1) and (N, M). Write a C++ program for the above case using dynamic programming

### 2. Hackerearth Problem: *Trustworthy network*
You are a secret agent of S.C.R.E.E.N., who infiltrated the evil organization called Hyena. You have discovered a vital information and want to send it from city s to city e via unidirectional telegraphs.

  Unfortunately, you can't trust anyone, so to be sure that the message was delivered and it is correct, you want to receive an acknowledgement message from city e. So if the message was sent through cities s=u_1, u_2,...,u_k =e , then city e sends an acknowledgement message to , u_k-1 then u_k-1 sends an acknowledgement message to u_k-2 and so on, until s receives acknowledgement message.

  However, the telegraph lines only work in one direction, thus, the acknowledgement message may be sent back through any other cities. Moreover, for each telegraph line that can send messages from city u to city v there is an information about delivery cost for a single message.

  Your task is to find the minimal cost it takes to send message from city s to city e and get an acknowledgement message, or output -1, if it's impossible.

  #### Input format
  The first line of the input contains four integers n, m, s and e — number of cities, number of telegraph lines and cities, sending and receiving important message, respectively (; ; ; ).

  Next m lines describe telegraph lines. Each of this lines contains three integers u, v and t — the city, where the telegraph line starts, the city, where it ends, and amount of money required to deliver the message, respectively (; ). All telegraph lines are unidirectional, there is no telegraph line that connects city with itself, and every telegraph line connects unique ordered pair of cities.

  #### Output format
  The output must contain a single integer — minimum money to be spent, to deliver the message in trustworthy way from city s to city e, or -1, if it's impossible.


Readme to be updated soon
