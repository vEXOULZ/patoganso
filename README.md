This code gets a whole number as input and prints "Pato" if it's divisible by 3; "Ganso" if it's divisible by 5; "PatoGanso" if it's divisible by both 3 and 5.

If none of the conditions are met, it prints the input number as is.


Compiling:

> g++ -g ".\src\main.cpp" -o ".\bin\main.exe"

Running:

> .\bin\main.exe {{input number}}

Examples:

  > \> .\bin\main.exe 1
  >
  > 1
  >
  > \> .\bin\main.exe 3
  >
  > Pato
  >
  > \> .\bin\main.exe 5
  >
  > Ganso
  >
  > \> .\bin\main.exe 15
  >
  > PatoGanso