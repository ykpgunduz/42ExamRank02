# Inter

**Ödev adı:** inter  
**Beklenen dosyalar:** inter.c  
**İzin verilen fonksiyonlar:** write

---

## Açıklama

İki string alan ve her iki string'de de görünen karakterleri, tekrarsız olarak,
ilk string'deki sıralarına göre görüntüleyen bir program yazın.

Görüntülemeyi bir `\n` takip edecektir.

Argüman sayısı 2 değilse, program `\n` görüntüler.

---

## Örnekler

```bash
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
```

```bash
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
```

```bash
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
```

```bash
$>./inter | cat -e
$
```
