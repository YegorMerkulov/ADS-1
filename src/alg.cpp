#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
int val(int n){
  if(n==1 || n==2 || n==3 || n==5 || n==7)
    return true;
  else if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)
    return true;
  else
    return false;
}
}

uint64_t nPrime(uint64_t n) {
int val(int *s, int n){
  for(int i=0; i<n;i++)
    if(s[i]==1 || s[i]==2 || s[i]==3 || s[i]==5 || s[i]==7)
    return s[i];
  else if(s[i]%2!=0 && s[i]%3!=0 && s[i]%5!=0 && s[i]%7!=0)
    return s[i];
}
}

uint64_t nextPrime(uint64_t value) {
int val(int n){
  int count=0
  if(count!=0)
    if(n==1 || n==2 || n==3 || n==5 || n==7)
      return n;
    else if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)
      return n;
  count+=1;
}
}

uint64_t sumPrime(uint64_t hbound) {
int val(int n){
  int sum=0;
  if(n==1 || n==2 || n==3 || n==5 || n==7)
    sum+=n;
    return n+1;
  else if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0)
    sum+=n;
    return n+1;
  else
    return n+1;
}
}
