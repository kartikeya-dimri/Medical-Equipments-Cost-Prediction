#include<stdio.h>
int count_odd(int a[],int n){
    if(n==0){
        return 0;
    }
    int c=a[n-1]%2==1?1+count_odd(a,n-1):count_odd(a,n-1);
    
}