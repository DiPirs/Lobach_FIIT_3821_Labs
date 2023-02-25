#include "Job_Stream.h"

TJobStream::TJobStream(double intens)
{
  if (intens < 0.0 || intens > 1.0) throw "intens > 1 or intens < 0";
  jobIntens = intens;
  LastJobID = 1;
} 

size_t TJobStream::GetNewJob(void)
{
  double num;
  num = (double)rand() / (double)RAND_MAX;
  if (num <= jobIntens)
  {
    LastJobID++;
    return LastJobID - 1;
  }
  else return 0;
}

double TJobStream::GetJobIntens(void) const noexcept
{
  return jobIntens;
}

size_t TJobStream::GetLastTask(void) const noexcept
{
  return LastJobID;
}
