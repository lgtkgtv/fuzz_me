#include "my_api.h"

bool FuzzMe(const uint8_t *Data, size_t DataSize){
  return DataSize >=3 &&
    Data[0] == 'F' &&
    Data[1] == 'U' &&
    Data[2] == 'Z' &&
    Data[3] == 'Z';   // :-<
}