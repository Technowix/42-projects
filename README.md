Mostly code-golf and maintainability-first, and trying to push C at the edge of what we are allowed at the school : [FR](https://cdn.intra.42.fr/pdf/pdf/317/norme.fr.pdf)/[EN](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)
* * *

Here the projects and their score :

#### Camagru
Score : **100**/100

Little PHP project, a simple website where you can register and account and start posting / liking pictures of other users.

#### FdF
Score : **125**/100

*Fil-de-fer* map visualizer, draw lines based on a heightmap.
![France's heightmap in FdF](https://i.imgur.com/x6LHPOg.png)

#### Fillit
Score : **100**/100
*(Did it with @itokoyamato)*

A program that take as input many [tetrominoes](https://en.wikipedia.org/wiki/Tetromino), and must make them fit in the tiniest space possible.

#### Fract'ol
Score : **113**/100

Fractals visualizer, currently [Julia](https://en.wikipedia.org/wiki/Julia_set), [Mandelbrot](https://en.wikipedia.org/wiki/Mandelbrot_set) and [Burning Ship](https://en.wikipedia.org/wiki/Burning_Ship_fractal).
![Mandelbrot in Fract'ol](https://i.imgur.com/nLjk81Q.png)

#### ft_printf
Score : **100**/100

Recreation of the `printf` function of the OSX standard library.
*(Code isn't shiny at all, school limitations pushed me hard, and I didn't wanted to do it ine many, many function, so... ItWorkButNeverInProduction™️)*

#### Lem-in
Score : **125**/100
*(Did it with @itokoyamato)*

This is a initiation to pathfinding algorithm, the program will take an anthill into the form of a text file, (number of ants, rooms and tunnels) and will make ants reach the exit in the less numbers of turns possible.
For example, the anthill bellow is defined by this :
```
#Number of ants
3
#Rooms
2 5 0
##start
0 1 2
##end
1 9 2
3 5 4
#And here the tunnels
0-2
0-3
2-1
3-1
2-3

#This is the output that the program will send to us, all the movements
L1-3 L2-2
L1-1 L2-1 L3-3
L3-1
```
Will look like this (The animation is running here, showing ants runnings trough tunnels) :

![Lem_in WebGL visualizer](https://i.imgur.com/ppjvM95.png)

#### push_swap
Score : **94**/100

This program sort a list of int with limited operations and 2 stack (swap the 2 first at the top, reverse the stack, and push the stack to the other one)
