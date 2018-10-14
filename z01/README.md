## Zadanie 1
Napisz program, który pyta użytkownika o jego/jej wzrost (w metrach, jako `double`) i wagę (w kilogramach, też jako `double`). Następnie program powinien wyświetlić jego/jej współczynnik BMI (body mass index) zdefiniowany jako waga w kilogramach podzielona przez kwadrat wzrostu w metrach. Powinna to być liczba rzędu 20.

## Zadanie 2
Napisz i przetestuj program, który:

* Prosi użytkownika o wpisanie trzech liczb;
* Wczytuje te liczby;
* Następnie,
    * jeżli zdeniowana jest nazwa (makro) preprocesora GETMAX, to program wyświetla na ekranie największą z wczytanych liczb;
    * jeżli zdeniowana jest makro GETMIN, to program wyświetla na ekranie najmniejszą z nich; jeżli zdeniowane są obie nazwy, to wyświetla zarówno najmniejszą jak i największą z nich;
    * jeżli żadna z tych nazw nie jest zdefiniowana, to kompilacja powinna zostać przerwana.

## Zadanie 3
Napisz program pobierający od użytkownika trzy nieujemne liczby całkowite i wypisujący na ekranie histogram dla tych danych, to znaczy trzy słupki złożone ze znaków '*', wyrównane od dołu, o wysokościach równych wartościom trzech wczytanych liczb.

Wykonanie programu mogłoby zatem wyglądać tak:

```
$ ./histo
Enter three non-negative numbers: 3 1 8
*
*
*
*
*
* *
* *
***

$
```

Nie używaj tablic, napisów ani żadnych innych kolekcji.

## Zadanie 4

Napisz program, który w pętli prosi użytkownika o wpisanie dodatniej liczby całkowitej; wczytywanie kończy się, gdy użytkownik poda liczbę 0. Następnie program wypisuje tą z wczytanych liczb, dla której suma cyfr jest największa (oraz ta sumę cyfr).

Program komunikuje się z użytkownikim w języku (np. polskim lub angielskim), który zależy od tego, czy zdeniowane jest makro preprocesora (np. POL czy ENG); jeżeli żadne z tych makr nie jest zdeniowane, albo zdeniowane są obydwa, to program nie powinien się w ogóle skompilować.

Przykładowy przebieg wykonania programu:

```
enter a natural number (0 if done): 23
enter a natural number (0 if done): 59
enter a natural number (0 if done): 78
enter a natural number (0 if done): 91
enter a natural number (0 if done): 0

Max sum of digits was 15 for 78
```

*UWAGA: Nie używać tablic, napisów ani żadnych innych kolekcji.*