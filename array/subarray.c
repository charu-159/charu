#include<stdio.h>
int main(){
     int arr[6] = {1,2,4,5,6};
    int maxsum = arr[0];

    for (int i = 0; i < 6; i++)
    {
        int currsum = 0;
        for (int j = i; j < 6; j++)
        {
            currsum = currsum + arr[j];
            if (currsum > maxsum)
            {
                maxsum = currsum;
            }
        }
        
      
    }
      printf("%d", maxsum);
      return 0;
}
    