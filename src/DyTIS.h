#pragma once
#include <stdio.h>

#include <cstring>
#include <thread>
#include <mutex>
#include <cmath>
#include <stdlib.h>
#include "util/util.h"
#include "src/Directory.h"
#include "src/ExtendibleHash.h"
#include "util/pair.h"


const size_t kCapacity = (1 << kDepth);
typedef class DyTIS DyTIS;
//typedef class LocalCDF LocalCDF;
int num = 0;
class DyTIS {
  private:
    ExtendibleHash** EH;

  public:
  DyTIS(void);
  ~DyTIS(void);
  inline void Insert(Key_t&, Value_t);
  inline bool Delete(Key_t&);
  inline Value_t Get(Key_t&);
  inline Value_t* Scan(Key_t&, size_t);

};

