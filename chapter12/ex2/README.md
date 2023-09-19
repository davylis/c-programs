# Changing a number using a pointer
The C program introduced in the previous exercise has been changed. This time, the program prompts the user for an integer and stores it in the variable x. The program prints the number, calls the subroutine "change_number" passing the address of the variable x as an argument, and finally prints the value of the variable x again.

Your task is to write the subroutine "change_number" that takes the address of the variable x, increases the value of the variable by three and prints the changed number as shown in the example printout. As you can see in the example printout, the subroutine will permanently change the value of the variable x in the main program.

example output:
```
Enter the number x: 555
In the main program: x = 555
In the subroutine: x = 558
In the main program: x = 558