## Clase 3

La **complejidad** es el total de operaciones que realiza el algoritmo para llegar
a un resultado.

Una funcion esta **acotada** por otra función .

**f(x) << g(x)**

Se puede decir entonces que **f(x)** esta acotada superiormente por **g(x)**.

**f(x) = O(g(x))**

Ejemplo: Insertion Sort.

Ee el mejor de los casos la complejidad va a ser *n*.

**Ω(n)**

En el peor de los casosla complejidad va a ser *n*n*.

**O(n*n)**

# Propiedades de los algoritmos.

1. La complejidad siempre sera la más grande en el algoritmo , es decir, la mas
grande siempre se consumira los mas pequeños.

**O(f1(x)+f2(x)) = O(max(f1(x), f2(x)))**

2. *f1(x) = O(g1(x)), f2(x) = O(g2(x))*. Las constantes son también consumidas.

**O(f1(x)xf2(x)) = O(g1(x)xg2(x))**

3. Las constantes serán absorvidas por el peor de los casos.

**f1(x) + C = O(g1(x))**

# Estructuras de datos lineales

Son usadas para guradar elementos del mismo tipo. En estas se puede hacer un recorrido
lineal y se puede saber quien va antes o despues en la estructura.

Algunas estructuras:

1. Vector.
2. Lista.
3. Pila.
4. Cola.
5. Deque (Mezcla entre pila y cola).

**Compljidades**

| Cabecera A | Cabecera B |
| ---------- | ---------- |
| Campo A0   | Campo B0   |
| Campo A1   | Campo B1   |

|       | |  []+  | |  +[]  | |  [+]  | |  []-  | |  -[]  | |  [-]  | |  [?]  |
|:-----:| |:-----:| |:-----:| |:-----:| |:-----:| |:-----:| |:-----:| |:-----:|
|Vector | | O(1)  | | O(n)  | | O(n)  | | O(1)  | | O(n)  | | O(n)  | | O(1)  |
|Lista  | | O(1)  | | O(1)  | | O(1)  | | O(1)  | | O(1)  | | O(1)  | | O(n)  |
|Pila   | | O(1)  | |   -   | |   -   | | O(1)  | |   -   | |   -   | | O(n)  |
|Cola   | | O(1)  | |   -   | |   -   | | O(1)  | |   -   | |   -   | | O(n)  |
|Deque  | | O(1)  | | O(1)  | |   -   | | O(1)  | | O(1)  | |   -   | | O(n)  |
