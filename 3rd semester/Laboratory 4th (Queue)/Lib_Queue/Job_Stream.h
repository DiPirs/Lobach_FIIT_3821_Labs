#pragma once

#include "Queue.h"

class TJobStream
{
protected:

  double jobIntens;
  size_t LastJobID;

public:

  TJobStream(double intens);
  size_t GetNewJob(void); 
  double GetJobIntens(void) const noexcept;
  size_t GetLastTask(void) const noexcept;
};