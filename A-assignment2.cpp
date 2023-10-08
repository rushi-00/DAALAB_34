/*                  Name : Rushikesh Chobhe
                    Roll No. : 34
                    Title : Moving all the zeros (0) at end of array

#include <bits/stdc++.h>
using namespace std;
int main()
{               
    int n;
    cout<<"Enter thr size of array :";
    cin>>n;
    int A[n];
    cout <<"Enter the element :";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

	int j = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] != 0) {
			swap(A[j], A[i]); // Partitioning the array
			j++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout <<"New Array"<< A[i] << " "; // Print the array
	}

	return 0;
}
