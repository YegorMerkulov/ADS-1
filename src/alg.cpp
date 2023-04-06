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
  int result;
  for (uint64_t i=0; i < n; i++) {
    if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7) {
      result=i;
    } else if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0) {
      result=i;
    }
  }
  return result;
}

uint64_t nextPrime(uint64_t value) {
  int result=0;
  while (result=0)  {
    value+=1;
    if (value == 1 || value == 2 || value == 3 || value == 5 || value == 7) {
      result=value;
    } else if (value%2 != 0 && value%3 != 0 && value%5 != 0 && value%7 != 0) {
      result=value;
    }
  }
  return result;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  if (hbound == 1 || hbound == 2 || hbound == 3 || hbound == 5 || hbound == 7) {
    sum+=hbound;
    return hbound+1;
  } else if (hbound%2 != 0 && hbound%3 != 0 && hbound%5 != 0 && hbound%7 != 0) {
    sum+=hbound;
    return hbound+1;
  } else {
    return hbound+1;
  }
}
