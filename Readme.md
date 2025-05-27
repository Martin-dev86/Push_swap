# Push_swap: Ordenación Eficiente de Stacks con Algoritmo de Costes (42 School)

![Push_swap GIF](URL_DEL_GIF_AQUI) ## Descripción del Proyecto

Push_swap es un proyecto de algoritmia simple y muy efectivo. El objetivo es ordenar datos en un stack (`stack a`), con un conjunto limitado de instrucciones, y utilizando el menor número posible de acciones. Tienes a tu disposición un conjunto de valores enteros, 2 stacks (`a` y `b`) y un conjunto de instrucciones para manipular ambos. Debes escribir un programa en C llamado `push_swap` que calcule y muestre la secuencia más corta de instrucciones para ordenar los enteros recibidos.

Este proyecto es un encuentro crucial con el concepto de complejidad algorítmica.

## El Reto: Operaciones Permitidas

El núcleo del desafío reside en la optimización. Tienes 2 stacks, `a` y `b`. `a` comienza con números aleatorios y `b` está vacío. El objetivo es ordenar `a` en orden ascendente usando solo estas operaciones:

* `sa`: Intercambia los dos primeros elementos del stack `a`. No hace nada si hay uno o menos elementos.
* `sb`: Intercambia los dos primeros elementos del stack `b`. No hace nada si hay uno o menos elementos.
* `ss`: Ejecuta `sa` y `sb` a la vez.
* `pa`: Toma el primer elemento de `b` y lo pone el primero en `a`. No hace nada si `b` está vacío.
* `pb`: Toma el primer elemento de `a` y lo pone el primero en `b`. No hace nada si `a` está vacío.
* `ra`: Rota `a`: el primer elemento se convierte en el último.
* `rb`: Rota `b`: el primer elemento se convierte en el último.
* `rr`: Ejecuta `ra` y `rb` al mismo tiempo.
* `rra`: Rotación inversa `a`: el último elemento se convierte en el primero.
* `rrb`: Rotación inversa `b`: el último elemento se convierte en el primero.
* `rrr`: Ejecuta `rra` y `rrb` al mismo tiempo.

## Mi Enfoque: Algoritmo Basado en Costes

Para encontrar la secuencia de instrucciones más corta, he desarrollado e implementado un **algoritmo basado en el cálculo de costes**. Este método funciona de la siguiente manera:

1.  **Análisis:** Evalúa la posición actual de cada número en el `stack a` en relación con su posición final deseada.
2.  **Cálculo de Costes:** Para cada elemento (o para candidatos a ser movidos), calcula el "coste" en número de operaciones (`ra`, `rra`, `rb`, `rrb`, `rr`, `rrr`) para llevarlo a la cima de su stack y luego moverlo al otro stack (`pa` o `pb`) y posicionarlo de la manera más eficiente posible.
3.  **Decisión:** Selecciona el movimiento (o la secuencia corta de movimientos) que tenga el menor coste combinado en cada paso.
4.  **Iteración:** Repite el proceso, moviendo estratégicamente los números del `stack a` al `stack b` y luego devolviéndolos ordenados al `stack a`, siempre buscando minimizar el número total de instrucciones.

Este enfoque permite tomar decisiones informadas en cada paso, buscando activamente la ruta más corta hacia la solución ordenada.

## Rendimiento

El algoritmo busca cumplir los siguientes objetivos de rendimiento:

* **Para 100 números:** Ordenar en menos de 700 operaciones.
* **Para 500 números:** Ordenar en menos de 5500 operaciones.

## Cómo Usar

### Requisitos

* Un compilador C (como `gcc` o `clang`).
* `make`.

### Compilación

1.  **Clona el repositorio:**
    ```bash
    git clone [https://github.com/tu_usuario/tu_repositorio.git](https://github.com/tu_usuario/tu_repositorio.git)
    cd tu_repositorio
    ```
2.  **(Opcional) Si usas `libft`, asegúrate de que esté presente y compila:**
    ```bash
    # Copia o clona tu libft en una carpeta 'libft'
    make -C libft
    ```
3.  **Compila el proyecto:**
    ```bash
    make
    ```
    Esto creará el ejecutable `push_swap`. Tu `Makefile` debe contener las reglas `$(NAME)`, `all`, `clean`, `fclean` y `re`.

### Ejecución

* **Generar instrucciones (`push_swap`):**
    * Pasa la lista de números enteros como argumentos. El primer argumento es el que está encima del stack.
    * No debe haber duplicados ni argumentos no enteros.
    * El programa mostrará la lista de instrucciones separadas por `\n`.
    ```bash
    ./push_swap 2 1 3 6 5 8
    ```
    * Si hay un error, mostrará "Error" en `stderr`.

## Tecnologías

* **Lenguaje:** C
* **Compilación:** Makefile
* **Librerías Permitidas:** `read`, `write`, `malloc`, `free`, `exit`. (Y tu `libft` si está permitido y la usas).
