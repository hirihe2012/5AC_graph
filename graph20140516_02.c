#include <stdio.h>

int main(void)
{
  FILE *fp;
  char *fname = "comma.csv";
  char s[100];
  int ret, n1, n2;
  float f1, f2;

  fp = fopen( fname, "r" );
  if( fp == NULL ){
    printf( "%sファイルが開けません¥n", fname );
    return -1;
  }

  while( ( ret = fscanf( fp, "%[^,],%d,%d,%f,%f", s, &n1, &n2, &f1, &f2 ) ) != EOF ){
    printf( "%s %d %d %f %f", s, n1, n2, f1, f2 );
  }

  printf("\n");
  
  fclose( fp );
  return 0;
}
