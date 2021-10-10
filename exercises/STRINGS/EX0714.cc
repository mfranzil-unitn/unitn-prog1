//  Example 7.14, page 199
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
#include <cstring>

int main()
{
  char s[] = "The Mississippi is a long river.";
  cout << "s = \"" << s << "\"\n";
  char* p = strchr(s, ' ');
  cout << "strchr(s, ' ') points to s[" << p - s << "].\n";
  p = strchr(s, 's');
  cout << "strchr(s, 's') points to s[" << p - s << "].\n";
  p = strrchr(s, 's');
  cout << "strrchr(s, 's') points to s[" << p - s << "].\n";
  p = strstr(s, "is");
  cout << "strstr(s, \"is\") points to s[" << p - s << "].\n";
  p = strstr(s, "isi");
  if (p == NULL) cout << "strstr(s, \"isi\") returns NULL\n";
  return 0;
}
