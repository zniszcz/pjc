# Strona 1 / 6

1. Zakładając, że klasa B została zdefiniowana wcześniej, następująca definicja klasy A:

``` cpp
struct A {
    A a; // 1
    A* pa; // 2
    B b; //3
}
```

mogłaby być prawidłowa po skreśleniu linii:

a) 1  
b) może być prawidłowa bez skreśleń  
c) 3  
d) 2  

---

2. Spośród poniższych instrukcji:

``` cpp
    const int k; // a
    int k, *m = &k; // b
    int *k, m = &k; // c
    int k = 7, &m = k; // d
```

a) b, d  
b) a, c  
c) a, b  
d) c, d  

---

3. Wykonanie poniższego fragmentu

``` cpp
int tab[] = {1, 2, 3, 4, 5}, *t = &tab[1];
```

spowoduje wydrukowanie:

a) liczb 3 i 5  
b) dwóch przypadkowych wartości  
c) liczby 4 i jakiejś przypadkowej wartości  
d) fragment wogóle się nie skompiluje  

---

4. Po definicjach: `int x{10}, y{15}, z{20};`, wartościami wyrażeń

`!(x>10)`,  
`x<=5||y<15`,  
`x!=5&&ky!=z`,  
`x>z||x+y>=z`  

będą kolejno:

a) true, true, true, false  
b) false, false, true, true  
c) true, false, true, true  
d) true, false, true, false  

---


5. Jaką literę wydrukuje następujący fragment programu

``` cpp
const char* s = "UVWXYZ";
cout << *(ks[3]-2) << endl;
```

a) W  
b) X  
c) V  
d) Y  
e) U  

---

6. Jeśli funkcja ma jeden parametr z wartością domyślną to musi to być:

a) parametr jedyny  
b) taka sytuacja jest niemożliwa  
c) parametr pierwszy  
d) parametr ostatni  

---


7. Zmienne `n`, `pn`, `rn` zdefiniowane są instrukcją `int n=1, *pn=&n, &rn=n;` a funkcja `fun` ma definicję

``` cpp
void fun(int* t[]) { cout << *t[0] << endl; }
```

Które z wywołań:

(1) `fun(n);`  
(2) `fun(pn);`  
(3) `fun(&pn);`  
(4) `fun(rn);`  

powiedzie się:

a) 2  
b) wszystkie  
c) czwarte  
d) pierwsze  
e) żadne z nich  
f) trzecie  

---

8. Po deklaracjach/definicjach:

``` cpp
struct Student {
    // ...
    int oceny[10];
}

Student s[20];
```

które z poniższych wyrażeń:

I) `s.Student[4].oceny[1];`  
II) `s.oceny[4][1];`  
III) `s[4].oceny[1];`  
IV) `s[4].Student.oceny[1];`  
V) `s.Student.oceny[4][1];`  
VI) `s.oceny[1].Student[4];`  
VII) `Student.s[4].oceny[1];`  
VIII) `s[4][1];`  

odnosi się do drugiej oceny piątego studenta:

a) II  
b) IV  
c) VI  
d) VII  
e) III  
f) V  
g) VIII  
h) I  

---

9. W następującym programie

``` cpp
struct Point { int x, y; };
struct Triangle { Point *A, *B, *C;};
int main() {
    Point a = {1, 2}, B = {2, 3};
    Triangle t  = {&A, &B, new Point};
    t->A->x     = t->A->y = 0;  // a
    t.A->x      = t.A->y = 0;   // b
    t->A.x      = t->A.y = 0;   // c
    t.A.x       = t.A.y = 0;    // d
}
```

spośród czterech ostatnich linii prawidłowa jest tylko linia

a) d  
b) b  
c) c  
d) a  
  
---

# Strona 2 / 6

1. Niech struktura `Osoba` będzie zdefiniowana następująco

``` cpp
struct Osoba {
    char* imie;
    char* nazwisko;
    // ...
};
```

Napisz funkcję, która zwraca ilość liter w imieniu tej z osób reprezentowanych przez zmienne `a` i `b`, która ma dłuższe nazwisko (wolno korzystać z funkcji `strlen`):

``` cpp
int fun(Osoba& a, Osoba* b) {



}
```

2. Napisz szablon funkcji pobierającej tablicę i jej wymiar a zwracającej referencję do najmniejszego elementu tablicy:

``` cpp
template................................ {


}
```

