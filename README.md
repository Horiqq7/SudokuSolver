# Sudoku Solver

## Descriere

Acest proiect implementează un algoritm de rezolvare a jocului Sudoku in limbajul C. Programul preia o matrice de Sudoku (9x9) și o rezolvă pas cu pas utilizând strategii de eliminare a posibilităților.

## Structura proiectului

Proiectul conține următoarele fișiere principale:
- `sudoku.h` - Fișier header care definește structurile de date și prototipurile funcțiilor.
- `main.c` - Funcția principală a programului care inițializează Sudoku-ul, rulează algoritmul de rezolvare și afișează soluția.
- `sudoku.c` - Implementarea funcțiilor necesare pentru gestionarea Sudoku-ului, inclusiv inițializarea, actualizarea și verificarea puzzle-ului.

## Funcționalitate

1. **Inițializare Sudoku**
   - Matricea este citită dintr-o variabilă predefinită (`createPuzzle`).
   - Se alocă memorie pentru pătrățele (`Square`), linii și coloane.
   - Se creează structura `Box` pentru a ține evidența celor 9 regiuni 3x3.

2. **Rezolvare Sudoku**
   - Se aplică strategii de rezolvare, cum ar fi:
     - Eliminarea valorilor imposibile din pătrățele.
     - Căutarea pătrățelelor cu o singură soluție posibilă.
     - Verificarea unicității numerelor pe linii, coloane și regiuni.
   - Algoritmul rulează într-un loop până la completarea Sudoku-ului.

3. **Afișare rezultat**
   - Se afișează tabla inițială și soluția finală.
   - Dacă nu există o soluție, se afișează un mesaj de eroare.

## Posibile îmbunătățiri

- Implementarea unei interfețe grafice pentru utilizator.
- Îmbunătățirea algoritmului cu tehnici mai avansate (backtracking).
- Posibilitatea de a introduce puzzle-uri personalizate de la tastatură.

## Autor

Acest proiect a fost realizat de Rusu Horia.

