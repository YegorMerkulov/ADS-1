#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 1 || value == 2 || value == 3 || value == 5 || value == 7) {
    return true;
  } else if (value%2 != 0 && value%3 != 0 && value%5 != 0 && value%7 != 0) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  for (int i=0; i < n; i++) {
    if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7) {
      return i;
    } else if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0) {
      return i;
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  int count=0;
  if (count!=0) {
    if (value == 1 || value == 2 || value == 3 || value == 5 || value == 7) {
      return value;
    } else if (value%2 != 0 && value%3 != 0 && value%5 != 0 && value%7 != 0) {
      return value;
    }
  }
  count+=1;
  value+=1;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  if (hbound == 1 || hbound == 2 || hbound == 3 || hbound == 5 || hbound == 7) {
    sum+=hbound;
    return hbound+1;
  } else if (hbound%2 != 0 && hbound%3 != 0 && hbound%5 != 0 && hbound%7 != 0) {
    sum+=hbound;
    return hbound+1;
  } else
    return hbound+1;
}
