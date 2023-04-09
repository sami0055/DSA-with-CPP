void insertionSort(int n, vector<int> &arr){
    
    for(int i=1; i<n; i++)
    {
      int temp=arr[i];
        int j=i-1; 
        while(arr[j]>temp)
        {
          arr[j+1]=arr[j];
          j--;
        }
         arr[j+1]=temp;
      }
     
    }
   
