#include<bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity) {

 float x[20], tp = 0;
   int i, j, u;
   u = capacity;

    memset(x,0.0,sizeof(x));

   for (i = 0; i < n; i++) 
      if (weight[i] > u)   break;
      else {
         x[i] = 1.0;
         tp = tp + profit[i];
          u = u - weight[i];
      }
   
   if (i < n){
      x[i] = u / weight[i];
     //cout<<i<<" "<<u<<" "<<x[i]<<"\n";
   }

   tp = tp + (x[i] * profit[i]);

   printf("\nThe ratio is: \n");
   for (i = 0; i < n; i++)
        cout<<x[i]<<"\n";

    cout<<"\nMaximum profit is: "<<tp<<"\n";
}


int main() {

   float weight[20], profit[20], capacity;
   int num, i, j;
   float ratio[20], temp;

    cin>>num;

   for (i = 0; i < num; i++) 
     cin>>weight[i]>>profit[i];
   
    cin>>capacity;

   for (i = 0; i < num; i++) 
      ratio[i] = profit[i] / weight[i];
   
   for (i = 0; i < num; i++) 
      for (j = i + 1; j < num; j++) 
         if (ratio[i] < ratio[j]) {

            swap(ratio[j],ratio[i]);
            swap(weight[j],weight[i]);
            swap(profit[j],profit[i]);
         }
      
   knapsack(num, weight, profit, capacity);
   
   return(0);
}