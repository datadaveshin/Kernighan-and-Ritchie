/* Ex. 1.2 Use new escape characters
   and yes, I know I can use a loop,
   but, just keeping up with the book
*/

# import <stdio.h>

int main()
{
  printf("Testing characters that can be escaped\n");
  printf("Escape characters are between 'hello' and 'world'\n\n");
  printf("hello world of no escape character\n");
  printf("hello\aworld of \\a\n");
  printf("hello\bworld of \\b\n");
  printf("hello\cworld of \\c\n");
  printf("hello\dworld of \\d\n");
  printf("hello\eworld of \\e\n");
  printf("hello\fworld of \\f\n");
  printf("hello\gworld of \\g\n");
  printf("hello\hworld of \\h\n");
  printf("hello\iworld of \\i\n");
  printf("hello\jworld of \\j\n");
  printf("hello\kworld of \\k\n");
  printf("hello\lworld of \\l\n");
  printf("hello\mworld of \\m\n");
  printf("hello\nworld of \\n\n");
  printf("hello\oworld of \\o\n");
  printf("hello\pworld of \\p\n");
  printf("hello\rworld of \\r\n");
  printf("hello\sworld of \\s\n");
  printf("hello\tworld of \\t\n");
  printf("error: \\u used with no following hex digits\n");
  printf("hello\vworld of \\v\n");
  printf("hello\wworld of \\w\n");
  printf("error: \\x used with no following hex digits\n");
  printf("hello\yworld of \\y\n");
  printf("hello\zworld of \\z\n");
  printf("hello\0world of \\0\n");
  printf("\\0 did not print anything to standard out");
  printf("hello\1world of \\1\n");
  printf("hello\2world of \\2\n");
  printf("hello\\world of \\\\n");
  printf("\n");
  printf("hello\.world of \\.\n");
  printf("hello\;world of \\;\n");
  printf("hello\.world of \\.\n");
  printf("error: expected ')'");
  printf("hello\'world of \\'\n");
  printf("hello\,world of \\,\n");
  printf("hello\?world of \\?\n");
  printf("hello\<world of \\<\n");
  printf("hello\:world of \\:\n");
  printf("hello\!world of \\!\n");
  printf("hello\@world of \\@\n");
  printf("hello\#world of \\#\n");
  printf("hello\$world of \\$\n");
  printf("hello\%world of \\%\n");
  printf("hello\^world of \\^\n");
  printf("hello\&world of \\&\n");
  printf("hello\*world of \\*\n");
  printf("hello\(world of \\(\n");
  printf("hello\{world of \\{\n");
  printf("hello\[world of \\[\n");
  printf("hello\-world of \\-\n");
  printf("hello\_world of \\_\n");
  printf("hello\+world of \\+\n");
  printf("hello\=world of \\=\n");
  return 0;
}