# Strona 3 / 6

1. Po instrukcji `int tab[] = {1, 2, 3, 4, 5}, *p = tab+1;` wartość wyrażenia `p[2]` wynosi:

a) 3  
b) instrukcja jest nielegalna  
c) wartość ta jest nieokreślona  
d) 4  
e) 2  

---

2. Spośród poniższych instrukcji:

``` cpp
const int k; // a
int k, *m = &k; // b
int *k, n = &k; // c
int k = 7, &m = k; // d
```

prawidłowe są tylko:

a) a, b  
b) c, d  
c) a, c  
d) b, d  

---

3. Po instrukcji `int k = 7, m, *p = &k;` spośród instrukcji

(1) `p=&m;`  
(2) `p=5;`  
(3) `*p = 5;`  
(4) `m = *p;`  

prawidłowe są wyłącznie:

a) 2, 3, 4  
b) 1, 3  
c) żadna  
d) 1, 3, 4  
e) wszystkie  

---

4. Wykonanie instrukcji

``` cpp
int n=2, *pn=&k, k=*pn+1, &rk=k;
--k;
cout << --rk << endl;
```

spowoduje wypisanie na ekranie:

a) liczby 2  
b) fragmnet nie skompiluje się  
c) liczby 1  
d) adresu zmiennej `rk`  
e) liczby 3  

---

5. Zmienne `n`, `pn`, `rn` zdefiniowane są instrukcją `int n = 1, *pn = &n, &rn = *pn;`, a funkcja `fun` ma prototyp `int fun(int*);`

Które z wywołań

(1) `pn = fun(n);`  
(2) `rn = fun(*pn);`  
(3) `rn = fun(&n);`  
(4) `*pa = fun(*pn);`  
(5) `n = fun(*n);`  
  
może się powieść:

a) 4  
b) 1  
c) 2  
d) 3  
e) żadne z nich  
f) wszystkie  

---

6. Zmienne `n`, `pn`, `rn` zdefiniowane instrukcją `int n = 1, *pn = &n, &rn = *pn;`, a funkcja `fun` ma prototyp `int fun(int*);`. Które z wywołań

(1) `pn = fun(n);`  
(2) `rn = fun(*pn);`  
(3) `rn = fun(&n);`  
(4) `*pn = fun(*pn);`  
(5) `n = fun(*n);`  

może się powieść:

a) tylko 3  
b) wszystkie  
c) 1 i 5  
d) żadne z nich  
e) 2 i 4  

---

7. Po definicjach `int x{10}, y{15}, z{20};` wartościami wyrażeń `!(x>10)`, `x<=5||v<15`, `x>=z||x+y>=z` będą kolejno:

a) true false true true  
b) false false true true  
c) true false true false  
d) true true true false  
e) true false false true  

---

8. Jeśli funkcja ma jeden parametr z wartością domyślną to musi to być:

a) taka sytuacja jest niemożliwa  
b) parametr ostatni  
c) parametr jedyny  
d) parametr pierwszy  

---

9. Funkcja `rekur` zdefiniowana jest następująco

``` cpp
void rekur(cont char* nap) {
    if (*nap != 'D') {
        rekur(nap+1);
        cout << *nap;
    }
}
```

Co zostanie wydrukowane po wywołaniu `rekur("ABCD")`?

a) CBA  
b) ABCD  
c) ABCDCBA  
d) DCBA  
e) D  
f) ABC  

---

10. Zakładając, że klasa `B` została zdefiniowana wcześniej, następująca definicja klasy `A`

``` cpp
struct A {
    A a; // 1
    A* pa; // 2
    B b; // 3
};
```

mogłaby być prawidłowa po skreśleniu linii:

a) 3  
b) może być prawidłowa bez skreślania linii  
c) 1  
d) 2  

---

11. Wykonanie poniższego fragmnetu

``` cpp
int tab[] = {1, 2, 3, 4, 5}, *t = &tab[1];
cout << t[2] << " " << t[4] << endl;
```

spowoduje wydrukowanie

a) dwóch przypadkowych wartości  
b) liczby 4 i jakiejś przypadkowej wartości  
c) liczb 3 i 5  
d) fragment wogóle się nie skompiluje  

---

# Strona 4/6

10. Po następujących deklaracjach / definicjach `int *i[10] = {0}, q = 1, *p = &q;` spośród instrukcji

