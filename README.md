# UUID V4

A Version 4 UUID is a universally unique identifier that is generated using random numbers, for example "0065e7d7-418c-4da4-b4d6-b54b6cf7466a".

This is a header only V4 UUID generator using random numbers

Usage

```cpp
#include <iostream>
#include "uuid/v4/uuid.h"

void main()
{
  auto new_uuid = uuid::v4::UUID::New();
  
  std::cout << "UUID: " << new_uuid.String() << std::endl;
}

```
