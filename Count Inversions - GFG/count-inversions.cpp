//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
  long long merge(long long arr[], long long temp[], long long left, long long right, long long mid){
      long long i = left, j = mid, k = left;
      long long inverse = 0;
      while(i<=mid-1 && j<=right){
          if(arr[i]<=arr[j]){
              temp[k++] = arr[i++]; 
          }
          else {
              temp[k++] = arr[j++];
              inverse+= mid - i;
          }
      }
      while(i<=mid-1){
          temp[k++] = arr[i++];
      }
      
      while(j<=right){
          temp[k++] = arr[j++];
      }
      
      for(long long i = left;i<=right;i++){
          arr[i] = temp[i];
      }
      return inverse;
  }
  
  long long merge_sort(long long arr[], long long temp[], long long left , long long right){
      long long count = 0;
      if(left < right){
          long long mid = (left + right)/2;
          count+= merge_sort(arr, temp, left , mid);
          count+= merge_sort(arr, temp, mid + 1, right);
          count+= merge(arr, temp, left, right, mid+1);
      }
      return count;
  }
  
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        return merge_sort(arr, temp, 0, N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends