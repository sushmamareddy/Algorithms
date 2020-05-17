/*
Let A[0 ... n-1] be an array of n distinct positive integers. 
If i < j and A[i] > A[j] then the pair (i, j) is called an inversion of A (where i and j are indexes of A). Given an integer array A,
 your task is to find the number of inversions in A.
 Sample Input 1 :
3
3 2 1
Sample Output 1 :
3
Sample Input 2 :
5
2 5 1 3 4
Sample Output 1 :
4
*/
#include<bits/stdc++.h>
using namespace std;
long long merge(int A[],int left,int mid,int right){

	int i=left,j=mid,k=0;

	int temp[right-left+1];
	long long count = 0;
	while(i<mid && j<=right){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];
		}else{
			temp[k++] = A[j++];
			count += mid - i;
		}
	}
	while(i<mid){
		temp[k++] = A[i++];
	}
	while(j<=right){
		temp[k++] = A[j++];
	}

	for(int i=left,k=0;i<=right;i++,k++){
		A[i] = temp[k];
	}
	return count;
}
long long mergesort(int A[],int start,int end)
{
    long long totalcount=0;
    if(start<end)
    {
    int mid=(start+end)/2;
	long long leftans=mergesort(A,start,mid);
    long long rightans=mergesort(A,mid+1,end);
    long long ans=merge(A,start,mid+1,end);
    long long totalans=leftans+rightans+ans;
    return totalans;
    }
    return totalcount;
}
long long solve(int A[], int n)
{
    return mergesort(A,0,n-1);
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
