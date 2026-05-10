# Практичне заняття №11

## Тема

Оброблення виняткових ситуацій. Різновиди патернів Factory.

## Виконав

Вівчар Вадим Вікторович  
Група: АЛК-43

## Мета роботи

Ознайомитися з принципами оброблення виняткових ситуацій у C++, розглянути різновиди патернів Factory, зокрема Factory Method та Abstract Factory, а також навчитися застосовувати ці патерни на практичних прикладах.

---

## Звіт

- [Практичне заняття №11 — PDF-звіт](Практичне_заняття_11_Factory.pdf)

---

## Файли з кодом

| № | Назва файлу | Опис |
|---|---|---|
| 1 | [ConsoleApplication1.cpp](ConsoleApplication1.cpp) | Приклад оброблення виняткових ситуацій |
| 2 | [ConsoleApplication2.cpp](ConsoleApplication2.cpp) | Приклад реалізації патерну Factory Method |
| 3 | [ConsoleApplication3.cpp](ConsoleApplication3.cpp) | Приклад реалізації патерну Abstract Factory |
| 4 | [ConsoleApplication4.cpp](ConsoleApplication4.cpp) | Приклад фабрики з обробленням виняткової ситуації |

---

## Проєктні файли Visual Studio

### ConsoleApplication1

- [ConsoleApplication1.vcxproj](ConsoleApplication1.vcxproj)
- [ConsoleApplication1.vcxproj.filters](ConsoleApplication1.vcxproj.filters)
- [ConsoleApplication1.vcxproj.user](ConsoleApplication1.vcxproj.user)

### ConsoleApplication2

- [ConsoleApplication2.vcxproj](ConsoleApplication2.vcxproj)
- [ConsoleApplication2.vcxproj.filters](ConsoleApplication2.vcxproj.filters)
- [ConsoleApplication2.vcxproj.user](ConsoleApplication2.vcxproj.user)

### ConsoleApplication3

- [ConsoleApplication3.vcxproj](ConsoleApplication3.vcxproj)
- [ConsoleApplication3.vcxproj.filters](ConsoleApplication3.vcxproj.filters)
- [ConsoleApplication3.vcxproj.user](ConsoleApplication3.vcxproj.user)

### ConsoleApplication4

- [ConsoleApplication4.vcxproj](ConsoleApplication4.vcxproj)
- [ConsoleApplication4.vcxproj.filters](ConsoleApplication4.vcxproj.filters)
- [ConsoleApplication4.vcxproj.user](ConsoleApplication4.vcxproj.user)

---

## Короткий опис виконання

У практичному занятті розглянуто оброблення виняткових ситуацій та різновиди патернів Factory.

У першому прикладі показано базову роботу з винятками в C++. Програма перевіряє введені дані та обробляє помилкову ситуацію.

У другому прикладі реалізовано патерн Factory Method, який дозволяє створювати об’єкти через спеціальний фабричний метод без прямої залежності клієнтського коду від конкретних класів.

У третьому прикладі реалізовано патерн Abstract Factory. Він використовується для створення сімей пов’язаних об’єктів.

У четвертому прикладі показано поєднання фабрики класів з обробленням виняткових ситуацій. Якщо користувач вводить неправильний тип об’єкта, програма генерує та обробляє виняток.

---

## Використані приклади

1. Оброблення виняткової ситуації.
2. Factory Method.
3. Abstract Factory.
4. Factory з винятками.

---

## Висновок

У ході виконання практичного заняття було розглянуто принципи оброблення виняткових ситуацій та різновиди патернів Factory. Практичні приклади показали, що фабричні патерни дозволяють відокремити логіку створення об’єктів від клієнтського коду, зробити програму гнучкішою та спростити її подальше розширення.

Також було встановлено, що фабрики можуть бути корисними під час оброблення помилок, оскільки вони дозволяють централізовано перевіряти вхідні дані та повідомляти про неможливість створення потрібного об’єкта.
