#include<stdio.h>

int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
  //using recursion 
   if(n==0||W==0)
      return 0;
   if(wt[n-1]<=W)
      return max(val[n-1]+knapsack(W-wt[n-1],wt.val,n-1) , knapsack(W,wt,val,n-1));
   else if(wt[n-1]>W) 
      return knapsack(W,wt,val.=,n-1);
}
int main() {
   int val[] = {20, 25, 40};
   int wt[] = {25, 20, 30};
   int W = 50;
   int n = sizeof(val)/sizeof(val[0]);
   printf("The solution is : %d", knapsack(W, wt, val, n));
   return 0;
}
