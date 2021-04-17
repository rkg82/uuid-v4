#include <iostream>
#include "uuid/v4/uuid.h"

void main()
{
  // Generate a UUID
  std::cout << "UUID: " << uuid::v4:UUID::New().String() << std::endl;
}
