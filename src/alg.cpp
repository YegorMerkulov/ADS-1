// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i < sqrt(value); i++){
    if (value%i != 0){
      return true;
    } else {
      return false;
    }
  }
}

uint64_t nPrime(uint64_t n) {
  int i = 0;
  int count = 0;
  while (true) {
    if (checkPrime(i)) {
      count+=1;
    }
    if (count == n) {
      return i;
    }
     i+=1;
  }
}

uint64_t nextPrime(uint64_t value) {
  int result = 0;
  while (result == 0)  {
    value+=1;
    if (value == 1 || value == 2 || value == 3 || value == 5 || value == 7) {
      result = value;
    } else if (value%2 != 0 && value%3 != 0 && value%5 != 0 && value%7 != 0) {
      result = value;
    }
  }
  return result;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i=0; i < hbound; i++) {
    if (i == 1 || i == 2 || i == 3 || i == 5 || i == 7) {
      sum+=i;
    } else if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0) {
      sum+=i;
    }
  }
  return sum;
}
