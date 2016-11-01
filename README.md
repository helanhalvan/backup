# backup
Current state of code:

It runs to completion if `

* the `--no-gc` is used as a compiler option

* the code is run using `--ponythreads 1`

* the instance have a low number of agents (change `scenario.xml`'s n values from 2000 to 20)

Chaning any one of these causes the code to segfault in different locations, having in common that they are all in the ponyrt and not my code. Because of this, it's hard to track down which (if any) of my data structures are causing the problem.

Requirments:
Requires encore installed to work.
Visualization requires SDL2 to work. To disable visualization remove the import of SDL files from main. (line 4 in main.enc)

Build instructions:

Compile and run with:

./compile main.enc -r

Compile and make C code with:

./compile main.enc -c

If you want to do anything more fancy, use

encorec main.enc

with some options

Credit:

I have made the stuff in:

encore-libs-master/Ped_util

Some grandmother have made, altho I restructured it slightly:

encore-libs-master/SDL

All the other stuff in:

encore-libs-master

Is taken from:

https://github.com/parapluu/encore-libs

# backup
