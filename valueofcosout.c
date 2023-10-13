c_coding@V-3491: ~/CCD$ gcc valueofcos.c 
/usr/bin/ld: /tmp/ccbhq6Ee.o: in function `main':
valueofcos.c:(.text+0x8a): undefined reference to `pow'
collect2: error: ld returned 1 exit status
c_coding@V-3491: ~/CCD$ gcc valueofcos.c -lm
c_coding@V-3491: ~/CCD$ ./a.out 
Enter Angle in Radian and no of term upto.. 
0.78 10

Hence cos(0.78) is equal to 0.85
c_coding@V-3491: ~/CCD$ ./a.out 
Enter Angle in Radian and no of term upto.. 
1.57 10

Hence cos(1.57) is equal to 0.41
c_coding@V-3491: ~/CCD$ exit