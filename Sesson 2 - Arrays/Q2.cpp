/*
SESSION: Arrays
Q.1412112: Subarray with given sum
QUESTION DESCRIPTION
Given an unsorted array of non-negative integers, find a continuous subarray which adds to a given number.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:

Corresponding to each test case, in a new line, print the starting and ending positions of first such occuring subarray if sum equals to subarray, else print -1.

Note: Position of 1st element of the array should be considered as 1.

Expected Time Complexity: O(n)

Constraints:
1<=T<=50
1<=N<=100
1<=an array element<= 200

TEST CASE 1 
INPUT

2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
OUTPUT


2 4
1 5

TEST CASE 2
INPUT

2
5 12
2 4 6 8 10
10 15
1 2 3 4 5 6 7 8 9 10
OUTPUT


1 3
1 5
*/

#include <iostream>
using namespace std;
int subArraySum(int arr[], int n, int sum){
	int curr_sum, i, j;

	for(i = 0; i < n; i++){
		curr_sum = arr[i];

		for(j = i+1; j <=n; j++){
			if(curr_sum == sum){
				cout << i+1 << " " << j;
				return 1;
			}
			if(curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];
		}
	}

	return 0;
}

int main(){
	int a;
  	cin >> a;
	for(int i=0; i < a; i++){
		int b,s;
		cin >> b >> s;
		int arr[b];
		for(int i = 0; i < b; i++){
			cin >> arr[i];
		}
		subArraySum(arr, b, s);
       cout << endl;
	}
	return 0;
}