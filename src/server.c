#include <stdio.h>

#if defined(__linux__)
  #include "linux.h"

#elif defined(__APPLE__)
  #include "macos.h"

#elif defined(_WIN32)
  #include "windows.h"

#else
  #error "unsupported operating system!"
#endif


int server() {
	printf("hello from the server\n");
}
