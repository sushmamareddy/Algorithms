#include<bits/stdc++.h>
using namespace std;
void merge(int input[],int start,int mid,int end)
{
    int n=end-start+1;
    int n1=mid+1;
    int n2=end+1;
    int *output=new int[n];
    int i,j,k;
    j=start;
    k=mid+1;
    for(i=0;i<n;)
    {
        if(j<n1 && k<n2)
        {
            if(input[j]<=input[k])
            {
                output[i]=input[j];
                j++;
            }
            else
            {
                output[i]=input[k];
                k++;
            }
            i++;
        }
        else if(j==n1)
        {
            for(;i<n;)
            {
                output[i]=input[k];
                k++;
                i++;
            }
        }
        else
        {
            for(;i<n;)
            {
                output[i]=input[j];
                j++;
                i++;
            }
        }
    }
    for(int l=start;l<=end;l++)
    {
        input[l]=output[l-start];
    }
}
void sort(int input[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid=(start+end)/2;
    sort(input,start,mid);
    sort(input,mid+1,end);
    merge(input,start,mid,end);
}
void mergeSort(int input[], int size){
	// Write your code here
        if(size==0 || size==1)
        {
            return;
        }
        sort(input,0,size-1);
}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
