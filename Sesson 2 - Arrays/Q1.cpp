/*SESSION: Arrays
Q.1412111: Number of buildings facing the sun
QUESTION DESCRIPTION
Given an array representing heights of buildings. The array has buildings from left to right , count number of buildings facing the sunset.

Examples:

Input : arr[ ] = {7, 4, 8, 2, 9}
Output: 3
Explanation: As 7 is the first element, it can 
see the sunset.
4 can't see the sunset as 7 is hiding it. 
8 can see.
2 can't see the sunset.
9 also can see the sunset.

Input : arr[ ] = {2, 3, 4, 5}
Output : 4

TEST CASE 1 
INPUT

5
7 4 8 2 9
OUTPUT


3

TEST CASE 2
INPUT

4
2 3 4 5
OUTPUT


4*/
#include <iostream>
using namespace std;
 
// Returns count buildings that can see sunlight
int countBuildings(int arr[], int n)
{
    // Initialuze result  (Note that first building
    // always sees sunlight)
    int count = 1;
 
    // Start traversing element
    int curr_max = arr[0];
    for (int i=1; i<n; i++)
    {
        // If curr_element is maximum,
        // update maximum and increment count
        if (arr[i] > curr_max)
        {
            count++;
            curr_max=arr[i];
        }
    }
 
    return count;
}

int main(){
	int num;
  	cin >> num;
  	int arr[num];
  	int i;
  	for(i=0;i<num;i++){
      	cin >> arr[i];  	
    }
	cout << countBuildings(arr, num);
}