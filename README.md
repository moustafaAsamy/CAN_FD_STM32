# CAN_FD_STM32

the first thing in creating a driver #define all the configuration in a readable and maintanable way so this process can ease the devolompent process.

and its divided into 2 areas   

1:  

hardware driver header file 
the fixed codes or bits can't be ored :exp 2 or 3 

in microcontroller register defination header file 
2nd : the bits that (ored or anded) with each other : bit defination , mask , shift bit 

MASK= 1<<read_shift 
read= MASK


