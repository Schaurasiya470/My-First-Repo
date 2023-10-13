c_coding@V-3491: ~/CCD$ gcc areaoftriangle.c 
/usr/bin/ld: /tmp/ccsi8GkH.o: in function `main':
areaoftriangle.c:(.text+0xae): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
c_coding@V-3491: ~/CCD$ gcc areaoftriangle.c -lm
c_coding@V-3491: ~/CCD$ ./a.out 
Enter sides of triangle
3 4 5
AREA and Perimeter of Triangle = 6.000000,12.000000
c_coding@V-3491: ~/CCD$ ./a.out 
Enter sides of triangle
10
12
14
AREA and Perimeter of Triangle = 58.787754,36.000000
c_coding@V-3491: ~/CCD$