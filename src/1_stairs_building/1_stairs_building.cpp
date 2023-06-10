#include <cstdio>

int main(int argc, char** argv) {
  unsigned int blocks = 0;
  // чтение из stdin:
  if (argc == 1) {
    scanf("%u", &blocks);
  // чтение из файла:
  } else {
    FILE* fp = fopen(argv[1], "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF && ch != '\n')
      blocks = blocks * 10 + ch - 48;
    fclose(fp);
  }
  // основной алгоритм: 
  int i = 0;
  while (i < blocks) {
    i++;
    blocks -= i;
  }
  printf("%d", i);
  return 0;
}