I) `i[5] = q;`  
II) `i[5] = &q;`  
III) `i[5] = &p;`  
IV) `i[5] = p;`  
V) `p = i[0];`  

poprawnymi instrukcjami są tylko

a) 2, 3, 5  
b) 1, 2, 5  
c) 2, 5  
d) 2, 4, 5  

---

11. Zmienne `n`, `pn`, `rn` zdefiniowane są instrukcją `int n = 1, *pn = &n, &rn = *pn;`, a funkcja ma prototyp `int fun(int&);`. Które z wywołań

(1) `pn = fun(n);`  
(2) `rn = fun(*pn);`  
(3) `rn = fun(&n);`  
(4) `*pn = fun(*pn);`  
(5) `n = fun(*n);`  

może się powieść:

a) wszystkie  
b) tylko 3  
c) 1 i 5  
d) żadne z nich  
e) 2 i 4  

---

12. Po instrukcji `int k = 7, m, *p = &k;` spośród instrukcji

(1) `p = &m;`  
(2) `p = 5;`  
(3) `*p = 5;`  
(4) `m = *p;`  

prawidłowe są tylko:

a) 2, 3, i 4  
b) 1 i 3  
c) 1, 3 i 4  
d) wszystkie  
e) żadna  

---

13. Jeżeli użyliśmy dyrektywy `#include<iostream>` ale __*nie*__ użyliśmy `using namespace std;`, to do nazwy `cout` trzeba się odnieść poprzez:

a) `std->cout`  
b) `std::cout`  
c) `std.cout`  
d) `std(cout)`  

---

14. Funkcja `rekur` zdefiniowana jest następująco

``` cpp
void rekur(cont char* nap) {
    if (*nap != 'D') {
        rekur(nap+1);
        cout << *nap;
    }
}
```

Co zostanie wydrukowane po wywołaniu `rekur("ABCD")`?

a) DCBA  
b) D  
c) ABCD  
d) ABCDCBA  
e) CBA  
f) ABC  

---

15. Jeśli zdefiniowana jest funkcja `F` o deklaracji `void F(int*, int = 0, double - 0);` to po

``` cpp
int k = 7, *pk = &k;
double x = 7, *px = &x;
```
spośród następujących czterech wywołań

(1) `F(&k, k);`  
(2) `F(&k);`  
(3) `F(pk, *pk, x);`  
(4) `F(pk, *pk, *px);`  

prawidłowe są tylko

a) trzy z nich  
b) wszystkie cztery  
c) dwa z nich  
d) żadne z nich  
e) jedno z nich  

---

16. Po instrukcji `int tab[] = {1, 2, 3, 4, 5}, *p = tab+1;` wartość wyrażenia `p[2]` wynosi

a) 3  
b) instrukcja jest nielegalna  
c) 2  
d) wartość ta jest nieokreślona  
e) 4  

---

17. Wykonanie instrukcji

``` cpp
int n = 2, *pn = &n, k = *pn+1, &rk = k;
--k;
cout << --rk << endl;
```

spowoduje wypisanie na ekranie

a) liczby 1   
b) fragment się nie skompiluje  
c) liczby 2  
d) adresu zmiennej `rk`  
e) liczby 3  

---

18. Po następującym fragmencie programu:

``` cpp
int& f1(int&);
int* f2(int*);
int f3(int*);
int f4(int&);
int f5(int);
int(*f)(int*);  
```

możliwe jest przypisanie:

a) `f=f5;`  
b) `f=f2;`  
c) `f=f4;`  
d) `f=f1;`  
e) `e=f3;`  

---

19. Po instrukcji `double* tab = new double[10];` zakładając, że `sizeof(int) == sizeof(void*) == 4;` a `sizeof(double) == 8;` wartością `sizeof(tab)` jest:

a) 4  
b) 40  
c) 8  
d) 80  

---

20. Jeśli funkcja `F` ma deklarację `void F(int& n);` a `k` jest typu `int` to wywołanie tej funkcji może mieć postać:

a) `F(&k);`  
b) `F(*k);`  
c) `F(k);`  
d) `F(k&);`  
e) `F(k*);`  

---

# Strona 5 / 6

1. Struktura `Interval` opisuje odcinek `[a, b]` na osi liczbowej (`a <= b`)

``` cpp
struct Interval {
    double a, b;
    // ...
};
```

Napisz funkcję która pobiera dwa odcinki, przez wskaźnik i referencję, a zwraca przez wskaźnik dłuższy z nich:

