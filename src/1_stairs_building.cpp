#include <cstdio>

int main(int argc, char** argv) {
  unsigned int blocks = 0;
  if (argc == 1) {
    scanf("%ud", &blocks);
  } else {
    FILE* fp = fopen(argv[1], "r");
    blocks = fgetc(fp);
  }
  int i = 0;
  while (i < blocks) {
    i++;
    blocks -= i;
  }
  printf("%d", i);
  return 0;
}
