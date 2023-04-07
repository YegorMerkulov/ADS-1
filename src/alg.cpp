// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
for (uint64_t i = 2; i <= sqrt(value); ++i) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int i = 0;
  int count = 0;
  while (count != n+1) {
    i+=1;
    if (checkPrime(i)) {
      count+=1;
    }
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t i = value+1;
  while (checkPrime(i) == false) {
    i+=1;
  }
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  uint64_t n = 1;
  while (hbound > nextPrime(n)) {
      sum+=nextPrime(n);
      n = nextPrime(n);
  }
  return sum;
}
