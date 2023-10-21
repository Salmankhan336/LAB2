
# Computer Science I 
## Lab 2.0 Worksheet

Name(salman khan) and Login(salman khan):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

//year is not correct due to incorrect value
Today is 2023/10/20
Your birth 1978/09/09
Hello Dennis_Ritchie. You are 45 years,5 weeks,6 day old today


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

//year is not correct due to incorrect value 
Today is 2023/10/20
Your birthday was 1980/12/30
Hello, Bjare_Stroustrup. Your are 42 years 41 weeks, 6 day old today


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

today is 2023/10/20
Your birthday was 2003/04/06
Hello salman: you are 20 years,28 weeks, 1 day 0ld today

today is 2023/10/20

Your birthday was 2003/3/14
Hello: Abdullah. You are 20 years,31 weeks,and 3 days old

4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
  Minimum value for signed char: -128
  Maximum value for signed char: 127
  Mainimum value for unsigned char: 0
  Maximum value for unsigned char:255
  Minimum value for char :-128
  Maximum value for char :127
  size of signed char : 1 byte
* `short int`
  size: 2 bytes
  range:
  Minimum value for unsigned short:0
  Maximum Value for unsigned short:65535
  size of signed short : 2 bytes
* `int`
  minimum value for signed int: -2147483648
  maximum value for signed int: 2147483647
  size of signed int: 4 bytes
  maximum value for unsigned int: 0
  maximum value for unsigned int: 4294967295
  size of unsigned int: 4 bytes
  range:
* `long int`
  minimum value for signed long: -2147483648
  maximum value for signed long: 2147483647
  size of signed long: 4 bytes
  minimum value for unsigned long : 0
  maximum value unsigned long ; 4294967295
  size of unsigned long:  4 bytes 
* `float`
  size of  float: 4 bytes 

  

* `double`
  size of double : 8 bytes 
  size of long double: 16 bytes
  range: 15 digits of accuracy




5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

Amount in USD: $250.25
Exchange Fee: $25.03
Amount in GBP: 88.96
Amount in JPY: 14374 JPY

  b) $1,000.52

Amount in USD: $1000.52
Exchange Fee: $100.05
Amount in GBP: 355.68
Amount in JPY: 57472.37 

  c) $968,410.12
  Enter the amount in US Dollars: 968410.12
Amount in USD: $968410.12
Exchange Fee: $96841.01
Amount in GBP: 344269.80
Amount in JPY: 55627898 jpy



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
if we use only int types in our prgrogram we cannot covert the us national debit because the range of int is -2,147,483,648 to 2,147,483,647 so we cannot store the large value1




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
the answer i get is 60 square units which is incorrect

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
the answer i get is 75 square units which is incorrect


c) Fix the program by editing the `area.c` source
code so that the program produces correct results
in the program area.c the area of tringle is incorrect so we put the correct formula which gives the correct result
