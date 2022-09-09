#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int t = 0;
int min(int arr1[],int arr2[],int arr3[],int n){
    int ind = 0;
    for(int i = 0;i<n;i++){
        
        if(arr3[i] > arr3[ind] && arr1[i] > 0 && arr2[i] <= t){
            ind = i;
        }
        if(arr1[ind] == 0){
            ind++;
        }
    }
    return ind;
}

int main(int argc, char const *argv[]){
int n = 4;
int at[] = {0,1,2,4};
int bt[] = {5,4,2,1};
int tbt[] = {5,4,2,1};
int p []= {10,20,30,40};
int ct[n];
int tat[n];
int wt[n];
int rt[n];
float atat=0;
float awt=0;
while(sum(tbt,n)!=0){
    int in = min(tbt,at,p,n);
    tbt[in]--;
        if(tbt[in] == 0){
        ct[in]= t+1;
    }
   t++;
}
for(int i =0;i<n;i++){
     tat[i] = ct[i] - at[i];
      wt[i]  = tat[i] - bt[i];
      atat += tat[i];
      awt  += wt[i];
 }
 printf("  P  AT  BT  CT  TAT  WT\n");
   for(int i =0;i<n;i++){
    printf(" %2d  %2d  %2d  %2d  %2d  %2d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
	}
   printf(" Average TAT = %f\n",atat/n); 
   printf(" Average WT = %f\n",awt/n); 
    return 0;
}
