void bubbleSort(vector<int>& arr, int n)
{   
          
          for(int i=0; i<n; i++)
          {
              bool swaped=false;
              for(int j=1; j<n-i; j++)
              {
                  if(arr[j-1]>arr[j])
                  {
                      swap(arr[j],arr[j-1]);
                      swaped=true;
                  }
              }
              if(swaped==false)
              break;
          }

   
}
