#include <iostream>

#pragma GCC system_header

#include <bits/c++config.h>
#include <string.h>

#ifndef _GLIBCXX_CSTRING
#define _GLIBCXX_CSTRING 1


#undef memchr
#undef memcmp
#undef memcpy
#undef memmove
#undef memset
#undef strcat
#undef strchr
#undef strcmp
#undef strcoll
#undef strcpy
#undef strcspn
#undef strerror
#undef strlen
#undef strncat
#undef strncmp
#undef strncpy
#undef strpbrk
#undef strrchr
#undef strspn
#undef strstr
#undef strtok
#undef strxfrm

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  using ::memchr;
  using ::memcmp;
  using ::memcpy;
  using ::memmove;
  using ::memset;
  using ::strcat;
  using ::strcmp;
  using ::strcoll;
  using ::strcpy;
  using ::strcspn;
  using ::strerror;
  using ::strlen;
  using ::strncat;
  using ::strncmp;
  using ::strncpy;
  using ::strspn;
  using ::strtok;
  using ::strxfrm;
  using ::strchr;
  using ::strpbrk;
  using ::strrchr;
  using ::strstr;

#ifndef __CORRECT_ISO_CPP_STRING_H_PROTO
  inline void*
  memchr(void* __s, int __c, size_t __n)
  { return __builtin_memchr(__s, __c, __n); }

  inline char*
  strchr(char* __s, int __n)
  { return __builtin_strchr(__s, __n); }

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(__s1, __s2); }

  inline char*
  strrchr(char* __s, int __n)
  { return __builtin_strrchr(__s, __n); }

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(__s1, __s2); }
#endif

_GLIBCXX_END_NAMESPACE_VERSION
}

#endif

using namespace std;

int main()
{
	char a[100];

	cout << "Enter a string: ";
	cin >> a;

	cout << "strlen: " << strlen(a) << endl;
	
	system("pause>0");
	return 0;
}
