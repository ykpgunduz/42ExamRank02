Ödev adı: camel_to_snake
Beklenen dosyalar: camel_to_snake.c
İzin verilen fonksiyonlar: malloc, realloc, write
--------------------------------------------------------------------------------

lowerCamelCase biçiminde tek bir dize alan ve onu snake_case biçimine dönüştüren
bir program yazın.

lowerCamelCase bir dizide, ilk kelime hariç her kelime büyük harfle başlar.

snake_case bir dizide, tüm kelimeler küçük harflerle yazılır ve aralarına
alt çizgi "_" konur.

Örnekler:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$

```