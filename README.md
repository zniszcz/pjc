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

__a) 1__  
b) może być prawidłowa bez skreśleń  
c) 3  
d) 2  

[dowód](https://ideone.com/pcowNb)

---

2. Spośród poniższych instrukcji:

``` cpp
    const int k; // a
    int k, *m = &k; // b
    int *k, m = &k; // c
    int k = 7, &m = k; // d
```

prawidłowe są tylko

__a) b, d__  
b) a, c  
c) a, b  
d) c, d  

[dowód](https://ideone.com/TfHYye)

---

3. Wykonanie poniższego fragmentu

``` cpp
int tab[] = {1, 2, 3, 4, 5}, *t = &tab[1];
cout << t[2] << " " << t[4];
```

spowoduje wydrukowanie:

a) liczb 3 i 5  
b) dwóch przypadkowych wartości  
__c) liczby 4 i jakiejś przypadkowej wartości__
d) fragment wogóle się nie skompiluje  

[dowód](https://ideone.com/4HXQKk)

---

4. Po definicjach: `int x{10}, y{15}, z{20};`, wartościami wyrażeń

`!(x>10)`,  
`x<=5||y<15`,  
`x!=5&&y!=z`,  
`x>z||x+y>=z`  

będą kolejno:

a) true, true, true, false  
b) false, false, true, true  
__c) true, false, true, true__  
d) true, false, true, false  

[dowód](https://ideone.com/Q8roUA)

---


5. Jaką literę wydrukuje następujący fragment programu

``` cpp
const char* s = "UVWXYZ";
cout << *(&s[3]-2) << endl;
```

a) W  
b) X  
__c) V__  
d) Y  
e) U  

[dowód](https://ideone.com/qEklpd)

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
__f) trzecie__  

[dowód](https://ideone.com/Vji8dP)

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
__e) III__  
f) V  
g) VIII  
h) I  

---

9. W następującym programie

``` cpp
struct Point { int x, y; };
struct Triangle { Point *A, *B, *C;};
int main() {
    Point A = {1, 2}, B = {2, 3};
    Triangle t  = {&A, &B, new Point};
    t->A->x     = t->A->y = 0;  // a
    t.A->x      = t.A->y = 0;   // b
    t->A.x      = t->A.y = 0;   // c
    t.A.x       = t.A.y = 0;    // d
}
```

spośród czterech ostatnich linii prawidłowa jest tylko linia

a) d  
__b) b__  
c) c  
d) a  

[dowód](https://ideone.com/pWWtrE)  

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
__d) 4__  
e) 2  

[dowód](https://ideone.com/wdqTEn)

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
__d) b, d__  

[dowód](https://ideone.com/o3LzQf)

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
__d) 1, 3, 4___  
e) wszystkie  

[dowód](https://ideone.com/NfoeZy)

---

4. Wykonanie instrukcji

``` cpp
int n=2, *pn=&n, k=*pn+1, &rk=k;
--k;
cout << --rk << endl;
```

spowoduje wypisanie na ekranie:

a) liczby 2  
b) fragmnet nie skompiluje się  
__c) liczby 1__  
d) adresu zmiennej `rk`  
e) liczby 3  

[dowód](https://ideone.com/tGijfj)

---

5. Zmienne `n`, `pn`, `rn` zdefiniowane są instrukcją `int n = 1, *pn = &n, &rn = n;`, a funkcja `fun` ma prototyp `int fun(int* t[]);`

Które z wywołań

(1) `fun(n);`  
(2) `fun(pn);`  
(3) `fun(&pn);`  
(4) `fun(rn);`  
  
może się powieść:

a) 4  
b) 1  
c) 2  
d) 3  
__e) żadne z nich__  
f) wszystkie  

[dowód](https://ideone.com/8KFWVS)

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
__d) żadne z nich__  
e) 2 i 4  

[dowód](https://ideone.com/IOgSq7)

---

7. Po definicjach `int x{10}, y{15}, z{20};` wartościami wyrażeń `!(x>10)`, `x<=5||y<15`, `x!=5&&y!=z`, `x>=z||x+y>=z` będą kolejno:

__a) true false true true__  
b) false false true true  
c) true false true false  
d) true true true false  
e) true false false true  

