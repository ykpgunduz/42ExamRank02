Ödev Adı: snake_to_camel
Beklenen Dosyalar: snake_to_camel.c
İzin verilen fonksiyonlar: malloc, free, realloc, write
--------------------------------------------------------------------------------

snake_case formatında tek bir dize alan ve bunu lowerCamelCase formatına dönüştüren bir program yazın.

snake_case formatı, her kelimenin küçük harflerle yazıldığı ve alt çizgi "_" ile ayrıldığı bir dizedir.

lowerCamelCase formatı, ilk kelime hariç her kelimenin büyük harfle başladığı bir dizedir.

Örnekler:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$