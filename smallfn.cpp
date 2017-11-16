#include "rar.hpp"

uint ToPercent(uint64 N1,uint64 N2)
{
  if (N2<N1)
    return 100;
  return ToPercentUnlim(N1,N2);
}


// Allows the percent larger than 100.
uint ToPercentUnlim(uint64 N1,uint64 N2)
{
  if (N2==0)
    return 0;
  return uint(N1*100/N2);
}