[dowód](https://ideone.com/f276OS)

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

__a) CBA__  
b) ABCD  
c) ABCDCBA  
d) DCBA  
e) D  
f) ABC  

[dowód](https://ideone.com/uJKebM)

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
__c) 1__  
d) 2  

[dowód](https://ideone.com/DToLo4)

---

11. Wykonanie poniższego fragmnetu

``` cpp
int tab[] = {1, 2, 3, 4, 5}, *t = &tab[1];
cout << t[2] << " " << t[4] << endl;
```

spowoduje wydrukowanie

a) dwóch przypadkowych wartości  
__b) liczby 4 i jakiejś przypadkowej wartości__  
c) liczb 3 i 5  
d) fragment wogóle się nie skompiluje  

[dowód](https://ideone.com/HCHyIi)

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
__d) 2, 4, 5__  

[dowód](https://ideone.com/lPD5FA)

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
__d) żadne z nich__  
e) 2 i 4  

[dowód](https://ideone.com/1jTDFw)

---

12. Po instrukcji `int k = 7, m, *p = &k;` spośród instrukcji

(1) `p = &m;`  
(2) `p = 5;`  
(3) `*p = 5;`  
(4) `m = *p;`  

prawidłowe są tylko:

a) 2, 3, i 4  
b) 1 i 3  
__c) 1, 3 i 4__  
d) wszystkie  
e) żadna  

[dowód](https://ideone.com/1a6aWU)

---

13. Jeżeli użyliśmy dyrektywy `#include<iostream>` ale __*nie*__ użyliśmy `using namespace std;`, to do nazwy `cout` trzeba się odnieść poprzez:

a) `std->cout`  
__b) `std::cout`__  
c) `std.cout`  
d) `std(cout)`  

---

14. Funkcja `rekur` zdefiniowana jest następująco

``` cpp
void rekur(const char* nap) {
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
__e) CBA__  
f) ABC  

[dowód](https://ideone.com/bwY1fk)

---

15. Jeśli zdefiniowana jest funkcja `F` o deklaracji `void F(int*, int = 0, double = 0);` to po

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
__d) żadne z nich__  
e) jedno z nich  

[dowód](https://ideone.com/Ej0vrR)

---

16. Po instrukcji `int tab[] = {1, 2, 3, 4, 5}, *p = tab+1;` wartość wyrażenia `p[2]` wynosi

a) 3  
b) instrukcja jest nielegalna  
c) 2  
d) wartość ta jest nieokreślona  
__e) 4__  

[dowód](https://ideone.com/Xahe5O)

---

17. Wykonanie instrukcji

``` cpp
int n = 2, *pn = &n, k = *pn+1, &rk = k;
--k;
cout << --rk << endl;
```

spowoduje wypisanie na ekranie

__a) liczby 1__   
b) fragment się nie skompiluje  
c) liczby 2  
d) adresu zmiennej `rk`  
e) liczby 3  

[dowód](https://ideone.com/REZioK)

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
__e) `f=f3;`__  

[dowód](https://ideone.com/KZNb0S)

---

19. Po instrukcji `double* tab = new double[10];` zakładając, że `sizeof(int) == sizeof(void*) == 4;` a `sizeof(double) == 8;` wartością `sizeof(tab)` jest:

a) 4  
b) 40  
__c) 8__  
d) 80  

[dowód](https://ideone.com/wsIfIa)

---

20. Jeśli funkcja `F` ma deklarację `void F(int& n);` a `k` jest typu `int` to wywołanie tej funkcji może mieć postać:

a) `F(&k);`  
b) `F(*k);`  
__c) `F(k);`__  
d) `F(k&);`  
e) `F(k*);`  

[dowód](https://ideone.com/mrsSPq)

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
__c) V__  
d) Y  
e) U  

[dowód](https://ideone.com/5HpWvm)

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
__c) `s[4].oceny[1];`__  
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
__d) f=f3;__  
e) f=f1;  

[dowód](https://ideone.com/V2tLUt)

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
__a) 8__  
b) 80  
c) 40  
d) 4  

[dowód](https://ideone.com/pQy7kk)

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
__e) 1,4,5__  

[dowód](https://ideone.com/Yl4Vlq)

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

a) ( d )  
__b) ( c )__  
c) ( a )  
d) ( b )  

[dowód](https://ideone.com/2GxHhH)

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
__d) `std::cout`__  