``` cpp

const Interval* longer(const Interval* ps, const Interval& rs) {

    // ...

}

```

2. Niech strktura `Node` będzie zdefiniowana następująco:

``` cpp

struct Node {

    int data;
    Node* next;

    // ...

};

```

a `head` będzie wskaźnikiem do pierwszego elementu listy złożonej z co najmniej dwóch obiektów struktury `Node`. Napisz funkcję, która zamienia dane w elementach pierwszym i ostatnim:

``` cpp

void fun(Node* head) {

    // ...

}

```

# Strona 6 / 6


12. Jaką literę wydrukuje następujący fragment programu:

``` cpp
const char* s = "UVWXYZ";
cout << *(&s[3]-2) << endl;
```

a) W  
b) X  
c) V  
d) Y  
e) U  

---

13. Po deklaracjach / definicjach:

``` cpp
struct Student {
    // ...
    int oceny[10];
};
Student s[20];
```

Które z poniszych wyrazeń odnosi się do drugiej oceny piątego studenta:

a) `s.Student[4].oceny[1];`  
b) `s.oceny[4][1];`  
c) `s[4].oceny[1];`  
d) `s[4].Student.oceny[1];`  
e) `s.Student.oceny[4][1];`  
f) `s.oceny[1].Student[4];`  
g) `Student.s[4].oceny[1];`  
h) `s[4][1];`  

---

14. Po następującym fragmencie programu:

``` cpp
int& f1(int&);
int* f2(int*);
int f3(int*);
int f4(int&);
int f5(int);
int(*f)(int*);
```

mozliwe jest przypisanie:

a) f=f4;  
b) f=f5;  
c) f=f2;  
d) f=f3;  
e) f=f1;  

---

15. Po instrukcji:

``` cpp
double** tab = new double*[10];
```

zakładając, ze:

``` cpp
sizeof(int) = sizeof(void*) = 4;
sizeof(double) = 8;
```

Wartością `sizeof(tab)` jest:
a) 8  
b) 80  
c) 40  
d) 4  

---

16. Po następujących deklaracjach / definicjach:

``` cpp
int k, *p, *tab[10];
```

spośród instrukcji:

``` cpp
p       = tab[0];     // 1
tab[0]  = *p;    // 2
tab[0]  = k;     // 3
tab[0]  = &k;    // 4
tab[0]  = p;     // 5
```

prawidłowe mogłyby być tylko:

a) 1,3,5  
b) 3,4  
c) 1,5  
d) 1,2  
e) 1,4,5  

---

17. Jeśli funkcja F ma deklarację:

``` cpp
void F(int& n);
```

a `p` jest typu `int*`, to wywołanie tej funkcji może mieć postać:

a) `F(*p);`  
b) `F(p*);`  
c) `F(p&);`  
d) `F(p);`  
e) `F(&p);`  

---

18. W następującym programie

``` cpp
struct Point { int x, y; };
struct Triangle { Point *A, *B, *C; };
int main() {
    Point A     = {1,2}, B = {2,3};
    Triangle t  = {&A, &B, new Point};

    t->A->x     = t->A->Y   = 0; // (a)
    t.A->x      = t.A->y    = 0; // (b)
    t->A.x      = t->A.y    = 0; // (c)
    t.A.x       = t.A.y     = 0; // (d)
}
```

spośród czterech ostatnich lini prawidłowa jest tylko linia:

a) (d)  
b) (c)  
c) (a)  
d) (b)  

---

19. Jeśli zdefiniowana jest funkcja `F` o deklaracji

``` cpp
void F(int*, int = 0, double = 0);
```

to po

``` cpp
int k = 7, *pk = &k;
double x = 7, *px = &x;
```

Spośród następujących czterech wywołań:

``` cpp
F(&k,k);
F(&k);
F(pk, *pk, x);
F(pk, *pk, *px);
```

Prawidłowe są tylko:

a) zadne z nich  
b) dwa z nich  
c) trzy z nich  
d) wszystkie cztery  
e) jedno z nich  

---

20. Jeśli użyliśmy dyrektywy

``` cpp
#include<iostream>
```

ale nie użyliśmy

``` cpp
using namespace std;
```

to do nazwy `cout` trzeba sie dnosic przez:

a) `std->cout`  
b) `std.cout`  
c) `std(cout)`  
d) `std::cout`  
