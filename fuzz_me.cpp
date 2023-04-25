#include "my_api.h"


extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data,  size_t Size) {
  FuzzMe(Data, Size);
  return 0;
}
