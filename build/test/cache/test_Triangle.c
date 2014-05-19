#include "unity.h"
#include "Triangle.h"


char *getTriangleName(int side1, int side2, int side3);



void setUp(void)

{

}



void tearDown(void)

{

}







void test_getTriangleName_given_2_2_3_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(2, 2 ,3);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)21);



}



void test_getTriangleName_given_3_2_2_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(3, 2 ,2);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)30);



}



void test_getTriangleName_given_2_3_2_should_return_isosceles(void)

{

 char *name;



 name = getTriangleName(2, 3 ,2);

 UnityAssertEqualString((const char*)("isosceles"), (const char*)(name), (((void *)0)), (_U_UINT)39);



}







void test_getTriangleName_given_1_2_3_should_return_scalene(void)

{

 char *name;



 name = getTriangleName(1, 2 ,3);

 UnityAssertEqualString((const char*)("scalene"), (const char*)(name), (((void *)0)), (_U_UINT)50);

}







void test_getTriangleName_given_3_3_3_should_return_equilateral(void)

{

 char *name;



 name = getTriangleName(3, 3 ,3);

 UnityAssertEqualString((const char*)("equilateral"), (const char*)(name), (((void *)0)), (_U_UINT)60);

}







void test_getTriangleName_given_0_2_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(0, 2 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)70);

}



void test_getTriangleName_given_2_0_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 0 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)78);

}



void test_getTriangleName_given_2_3_0_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 0 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)86);

}







void test_getTriangleName_given_negative2_6_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(-2, 6 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)96);

}



void test_getTriangleName_given_5_negative8_8_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(5, -8 ,8);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)104);

}





void test_getTriangleName_given_2_6_negative3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(2, 6 ,-3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)113);

}









void test_getTriangleName_given_1_1_3_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(1, 1 ,3);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)124);

}



void test_getTriangleName_given_1_4_1_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(1, 4 ,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)132);

}





void test_getTriangleName_given_5_1_1_should_return_invalid(void)

{

 char *name;



 name = getTriangleName(5, 1 ,1);

 UnityAssertEqualString((const char*)("invalid"), (const char*)(name), (((void *)0)), (_U_UINT)141);

}
