// Merging b[] into a[] 
#include <bits/stdc++.h> 
using namespace std; 
#define NA -1 

void SortedMerge(int a[], int b[], int n, int m)
{ 
int i = n - 1; 
int j = m - 1; 

int lastIndex = n + m - 1; 

/* Merge a and b, starting from last element in each */
while (j >= 0) 
{ 
	/* End of a is greater than end of b */
	if (i >= 0 && a[i] > b[j]) 
                    { 
                    a[lastIndex] = a[i]; // Copy Element 
                    i--; 
	} 
                    else
                    { 
	a[lastIndex] = b[j]; // Copy Element 
	j--; 
	} 
	lastIndex--; // Move indices 
} 
} 

/* Helper function to print the array */
void PrintArray(int *arr, int n) 
{ 
cout << "Array A after merging B in sorted order : \n"; 
for (int i = 0; i < n; i++) 
	cout << arr[i] << "  "; 
} 

int main()
{ 
int a[] = {10, 12, 13, 14, 18, NA, NA, NA, NA, NA}; 
int n = 5; 
int size_a = 10; 
int b[] = {16, 17, 19, 20, 22}; 
int m = 5; 
SortedMerge(a, b, n, m); 
PrintArray(a, size_a); 
return 0; 
}
