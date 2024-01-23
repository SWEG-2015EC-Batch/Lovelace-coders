predict output 1
line                 output

  1     garbage       &v

  2    error          error

  3    &arr1[0]       &arr1[0]

  4    &arr1[2]       &ptr1

  5    garbage        &v

  6    error          error

  7    &arr1[0]       &arr1[0]

  8    &arr1[2]       &ptr1

  predict output 2
  
  58  58  58
  
  predict output 3

  k = 4
  
  x =950
  
  y =3000
  
  k = 14
  
  k = 28
  
  predict output 4
  
line   i   j   ptr   pptr

4      5   10  &i    garbage

5      5   10  &i    &ptr

6      3   10  &i    &ptr

7      7   10  &i    &ptr

8      7   10  &j    &ptr

9      7    9  &j    &ptr

10     7    9  &i    &ptr

11    -2    9  &i    &ptr
 output 5 address of i 10 address of j 10 address of j after Increments 11 address of j after 
 Increments 11 address of j after Increments 12 address of j 12 address of j

output #6 a[0] = 6 a[1] = 5 a[2] = 6 a[3] = 7 a[4] = 9.8

output #7 a[0] = 6 a[1] = 5 a[2] = 6 a[3] = 7 a[4] = 9.8

ouput #8

float marks[3][5] = {
    {10, 11, 12, 13, 14},
    {20, 21, 22, 23, 24},
    {30, 31, 32, 33, 34}
};

float *ptr = marks[0];
ptr += 2;
*ptr *= 2;
ptr = *(marks + 1) + 3;
*ptr += 7.0;
ptr += 4;
*ptr += 8.0;


1. *ptr *= 2; - This will update the value at marks[0][2] since ptr points to the third element of the first row.

2. *ptr += 7.0; - This will update the value at marks[1][3] since ptr is reassigned to point to the fourth element of the second row.

3. *ptr += 8.0; - This will update the value at marks[1][7] since ptr is moved forward by 4 positions and then updated.

So, the elements that will be updated are:
- marks[0][2]
- marks[1][3]
- marks[1][7]
